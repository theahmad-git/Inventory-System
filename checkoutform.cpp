#include "checkoutform.h"
#include "ui_checkoutform.h"
#include "userlogin.h"
#include "payment.h"
#include "userchoice.h"
#include <QDoubleValidator>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>
#include <QScreen>
#include <QApplication>
#include "globals.h"
#include <QStackedWidget>
#include <QMouseEvent>
#include <QAbstractItemView>
#include <QTableWidget>
#include <QShortcut>

Checkoutform::Checkoutform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Checkoutform)
{
    ui->setupUi(this);

    QShortcut *deleteShortcut = new QShortcut(QKeySequence(Qt::Key_Delete), this);
    connect(deleteShortcut, &QShortcut::activated, this, &Checkoutform::confirmAndRemoveCartItem);

    QShortcut *enterShortcut = new QShortcut(QKeySequence(Qt::Key_Return), this);
    connect(enterShortcut, &QShortcut::activated, this, [this]() {
        if (ui->tablewidgetcart->currentItem()) {
            int row = ui->tablewidgetcart->currentRow();
            int col = ui->tablewidgetcart->currentColumn();
            onCartQuantityChanged(row, col);
        }
    });

    ui->tablewidgetcart->setEditTriggers(QAbstractItemView::DoubleClicked |
                                         QAbstractItemView::EditKeyPressed |
                                         QAbstractItemView::AnyKeyPressed);

    // Make only quantity column editable
    for (int i = 0; i < ui->tablewidgetcart->rowCount(); ++i) {
        QTableWidgetItem *qtyItem = ui->tablewidgetcart->item(i, 3);
        if (!qtyItem) {
            qtyItem = new QTableWidgetItem();
            ui->tablewidgetcart->setItem(i, 3, qtyItem);
        }
        qtyItem->setFlags(qtyItem->flags() | Qt::ItemIsEditable);
    }

    ui->tablewidgetproduct->viewport()->installEventFilter(this);
    ui->tablewidgetcart->viewport()->installEventFilter(this);
    ui->tablewidgetcart->installEventFilter(this);

    ui->tablewidgetproduct->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tablewidgetproduct->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tablewidgetproduct->setSelectionMode(QAbstractItemView::SingleSelection);

    ui->tablewidgetcart->setEditTriggers(QAbstractItemView::AllEditTriggers);
    ui->tablewidgetcart->setSelectionBehavior(QAbstractItemView::SelectItems);
    ui->tablewidgetcart->setSelectionMode(QAbstractItemView::SingleSelection);

    connect(ui->tablewidgetcart, &QTableWidget::cellChanged, this, &Checkoutform::onCartQuantityChanged);

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());

    connect(ui->lineEdit_searchproduct, &QLineEdit::textChanged,
            this, &Checkoutform::on_lineEdit_searchproduct_textChanged);

    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    ui->lineEdit_discount->setValidator(new QDoubleValidator(0, 100, 2, this));
    ui->pushButton_addtocart->setDefault(false);
    ui->pushButton_addtocart->setAutoDefault(false);
    ui->pushButton_addtocart->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_remove->setDefault(false);
    ui->pushButton_remove->setAutoDefault(false);
    ui->pushButton_remove->setFocusPolicy(Qt::NoFocus);
    ui->pushButton_generatebill->setDefault(false);
    ui->pushButton_generatebill->setAutoDefault(false);
    ui->pushButton_generatebill->setFocusPolicy(Qt::NoFocus);

    ui->tablewidgetproduct->setColumnCount(4);
    ui->tablewidgetproduct->setHorizontalHeaderLabels(QStringList() << "Product ID" << "Name" << "Price" << "Available");

    ui->tablewidgetcart->setColumnCount(5);
    ui->tablewidgetcart->setHorizontalHeaderLabels(QStringList() << "Product ID" << "Name" << "Price" << "Qty" << "Total");

    QPalette palette = ui->tablewidgetproduct->palette();
    palette.setColor(QPalette::Highlight, QColor(200, 200, 255));
    palette.setColor(QPalette::HighlightedText, Qt::black);
    ui->tablewidgetproduct->setPalette(palette);
    ui->tablewidgetcart->setPalette(palette);
}

