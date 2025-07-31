#include "payment.h"
#include "ui_payment.h"
#include "checkoutform.h"
#include <QMessageBox>
#include <QDoubleValidator>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QTableWidget>
#include <QDateTime>
#include <QScreen>
#include <QApplication>
#include "globals.h"
int bill_id = 0;  // Definition of global variable



payment::payment(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::payment)
{
    ui->setupUi(this);
    connect(ui->comboBox_method, &QComboBox::currentTextChanged,
            this, &payment::updatePaymentFieldsVisibility);

        QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);


    ui->lineEdit_discountapplied->setValidator(new QDoubleValidator(0, 100, 2, this));
    ui->lineEdit_cashgiven->setValidator(new QDoubleValidator(0, 999999, 2, this));
    ui->comboBox_method->addItem("Cash");
    ui->comboBox_method->addItem("Card");
    ui->comboBox_method->setCurrentText("Cash"); // Default method
    updatePaymentFieldsVisibility("Cash");

}

payment::~payment()
{
    delete ui;
}
void payment::setCardNumber(const QString &number) {
    ui->lineEdit_cardnumber->setText(number);
}

void payment::setCardPin(const QString &pin) {
    ui->lineEdit_cardpin->setText(pin);
}

void payment::setTotalAmount(const QString &amount) {
   ui->lineEdit_actualTotal->setText(amount);
}

void payment::setCashGiven(const QString &amount) {
    ui->lineEdit_cashgiven->setText(amount);
}


void payment::setReceipt(const QString &receipt) {
    ui->textEdit_receipt->setPlainText(receipt);
}

void payment::setCartData(const QList<QList<QString>> &data) {
    this->cartData = data;
}


void payment::updatePaymentFieldsVisibility(const QString &method)
{
    bool isCash = (method == "Cash");

    // Agar cash select hai to cash wali fields show karo
    ui->lineEdit_cashgiven->setVisible(isCash);
    ui->lineEdit_returnAmount->setVisible(isCash);
    ui->label_3->setVisible(isCash);
    ui->label_4->setVisible(isCash);

    // Card wali fields usi time show karo jab Card selected ho
    ui->lineEdit_cardnumber->setVisible(!isCash);
    ui->lineEdit_cardpin->setVisible(!isCash);
    ui->label->setVisible(!isCash);
    ui->label_2->setVisible(!isCash);
}

void payment::updateCashReturn()
{
    double finalTotal = ui->lineEdit_final_total->text().toDouble();  // Total after discount
    double cashGiven = ui->lineEdit_cashgiven->text().toDouble();
    double cashReturn = cashGiven - finalTotal;

    if (cashReturn < 0) {
        ui->lineEdit_returnAmount->setText("0.00");
    } else {
        ui->lineEdit_returnAmount->setText(QString::number(cashReturn, 'f', 2));
    }
}



void payment::on_lineEdit_cashgiven_textChanged(const QString &arg1) {
    bool ok;
    double amount = arg1.toDouble(&ok);
    if (!ok && !arg1.isEmpty()) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid number in Cash Given.");
        ui->lineEdit_cashgiven->clear();
        return;
    }
    updateCashReturn();
}


