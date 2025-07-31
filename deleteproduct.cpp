#include "deleteproduct.h"
#include "ui_deleteproduct.h"
#include "adminpanel.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include <QDebug>

deleteproduct::deleteproduct(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::deleteproduct)
{
    ui->setupUi(this);
}

deleteproduct::~deleteproduct()
{
    delete ui;
}

void deleteproduct::on_pushButton_clicked()
{
        qDebug() << "Delete button clicked!";

        QString name = ui->lineEdit->text();

        if (name.isEmpty()) {
            QMessageBox::warning(this, "Input Error", "Product name is required to delete.");
            return;
        }

        QSqlQuery query;
        query.prepare("DELETE FROM product WHERE name = ?");
        query.addBindValue(name);

        if (query.exec()) {
            if (query.numRowsAffected() > 0) {
                QMessageBox::information(this, "Success", "Product deleted successfully!");
                qDebug() << "Product deleted.";
            } else {
                QMessageBox::warning(this, "Not Found", "No product found with that name.");
                qDebug() << "No rows deleted.";
            }
        } else {
            QMessageBox::critical(this, "Error", "Deletion failed: " + query.lastError().text());
            qDebug() << "Query Error:" << query.lastError().text();
        }

}



void deleteproduct::on_pushButton_deleteproductback_clicked()
{
    adminpanel *back = new adminpanel();
    back->show();
    this->close();
}