Checkoutform::~Checkoutform()
{
    delete ui;
}

bool Checkoutform::eventFilter(QObject *obj, QEvent *event)
{
    // Handle double-click on product table viewport
    if (obj == ui->tablewidgetproduct->viewport() && event->type() == QEvent::MouseButtonDblClick)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        QModelIndex index = ui->tablewidgetproduct->indexAt(mouseEvent->pos());

        if (index.isValid())
        {
            ui->tablewidgetproduct->selectRow(index.row());
            addSelectedProductToCart();
            return true; // Event handled
        }
    }

    // Handle double-click on cart table viewport
    if (obj == ui->tablewidgetcart->viewport() && event->type() == QEvent::MouseButtonDblClick)
    {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        QModelIndex index = ui->tablewidgetcart->indexAt(mouseEvent->pos());

        if (index.isValid())
        {
            ui->tablewidgetcart->selectRow(index.row());
            confirmAndRemoveCartItem();
            return true; // Event handled
        }
    }

    // Pass the event on to the parent class
    return QWidget::eventFilter(obj, event);

    // Handle Enter key in cart table
    if (obj == ui->tablewidgetcart && event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
        if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter) {
            int row = ui->tablewidgetcart->currentRow();
            int col = ui->tablewidgetcart->currentColumn();
            if (col == 3) { // Quantity column
                onCartQuantityChanged(row, col);
                return true;
            }
        }
    }

    return QWidget::eventFilter(obj, event);

    // Handle single click to make quantity editable
    if (obj == ui->tablewidgetcart->viewport() && event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        QModelIndex index = ui->tablewidgetcart->indexAt(mouseEvent->pos());

        if (index.isValid() && index.column() == 3) { // Quantity column
            ui->tablewidgetcart->edit(index);
            return true;
        }
    }

    return QWidget::eventFilter(obj, event);
}

void Checkoutform::ensureQuantityEditable()
{
    for (int i = 0; i < ui->tablewidgetcart->rowCount(); ++i) {
        QTableWidgetItem *qtyItem = ui->tablewidgetcart->item(i, 3);
        if (qtyItem) {
            qtyItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsEnabled);
        }
    }
}

void Checkoutform::addSelectedProductToCart()
{
    int selectedRow = ui->tablewidgetproduct->currentRow();
    if (selectedRow < 0) {
        QMessageBox::warning(this, "Error", "No product selected!");
        return;
    }

    // Get product details
    QString product_id = ui->tablewidgetproduct->item(selectedRow, 0)->text();
    QString name = ui->tablewidgetproduct->item(selectedRow, 1)->text();
    double price = ui->tablewidgetproduct->item(selectedRow, 2)->text().toDouble();
    int available = ui->tablewidgetproduct->item(selectedRow, 3)->text().toInt();

    // Check if already in cart
    for (int i = 0; i < ui->tablewidgetcart->rowCount(); i++) {
        if (ui->tablewidgetcart->item(i, 0)->text() == product_id) {
            QMessageBox::information(this, "Notice", "Product already in cart");
            return;
        }
    }

    // Add to cart
    int newRow = ui->tablewidgetcart->rowCount();
    ui->tablewidgetcart->insertRow(newRow);

    // Set product info (non-editable)
    QTableWidgetItem *item = new QTableWidgetItem(product_id);
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(newRow, 0, item);

    item = new QTableWidgetItem(name);
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(newRow, 1, item);

    item = new QTableWidgetItem(QString::number(price));
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(newRow, 2, item);

    // Quantity (editable)
    QTableWidgetItem *qtyItem = new QTableWidgetItem("1");
    qtyItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsEnabled);
    ui->tablewidgetcart->setItem(newRow, 3, qtyItem);

    // Total (non-editable)
    item = new QTableWidgetItem(QString::number(price));
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(newRow, 4, item);

    // Start editing quantity
    ui->tablewidgetcart->editItem(qtyItem);
    updateTotalAmount();
}