void payment::on_pushButton_backtocheckoutform_clicked()
{
    Checkoutform *back = new Checkoutform();
    back->show();
    this->close();
}
void payment::on_pushButton_paymeny_clicked()
{

    QString method = ui->comboBox_method->currentText();
    QString totalStr = ui->lineEdit_actualTotal->text();
    QString givenStr = ui->lineEdit_cashgiven->text();
    QString returnedStr = ui->lineEdit_returnAmount->text();
    QString cardNum = ui->lineEdit_cardnumber->text();
    QString pin = ui->lineEdit_cardpin->text();

    double total = totalStr.toDouble();
    //double customerGiven = givenStr.toDouble();
    //double returnAmount = returnedStr.toDouble();

    double customerGiven;
    double returnAmount = 0.0;

    if (method == "Card") {
        // Final total is what customer "pays" via card
        customerGiven = ui->lineEdit_final_total->text().toDouble();
    } else {
        // Cash case
        customerGiven = givenStr.toDouble();  // User entered amount
        returnAmount = returnedStr.toDouble();  // Calculated return
    }

    // 🔐 Card validation
    if (method == "Card") {
        if (cardNum.isEmpty() || pin.isEmpty()) {
            QMessageBox::warning(this, "Incomplete Details", "Please enter Card Number and PIN.");
            return;
        }
    }

    if (cartData.isEmpty()) {
        QMessageBox::critical(this, "Cart Error", "❌ No cart data found! Payment aborted.");
        return;
    }

    // 🚫 Check if bill_id already exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM sales WHERE bill_id = ?");
    checkQuery.addBindValue(bill_id);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", "❌ Could not check existing payment.\n" + checkQuery.lastError().text());
        return;
    }

    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Duplicate Payment", "⚠ This bill has already been paid.\nDuplicate payment is not allowed.");
        return;
    }
    QString localDateTimeStr = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    // 🛒 Loop through cart data and save into database
    for (const QList<QString> &row : cartData) {
        QString productIdStr = row[0];
        QString productName = row[1];
        double unitPrice = row[2].toDouble();
        int quantitySold = row[3].toInt();
        double totalPrice = unitPrice * quantitySold;
        double discount_applied = ui->lineEdit_discountapplied->text().toDouble();
        double total_amount = ui->lineEdit_final_total->text().toDouble();
        double final_total = total_amount - discount_applied;


        QSqlQuery saleQuery;
        saleQuery.prepare(R"(
            INSERT INTO sales (bill_id,user_email,product_id, quantity_sold, unit_price, total_price,discount_applied,final_total,
                               payment_method, customer_given, return_amount, sale_date_time)
            VALUES (?, ?, ?, ?, ?, ?, ?,?,?,?,?,?)
        )");
        saleQuery.addBindValue(bill_id);
        saleQuery.addBindValue(currentUserEmail);
        saleQuery.addBindValue(productIdStr);
        saleQuery.addBindValue(quantitySold);
        saleQuery.addBindValue(unitPrice);
        saleQuery.addBindValue(totalPrice);
        saleQuery.addBindValue(discount_applied);
        saleQuery.addBindValue(final_total);
        saleQuery.addBindValue(method);
        saleQuery.addBindValue(customerGiven);
        saleQuery.addBindValue(returnAmount);
        saleQuery.addBindValue(localDateTimeStr);


        if (!saleQuery.exec()) {
            qDebug() << "SQL Error:" << saleQuery.lastError().text();
            qDebug() << "Query was:" << saleQuery.lastQuery();
            QMessageBox::warning(this, "Database Error", "❌ Failed to record sale for: " + productName + "\n" + saleQuery.lastError().text());
        }

        // 🔄 Update product stock
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE product SET quantity = quantity - ? WHERE product_id = ?");
        updateQuery.addBindValue(quantitySold);
        updateQuery.addBindValue(productIdStr);

        if (!updateQuery.exec()) {
            QMessageBox::critical(this, "Update Failed", updateQuery.lastError().text());
            qDebug() << "UPDATE ERROR:" << updateQuery.lastError().text();
        }
    }

    // 🧾 Update receipt
    QString receipt = ui->textEdit_receipt->toPlainText();
    receipt += "\n=== PAYMENT CONFIRMED ===\n";
    receipt += "Payment Method: " + method + "\n";
    if (method == "Card") {
        receipt += "Card No: " + cardNum + "\n";
    }

    if (method == "Card") {
        receipt += "Amount Paid: Rs. " + QString::number(customerGiven, 'f', 2) + "\n";
    } else {
        receipt += "Amount Given: Rs. " + givenStr + "\n";
        receipt += "Amount Return: Rs. " + returnedStr + "\n";
    }

    //receipt += "Amount Paid: Rs. " + givenStr + "\n";
   // receipt += "Amount Return: Rs. " + returnedStr + "\n";

    QDateTime local = QDateTime::currentDateTime();
    local.setTimeSpec(Qt::LocalTime);
    //qDebug() << "Current Time:" << local.toString(Qt::ISODate);
    qDebug() << "UTC Time:" << QDateTime::currentDateTimeUtc().toString(Qt::ISODate);
    qDebug() << "Local Time:" << QDateTime::currentDateTime().toString(Qt::ISODate);


    receipt += "Date/Time: " + QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + "\n";

    receipt += "==========================";

    ui->textEdit_receipt->setPlainText(receipt); // ✅ Show final receipt

    // ✅ Clear input fields only (not receipt)
    ui->lineEdit_cashgiven->clear();
    ui->lineEdit_returnAmount->clear();
    ui->lineEdit_cardnumber->clear();
    ui->lineEdit_cardpin->clear();
    ui->lineEdit_actualTotal->clear();
    ui->lineEdit_discountapplied->clear();
    ui->lineEdit_discountAmount->clear();
    ui->lineEdit_final_total->clear();

    QMessageBox::information(this, "Payment", "✔ Payment Done.");

    // ✅ Clear cart in Checkoutform
    Checkoutform *checkoutForm = qobject_cast<Checkoutform *>(this->parent());
    if (checkoutForm) {
        checkoutForm->findChild<QTableWidget*>("tablewidgetcart")->setRowCount(0);
        checkoutForm->findChild<QTextEdit*>("textEdit_receipt")->clear();
        checkoutForm->findChild<QLineEdit*>("lineEdit_totalafterdiscount")->clear();
    }

    qDebug() << "CartData being processed in payment form:" << cartData;
}

void payment::extractInfoFromReceipt()
{
    QString receiptText = ui->textEdit_receipt->toPlainText();

    QRegularExpression actualTotalRegex(R"(Actual Total: Rs\. (\d+(\.\d+)?))");
    QRegularExpressionMatch matchActual = actualTotalRegex.match(receiptText);

    if (!matchActual.hasMatch()) return;
    double actualTotal = matchActual.captured(1).toDouble();
    ui->lineEdit_actualTotal->setText(QString::number(actualTotal, 'f', 2));

    QRegularExpression discountPercentRegex(R"(Discount Applied: (\d+(\.\d+)?)%)");
    QRegularExpressionMatch matchDiscount = discountPercentRegex.match(receiptText);
    if (!matchDiscount.hasMatch()) return;
    double discountPercent = matchDiscount.captured(1).toDouble();
    ui->lineEdit_discountapplied->setText(QString::number(discountPercent, 'f', 2));

    QRegularExpression finalTotalRegex(R"(Total \(after discount\): Rs\. (\d+(\.\d+)?))");
    QRegularExpressionMatch matchFinal = finalTotalRegex.match(receiptText);
    if (!matchFinal.hasMatch()) return;
    double finalTotal = matchFinal.captured(1).toDouble();
    ui->lineEdit_final_total->setText(QString::number(finalTotal, 'f', 2));

    double discountAmount = actualTotal - finalTotal;
    ui->lineEdit_discountAmount->setText(QString::number(discountAmount, 'f', 2));

    updateCashReturn();
}
