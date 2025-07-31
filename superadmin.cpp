#include "superadmin.h"
#include "ui_superadmin.h"
#include "mainwindow.h"
#include "superadminpanel.h"
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

superadmin::superadmin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::superadmin)
{
    ui->setupUi(this);

    if (!setupDatabase()) {
        QMessageBox::critical(this, "Fatal Error", "Cannot connect to database. Application will close.");
        QTimer::singleShot(0, qApp, &QCoreApplication::quit);
        return;
    }
}

superadmin::~superadmin()
{
    delete ui;
}


bool superadmin::setupDatabase() {
    // Your database setup code here
    // Example:
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("E:/sqlite/mydatabase.db");
    if (!db.open()) {
        qDebug() << "Database error:" << db.lastError().text();
        return false;
    }
    return true;
}
void superadmin::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text().trimmed();
    QString password = ui->lineEdit_password->text().trimmed();

    QSqlQuery query;
    query.prepare("SELECT * FROM super_admin WHERE username = ? AND password = ?");
    query.addBindValue(username);
    query.addBindValue(password);

    if (query.exec() && query.next()) {
        //QMessageBox::information(this, "Login", "Super Admin Login Successful");
        superadminpan = new superadminpanel(this);
        superadminpan ->show();

        ui->lineEdit_username->clear();
        ui->lineEdit_password->clear();

    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid Super Admin credentials.");
    }

}

void superadmin::on_pushButton_forgetpassword_clicked()
{
    hide();
    forgetpass =new forgetpassword (this);
    forgetpass->show();
}


void superadmin::on_pushButton_changepassword_clicked()
{
    hide();
    changepass =new changepassword(this);
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
    QApplication :: quit();
}

