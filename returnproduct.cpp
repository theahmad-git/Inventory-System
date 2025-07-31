#include "returnproduct.h"
#include "ui_returnproduct.h"
#include "userchoice.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>
#include <QScreen>
#include <QApplication>
#include "globals.h"

returnproduct::returnproduct(QWidget *parent, const QString &userEmail) :
    QWidget(parent),
    ui(new Ui::returnproduct),
    currentUserEmail(userEmail)

{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    ui->lineEdit_totalamountreturn->setReadOnly(true);
    connect(ui->lineEdit_producttotalamount, &QLineEdit::textChanged, this, &returnproduct::updateTotalAmountReturn);
    connect(ui->lineEdit_discount, &QLineEdit::textChanged, this, &returnproduct::updateTotalAmountReturn);

}

returnproduct::~returnproduct()
{
    delete ui;
}

void returnproduct::on_pushButton_backtouserchoice_clicked()
{
    userchoice *back = new userchoice();
    back->show();
    this->close();
}


void returnproduct::on_pushButton_logout_clicked()
{
    QApplication::quit();
}

void returnproduct::updateTotalAmountReturn()
{
    QString totalAmountStr = ui->lineEdit_producttotalamount->text().trimmed();
    QString discountStr = ui->lineEdit_discount->text().trimmed();

    QRegularExpression regex("^[0-9]*\\.?[0-9]+$");
    if (!regex.match(totalAmountStr).hasMatch() || !regex.match(discountStr).hasMatch()) {
        ui->lineEdit_totalamountreturn->clear();
        return;
    }

    double totalAmount = totalAmountStr.toDouble();
    double discountPercent = discountStr.toDouble();

    if (discountPercent < 0 || discountPercent > 100) {
        ui->lineEdit_totalamountreturn->clear();
        return;
    }

    double discountAmount = (discountPercent / 100.0) * totalAmount;
    double totalamountreturn = totalAmount - discountAmount;

    ui->lineEdit_totalamountreturn->setText(QString::number(totalamountreturn, 'f', 2));
}
void returnproduct::on_pushButton_return_clicked()
{
    QString productId = ui->lineEdit_product_id->text().trimmed();
    double quantity = ui->spinBox_quantity->value();
    QString defective = ui->comboBox_defective->currentText();
    QString totalAmountStr = ui->lineEdit_producttotalamount->text().trimmed();
    QString discountStr = ui->lineEdit_discount->text().trimmed();
    QString feedback =ui->lineEdit_feedback->text();

    QString datetime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");

    if (productId.isEmpty() || totalAmountStr.isEmpty() || discountStr.isEmpty()) {
        QMessageBox::warning(this, "Missing Input", "Please fill all the required fields.");
        return;
    }

    QRegularExpression regex("^[0-9]*\\.?[0-9]+$");
    if (!regex.match(totalAmountStr).hasMatch() || !regex.match(discountStr).hasMatch()) {
        QMessageBox::warning(this, "Invalid Input", "Only numeric values allowed in amount fields.");
        return;
    }

    if (quantity <= 0) {
        QMessageBox::warning(this, "Invalid Quantity", "Quantity must be greater than 0.");
        return;
    }

    double totalAmount = totalAmountStr.toDouble();
    double discountPercent = discountStr.toDouble();

    if (discountPercent < 0 || discountPercent > 100) {
        QMessageBox::warning(this, "Invalid Discount", "Discount must be between 0% and 100%.");
        return;
    }

    double totalamountreturn = ui->lineEdit_totalamountreturn->text().toDouble();
    QString billId = ui->lineEdit_billId->text().trimmed();
    if (billId.isEmpty()) {
        QMessageBox::warning(this, "Missing Input", "Please enter Bill ID.");
        return;
    }
    bool ok;
    int bill_id = billId.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Invalid Bill ID", "Bill ID must be a number.");
        return;
    }

    // ✅ Check product exists in product table
    QSqlQuery checkProductQuery;
    checkProductQuery.prepare("SELECT COUNT(*) FROM product WHERE product_id = ?");
    checkProductQuery.addBindValue(productId);
    if (!checkProductQuery.exec() || !checkProductQuery.next() || checkProductQuery.value(0).toInt() == 0) {
        QMessageBox::critical(this, "Invalid Product", "Product ID not found in product table.");
        return;
    }

    // ✅ Check product sold under this bill ID
    QSqlQuery checkSaleQuery;
    checkSaleQuery.prepare("SELECT COUNT(*) FROM sales WHERE product_id = ? AND bill_id = ? ");
    checkSaleQuery.addBindValue(productId);
    checkSaleQuery.addBindValue(bill_id);
   //checkSaleQuery.addBindValue(quantity);
    if (!checkSaleQuery.exec() || !checkSaleQuery.next() || checkSaleQuery.value(0).toInt() == 0) {
        QMessageBox::critical(this, "Not Found", "This product was not sold under the provided Bill ID.");
        return;
    }


    // ✅ Insert into sales_return table
    QSqlQuery insertQuery;
    insertQuery.prepare(R"(
        INSERT INTO sales_return (product_id, quantity, total_amount_return, defective, return_date_time,bill_id,user_email,feedback)
        VALUES (?, ?, ?, ? , ? , ?,?,?)
    )");
    insertQuery.addBindValue(productId);
    insertQuery.addBindValue(quantity);
    insertQuery.addBindValue(totalamountreturn);
    insertQuery.addBindValue(defective);
    insertQuery.addBindValue(datetime);
    insertQuery.addBindValue(bill_id);
    insertQuery.addBindValue(currentUserEmail);
    insertQuery.addBindValue(feedback);

    if (insertQuery.exec()) {
        // ✅ If product is not defective, update stock
        if (defective.toLower() == "no") {
            QSqlQuery updateStock;
            updateStock.prepare("UPDATE product SET quantity = quantity + ? WHERE product_id = ?");
            updateStock.addBindValue(quantity);
            updateStock.addBindValue(productId);

            if (!updateStock.exec()) {
                qDebug() << "Stock update failed:" << updateStock.lastError().text();
                QMessageBox::warning(this, "Warning", "Product returned but stock update failed.");
            }
        }

        QMessageBox::information(this, "Success", "✔ Product return successfully recorded.");

        // ✅ Clear form
        ui->lineEdit_product_id->clear();
        ui->lineEdit_producttotalamount->clear();
        ui->lineEdit_discount->clear();
        ui->lineEdit_totalamountreturn->clear();
        ui->spinBox_quantity->setValue(0);
        ui->comboBox_defective->setCurrentIndex(0);
        ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
        ui->lineEdit_billId->clear();
        ui->lineEdit_feedback->clear();
    } else {
        QMessageBox::critical(this, "Error", "❌ Failed to save return.\n" + insertQuery.lastError().text());
    }
}
void returnproduct::on_pushButton_search_bill_id_clicked()
{
    QString billId = ui->lineEdit_billId->text().trimmed();

    if (billId.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Bill ID.");
        return;
    }

    bool ok;
    int bill_id = billId.toInt(&ok);
    if (!ok) {
        QMessageBox::warning(this, "Invalid Input", "Please enter a valid numeric Bill ID.");
        return;
    }

    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM sales WHERE bill_id = ?");
    checkQuery.addBindValue(bill_id);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error", "Failed to query the database:\n" + checkQuery.lastError().text());
        return;
    }

    if (checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        QMessageBox::information(this, "Matched", "✅ Bill Found Successfully.");
    } else {
        QMessageBox::warning(this, "Not Found", "❌ Bill ID not found in records.");
    }
}


