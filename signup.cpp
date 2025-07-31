#include "signup.h"
#include "ui_signup.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QTimer>

signup::signup(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::signup)
{
    ui->setupUi(this);
    loadAllUsers();
    ui->tableWidget_usercheck->setColumnCount(2);
    QStringList headers = {"Email", "Password"};
    ui->tableWidget_usercheck->setHorizontalHeaderLabels(headers);

    loadAllUsers();
}


signup::~signup()
{
    delete ui;
}

void signup::loadAllUsers()
{
    ui->tableWidget_usercheck->setRowCount(0);
    QSqlQuery query("SELECT email, password FROM users");
    int row = 0;

    while (query.next()) {
        ui->tableWidget_usercheck->insertRow(row);
        ui->tableWidget_usercheck->setItem(row, 0, new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget_usercheck->setItem(row, 1, new QTableWidgetItem(query.value(1).toString()));
        row++;
    }
}

void signup::on_pushButton_adduser_clicked()
{
    QString email = ui->lineEdit->text().trimmed();
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
    query.prepare("INSERT INTO users (email, password) VALUES (?, ?)");
    query.addBindValue(email);
    query.addBindValue(password);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "User added successfully.");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        loadAllUsers();
    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
    }
}

void signup::on_pushButton_deleteuser_clicked()
{
    int row = ui->tableWidget_usercheck->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a user to delete.");
        return;
    }

    QString email = ui->tableWidget_usercheck->item(row, 0)->text();
    QSqlQuery query;
    query.prepare("DELETE FROM users WHERE email = ?");
    query.addBindValue(email);

    if (query.exec()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirm Removal", "Are you sure you want to delete this user?",
                                      QMessageBox::Yes | QMessageBox::No);
        qDebug() << "User selected:" << (reply == QMessageBox::Yes ? "Yes" : "No");

        if (reply == QMessageBox::Yes) {
            ui->tableWidget_usercheck->removeRow(row);
            qDebug() << "User Deleted Successfully";
        }else {
            qDebug() << "Failed to delete the user.";
        }
    }

}

void signup::on_pushButton_searchuser_clicked()
{
    QString searchEmail = ui->lineEdit_3->text().trimmed();

    if (searchEmail.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter an email to search.");
        return;
    }

    QSqlQuery query;
    query.prepare("SELECT email, password FROM users ORDER BY CASE WHEN email = ? THEN 0 ELSE 1 END, email ASC");
    query.addBindValue(searchEmail);

    if (query.exec()) {
        ui->tableWidget_usercheck->setRowCount(0);
        int row = 0;
        bool found = false;

        while (query.next()) {
            QString email = query.value(0).toString();
            QString password = query.value(1).toString();

            ui->tableWidget_usercheck->insertRow(row);
            ui->tableWidget_usercheck->setItem(row, 0, new QTableWidgetItem(email));
            ui->tableWidget_usercheck->setItem(row, 1, new QTableWidgetItem(password));

            if (email == searchEmail)
                found = true;

            row++;

            ui->lineEdit_3->clear();
        }

        if (!found) {
            QMessageBox::information(this, "Not Found", "No user found with this email.");
        }

    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
    }
}
