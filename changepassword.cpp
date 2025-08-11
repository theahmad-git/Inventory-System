#include "changepassword.h"
#include "ui_changepassword.h"
#include "adminlogin.h"
#include "superadmin.h"
#include <QMessageBox>
#include <QSqlQuery>
#include <QString>
#include <QScreen>
#include <QApplication>
#include <QTreeWidgetItem>

changepassword::changepassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::changepassword)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

}

changepassword::~changepassword()
{
    delete ui;
}

void changepassword::on_pushButton_savenewpassword_clicked()
{
    QString oldPass = ui->lineEdit_oldpassword->text().trimmed();
    QString newPass = ui->lineEdit_newpassword->text().trimmed();
    QString confirmPass = ui->lineEdit_confirmpassword->text().trimmed();

    // Step 1: Check if new and confirm password match
    if (newPass != confirmPass) {
        QMessageBox::warning(this, "Error", "New passwords do not match.");
        return;
    }

    // Step 2: Verify old password from 'admin' table
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT password FROM super_admin WHERE username = ?");
    checkQuery.addBindValue("superadmin");  // assuming single admin

    if (checkQuery.exec() && checkQuery.next()) {
        QString dbPass = checkQuery.value(0).toString();

        if (oldPass != dbPass) {
            QMessageBox::warning(this, "Error", "Old password is incorrect.");
            return;
        }

        // Step 3: Update password in both tables
        QSqlQuery updateAdmin, updateForget;

        updateAdmin.prepare("UPDATE super_admin SET password = ? WHERE username = ?");
        updateAdmin.addBindValue(newPass);
        updateAdmin.addBindValue("superadmin");

        updateForget.prepare("UPDATE adminforget SET password = ? WHERE username = ?");
        updateForget.addBindValue(newPass);
        updateForget.addBindValue("superadmin");

        if (updateAdmin.exec() && updateForget.exec()) {
            QMessageBox::information(this, "Success", "Super Admin password updated.");

            ui->lineEdit_oldpassword->clear();
            ui->lineEdit_newpassword->clear();
            ui->lineEdit_confirmpassword->clear();
            // Optional: clear fields
        } else {
            QMessageBox::warning(this, "Error", "Failed to update password.");
        }

    } else {
        QMessageBox::warning(this, "Error", "Super Admin not found.");
    }

}


void changepassword::on_pushButton_back_clicked()
{   hide();
    superadmin *back =new superadmin();
    back->show();
    this->close();
}