void Checkoutform::confirmAndRemoveCartItem()
{
    if (!ui->tablewidgetcart->hasFocus()) return;

    int row = ui->tablewidgetcart->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "Remove Item", "Please select an item to remove.");
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Removal",
                                  "Are you sure you want to remove this item?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        ui->tablewidgetcart->removeRow(row);
        updateTotalAmount();
    }
}

void Checkoutform::onCartQuantityChanged(int row, int column)
{
    if (column != 3) return;

    QTableWidgetItem *qtyItem = ui->tablewidgetcart->item(row, 3);
    QTableWidgetItem *priceItem = ui->tablewidgetcart->item(row, 2);
    QTableWidgetItem *totalItem = ui->tablewidgetcart->item(row, 4);

    if (!qtyItem || !priceItem || !totalItem) return;

    bool ok;
    int quantity = qtyItem->text().toInt(&ok);

    // Get available quantity from product table
    int availableQty = 0;
    QString productId = ui->tablewidgetcart->item(row, 0)->text();
    for (int i = 0; i < ui->tablewidgetproduct->rowCount(); ++i) {
        if (ui->tablewidgetproduct->item(i, 0)->text() == productId) {
            availableQty = ui->tablewidgetproduct->item(i, 3)->text().toInt();
            break;
        }
    }

    if (!ok || quantity <= 0) {
       QMessageBox::warning(this, "Invalid Quantity", "Please enter a valid positive number.");
       qtyItem->setText("1");
        totalItem->setText(priceItem->text());
       return;
   }

    if (quantity > availableQty) {
        QMessageBox::warning(this, "Insufficient Stock",
                             QString("Only %1 units available.").arg(availableQty));
        qtyItem->setText(QString::number(availableQty));
        quantity = availableQty;
    }

    // Calculate and update total
    double price = priceItem->text().toDouble();
    double total = price * quantity;
    totalItem->setText(QString::number(total, 'f', 2));

    updateTotalAmount();
}
void Checkoutform::updateTotalAmount() {
    double total = calculatecarttotal();
    ui->lineEdit_totalafterdiscount->setText(QString::number(total));

}

double Checkoutform::calculatecarttotal()
{
    double total = 0.0;
    int rowCount = ui->tablewidgetcart->rowCount();

    for (int i = 0; i < rowCount; ++i) {
        double price = ui->tablewidgetcart->item(i, 2)->text().toDouble();
        int qty = ui->tablewidgetcart->item(i, 3)->text().toInt();
        total += price * qty;
    }

    return total;
}


void Checkoutform::applyDiscount()
{
    double total = calculatecarttotal();
    double discountPercent = ui->lineEdit_discount->text().toDouble();
    double discountedTotal = total - (total * discountPercent / 100.0);

    ui->lineEdit_totalafterdiscount->setText(QString::number(discountedTotal));

}


