#include "editadmin.h"
#include "ui_editadmin.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>

editadmin::editadmin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::editadmin)
{
    ui->setupUi(this);
    loadAllAdmin();
    ui->tableWidget_admincheck->setColumnCount(2);
    QStringList headers = {"Email", "Password"};
    ui->tableWidget_admincheck->setHorizontalHeaderLabels(headers);

    loadAllAdmin();
}

editadmin::~editadmin()
{
    delete ui;
}

void editadmin::loadAllAdmin()
{
    ui->tableWidget_admincheck->setRowCount(0);
    QSqlQuery query("SELECT email, password FROM admin");
    int row = 0;

    while (query.next()) {
        ui->tableWidget_admincheck->insertRow(row);
        ui->tableWidget_admincheck->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget_admincheck->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        row++;
    }
}

void editadmin::on_pushButton_addadmin_clicked()
{
    QString email = ui->lineEdit_5->text().trimmed();
    QString password = ui->lineEdit_2->text().trimmed();

    if (email.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter both email and password.");
        return;
    }

    if (!email.contains("@")) {
        QMessageBox::warning(this, "Invalid Email", "Email must contain '@' symbol.");
        return;
    }
    QSqlQuery query;
    query.prepare("INSERT INTO admin (email, password) VALUES (?, ?)");
    query.addBindValue(email);
    query.addBindValue(password);

    if (query.exec()) {
       // QMessageBox::information(this, "Success", "Admin added successfully.");
        ui->lineEdit_5->clear();
        ui->lineEdit_2->clear();
        loadAllAdmin();
    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
    }
}

void editadmin::on_pushButton_deleteadmin_clicked()
{
    int row = ui->tableWidget_admincheck->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select an admin to delete.");
        return;
    }

    QString email = ui->tableWidget_admincheck->item(row, 0)->text();
    QSqlQuery query;
    query.prepare("DELETE FROM admin WHERE email = ?");
    query.addBindValue(email);

    if (query.exec()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirm Removal", "Are you sure you want to delete this admin?",
                                      QMessageBox::Yes | QMessageBox::No);
        qDebug() << "Admin selected:" << (reply == QMessageBox::Yes ? "Yes" : "No");

        if (reply == QMessageBox::Yes) {
            ui->tableWidget_admincheck->removeRow(row);
            qDebug() << "Admin Deleted Successfully";
        } else {
            qDebug() << "Failed to delete the admin.";
        }
    }
}

void editadmin::on_pushButton_searchadmin_clicked()
{
    QString searchEmail = ui->lineEdit_4->text().trimmed();

    if (searchEmail.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter an email to search.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT email, password FROM admin ORDER BY CASE WHEN email = ? THEN 0 ELSE 1 END, email ASC");
    query.addBindValue(searchEmail);

    if (query.exec()) {
        ui->tableWidget_admincheck->setRowCount(0);
        int row = 0;
        bool found = false;

        while (query.next()) {
            QString email = query.value(0).toString();
            QString password = query.value(1).toString();

            ui->tableWidget_admincheck->insertRow(row);
            ui->tableWidget_admincheck->setItem(row, 0, new QTableWidgetItem(email));
            ui->tableWidget_admincheck->setItem(row, 1, new QTableWidgetItem(password));

            if (email == searchEmail)
                found = true;

            row++;
            ui->lineEdit_4->clear();
        }

        if (!found) {
            QMessageBox::information(this, "Not Found", "No admin found with this email.");
        }

    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
    }
}
