#include "superadmin.h"
#include "ui_superadmin.h"
#include "mainwindow.h"
#include "superadminpanel.h"
#include "backupmanager.h"
#include <QMessageBox>
#include <QSqlError>
#include <QPixmap>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QPropertyAnimation>
#include <QScreen>
#include <QGuiApplication>
#include <QApplication>
#include <QTimer>
#include <QGroupBox>

superadmin::superadmin(QWidget *parent)
    : QDialog(parent),
    ui(new Ui::superadmin)
{
    ui->setupUi(this);

}

superadmin::~superadmin()
{
    delete ui;
}

bool superadmin::setupDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/sqlite/mydatabase.db");
    if (!db.open()) {
        qDebug() << "Database error:" << db.lastError().text();
        return false;
    }
    return true;
}

void superadmin::showRestoreDialog()
{
    // Implement restore dialog functionality here
    QMessageBox::information(this, "Restore", "Restore functionality will be implemented here");
}
void superadmin::on_pushButton_login_clicked()
{
    if (!setupDatabase()) {
        QMessageBox::critical(this, "Error", "Failed to connect to database!");
        return;
    }

    QString username = ui->lineEdit_username->text().trimmed();
    QString password = ui->lineEdit_password->text().trimmed();

    qDebug() << "Attempting login with:" << username << password;  // Debug output

    QSqlQuery query;
    query.prepare("SELECT * FROM super_admin WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);

    if (!query.exec()) {
        qDebug() << "Query failed:" << query.lastError().text();  // Debug SQL error
        QMessageBox::warning(this, "Login Failed", "Database error occurred.");
        return;
    }

    if (query.next()) {
        qDebug() << "Login successful!";  // Debug success
        superadminpan = new superadminpanel(this);
        superadminpan->show();
        ui->lineEdit_username->clear();
        ui->lineEdit_password->clear();
    } else {
        qDebug() << "No matching record found";  // Debug no match
        QMessageBox::warning(this, "Login Failed", "Invalid Super Admin credentials.");
    }
}
void superadmin::on_pushButton_forgetpassword_clicked()
{
    hide();
    forgetpass = new forgetpassword(this);
    forgetpass->show();
}

void superadmin::on_pushButton_changepassword_clicked()
{
    hide();
    changepass = new changepassword(this);
    changepass->show();
}

void superadmin::on_pushButton_backfromsuperadmin_clicked()
{
    MainWindow *back = new MainWindow();
    back->show();
    this->close();
}

void superadmin::on_pushButton_logout_clicked()
{
    QApplication::quit();
}