void Checkoutform::on_lineEdit_discount_textChanged(const QString &discountText) {
    bool ok;
    double discount = discountText.toDouble(&ok);
    if (!ok && !discountText.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid number in Discount.");
        ui->lineEdit_discount->clear();
        return;
    }
    applyDiscount();
}
void Checkoutform::on_pushButton_addtocart_clicked() {
    int selectedRow = ui->tablewidgetproduct->currentRow();
    if (selectedRow < 0) {
        QMessageBox::warning(this, "Selection Error", "Please select a product.");
        return;
    }

    QString product_id = ui->tablewidgetproduct->item(selectedRow, 0)->text();
    QString name = ui->tablewidgetproduct->item(selectedRow, 1)->text();
    double price = ui->tablewidgetproduct->item(selectedRow, 2)->text().toDouble();
    int availableQty = ui->tablewidgetproduct->item(selectedRow, 3)->text().toInt();
    int selectedQty = ui->quantitybox->value();

    if (selectedQty <= 0 || selectedQty > availableQty) {
        QMessageBox::warning(this, "Invalid Quantity", "Select a valid quantity.");
        return;
    }

    // Check if already in cart
    for (int i = 0; i < ui->tablewidgetcart->rowCount(); i++) {
        if (ui->tablewidgetcart->item(i, 0)->text() == product_id) {
            QMessageBox::information(this, "Notice", "Product already in cart");
            return;
        }
    }

    double total = price * selectedQty;
    int cartRow = ui->tablewidgetcart->rowCount();
    ui->tablewidgetcart->insertRow(cartRow);

    // Product ID (non-editable)
    QTableWidgetItem *item = new QTableWidgetItem(product_id);
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(cartRow, 0, item);

    // Name (non-editable)
    item = new QTableWidgetItem(name);
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(cartRow, 1, item);

    // Price (non-editable)
    item = new QTableWidgetItem(QString::number(price));
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(cartRow, 2, item);

    // Quantity (editable)
    QTableWidgetItem *qtyItem = new QTableWidgetItem(QString::number(selectedQty));
    qtyItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsEnabled);
    ui->tablewidgetcart->setItem(cartRow, 3, qtyItem);

    // Total (non-editable)
    item = new QTableWidgetItem(QString::number(total));
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tablewidgetcart->setItem(cartRow, 4, item);

    // Focus on quantity
    ui->tablewidgetcart->editItem(qtyItem);

    updateTotalAmount();
    applyDiscount();
    ui->quantitybox->setValue(1);
    ui->lineEdit_searchproduct->clear();
}

void Checkoutform::on_pushButton_remove_clicked()
{
    qDebug() << "Remove button clicked";
    int row = ui->tablewidgetcart->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "Remove Item", "Please select an item to remove.");
        return;
    }


    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Removal", "Are you sure you want to remove this item?",
    QMessageBox::Yes | QMessageBox::No);
    qDebug() << "User selected:" << (reply == QMessageBox::Yes ? "Yes" : "No");

    if (reply == QMessageBox::Yes) {
        ui->tablewidgetcart->removeRow(row);
        qDebug() << "Row removed.";
        updateTotalAmount();
    }else {
        qDebug() << "Row not removed.";
    }

}

void Checkoutform::on_pushButton_generatebill_clicked() {
    int rows = ui->tablewidgetcart->rowCount();
    if (rows == 0) {
        QMessageBox::warning(this, "Empty Cart", "There are no items in the cart.");
        return;
    }


    QSqlQuery q("SELECT MAX(bill_id) FROM sales");
    if (q.next()) {
        bill_id = q.value(0).toInt() + 1;
    } else {
        bill_id = 1;
    }

    QString receipt = "======== RECEIPT ========\n";
    receipt += "Bill ID: " + QString::number(bill_id) + "\n";
    receipt += "Items:\n";

    double actualTotal = 0.0;
    for (int i = 0; i < rows; ++i) {
        QString productIdStr = ui->tablewidgetcart->item(i, 0)->text();
        QString productName = ui->tablewidgetcart->item(i, 1)->text();
        double unitPrice = ui->tablewidgetcart->item(i, 2)->text().toDouble();
        int quantitySold = ui->tablewidgetcart->item(i, 3)->text().toInt();
        double totalPrice = unitPrice * quantitySold;

        actualTotal += totalPrice;

        receipt += QString("ID: %1 | %2 x%3 @ Rs.%4 = Rs.%5\n")
                       .arg(productIdStr)
                       .arg(productName)
                       .arg(quantitySold)
                       .arg(unitPrice)
                       .arg(totalPrice);
    }

    receipt += "\n--------------------------\n";

    double discountPercent = ui->lineEdit_discount->text().toDouble();
    double discountAmount = actualTotal * (discountPercent / 100.0);
    double totalAfterDiscount = actualTotal - discountAmount;

    receipt += "Actual Total: Rs. " + QString::number(actualTotal, 'f', 2) + "\n";
    receipt += "Discount Applied: " + QString::number(discountPercent, 'f', 2) + "% (Rs. " + QString::number(discountAmount, 'f', 2) + ")\n";
    receipt += "Total (after discount): Rs. " + QString::number(totalAfterDiscount, 'f', 2) + "\n";

    receipt += "==========================";

    ui->textEdit_receipt->setPlainText(receipt);

    updateTotalAmount();
}

