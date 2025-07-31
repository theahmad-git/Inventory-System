#include "adminlogin.h"
#include "mainwindow.h"
#include "ui_adminlogin.h"
#include "changepassword.h"
#include "globals.h"
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QScreen>
#include <QApplication>
#include <QTimer>
#include <QSqlError>


adminlogin::adminlogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminlogin)
{
    ui->setupUi(this);
    if (!setupDatabase()) {
        QMessageBox::critical(this, "Fatal Error", "Cannot connect to database. Application will close.");
        QTimer::singleShot(0, qApp, &QCoreApplication::quit);
        return;
    }

     ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    this->showFullScreen();
}

void adminlogin::on_pushButton_clicked() {


}

adminlogin::~adminlogin()
{
    delete ui;
}

void adminlogin::on_pushButton_admin_ui_login_clicked()
{
    if (!QSqlDatabase::database().isOpen()) {
        QMessageBox::critical(this, "Database Error", "No database connection");
        return;
    }
    QString email=ui->lineEdit_adminname->text();
    QString password=ui->lineEdit_2_adminpassword->text();
    //currentAdminEmail = email;
    qDebug() << "✅ Assigned currentAdminEmail:" << currentAdminEmail;


    if(email.isEmpty() || password.isEmpty()){
        QMessageBox::warning(this,"Input Error","Please Enter both UserEmail and Password.");
        return;
    }

    if (!email.contains("@")) {
        QMessageBox::warning(this, "Input Error", "Invalid Email. '@' is missing.");
        return;
    }

    QSqlQuery query;
    query.prepare("Select *From admin Where email=? AND password=?");
    query.addBindValue(email);
    query.addBindValue(password);

    if (query.exec() && query.next()){
        currentAdminEmail = email;
        qDebug() << "✅ Assigned currentAdminEmail:" << currentAdminEmail;
        this->hide();
        adminpanel *panel=new adminpanel();
        panel->show();
    }
    else{
        QMessageBox::critical(this,"Login Failed","Incorrect UserEmail or Password");
    }
}


bool adminlogin::setupDatabase() {
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
void adminlogin::on_pushButton_adminverificationback_clicked()
{
    MainWindow *back = new MainWindow(this);
    back->show();
    this->close();
}