void Checkoutform::on_comboBox_2_activated(int index) {

}

void Checkoutform::on_comboBox_method_activated(int index)
{

}


void Checkoutform::on_pushButton_2_clicked()
{
    QApplication::quit();
}

void Checkoutform::on_pushButton_clicked()
{
    userchoice *back = new userchoice();
    back->show();
    this->close();
}


void Checkoutform::on_pushButton_clearform_clicked()
{

    // Clear cart
    ui->tablewidgetcart->setRowCount(0);

    // Reset all totals and inputs
    ui->lineEdit_discount->clear();
    ui->lineEdit_totalafterdiscount->clear();
    ui->textEdit_receipt->clear();
    ui->tablewidgetproduct->clear();

    // Reset spinbox and comboBoxes
    ui->quantitybox->setValue(1);
}


void Checkoutform::on_pushButton_paynow_clicked()
{
    // ✅ Check if receipt is empty
    if (ui->textEdit_receipt->toPlainText().trimmed().isEmpty()) {
        QMessageBox::warning(this, "No Bill", " You have not generated any bill yet.");
        return;
    }

    QList<QList<QString>> cartData;
    int rows = ui->tablewidgetcart->rowCount();
    int cols = ui->tablewidgetcart->columnCount();

    for (int i = 0; i < rows; ++i) {
        QList<QString> row;
        for (int j = 0; j < cols; ++j) {
            row.append(ui->tablewidgetcart->item(i, j)->text());
        }
        cartData.append(row);
    }

    QWidget *w = this->parentWidget();
    while (w != nullptr && !qobject_cast<userchoice *>(w)) {
        w = w->parentWidget();
    }
    userchoice *panel = qobject_cast<userchoice *>(w);

    if (panel) {
        payment *pay = new payment();
        pay->setCartData(cartData);
        pay->setReceipt(ui->textEdit_receipt->toPlainText());
        pay->extractInfoFromReceipt();
        //pay->setTotalAmount(ui->lineEdit_totalafterdiscount->text());

        int index = panel->getStackedWidget()->addWidget(pay);
        panel->getStackedWidget()->setCurrentIndex(index);
        this->hide();
    }

    else {
        QMessageBox::critical(this, "Error", "Parent userchoice panel not found.");
    }

}


void Checkoutform::on_lineEdit_searchproduct_textChanged(const QString &searchproduct)
{
    QString trimmedSearch = searchproduct.trimmed();

    ui->tablewidgetproduct->setRowCount(0);
    if (trimmedSearch.isEmpty()) {
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT product_id, name, price, quantity FROM product WHERE LOWER(product_id) LIKE LOWER(?) ");
    query.addBindValue("%" + trimmedSearch + "%");

    if (query.exec()) {
        int row = 0;
        while (query.next()) {
            ui->tablewidgetproduct->insertRow(row);
            ui->tablewidgetproduct->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->tablewidgetproduct->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->tablewidgetproduct->setItem(row, 2, new QTableWidgetItem(QString::number(query.value(2).toDouble())));
            ui->tablewidgetproduct->setItem(row, 3, new QTableWidgetItem(QString::number(query.value(3).toInt())));
            row++;
        }
    } else {
        qDebug() << "Search query error:" << query.lastError().text();
    }
}


