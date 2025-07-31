#include "userlogin.h"
#include "ui_userlogin.h"
#include <QSqlQuery>
#include <QSqlError>
#include "mainwindow.h"
#include <QMessageBox>
#include <QDebug>
#include <QScreen>
#include <QApplication>
#include <QTimer>
#include "globals.h"

UserLogin::UserLogin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UserLogin)
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

}

bool UserLogin::setupDatabase() {
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
void UserLogin::on_pushButton_3_logi_user_clicked(){

    // Your code here
}

UserLogin::~UserLogin()
{
    delete ui;
}


void UserLogin::on_pushButton_clicked()
{
        QString email = ui->lineEdit->text();
        QString password = ui->lineEdit_2->text();

        // Step 1: Basic Validation
        if (email.isEmpty() || password.isEmpty()) {
            QMessageBox::warning(this, "Input Error", "Please enter both Email and Password.");
            return;
        }

        if (!email.contains("@")) {
            QMessageBox::warning(this, "Input Error", "Invalid Email. '@' is missing.");
            return;
        }

        // Step 2: Check DB Connection
        if (!QSqlDatabase::database().isOpen()) {
            QMessageBox::critical(this, "DB Error", "Database is not open.");
            return;
        }

        // Step 3: Check user credentials
        QSqlQuery query;
        query.prepare("SELECT * FROM users WHERE email = ? AND password = ?");
        query.addBindValue(email);
        query.addBindValue(password);


            if (query.exec() && query.next()) {
                // ✅ Log login
                QString currentTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
                QSqlQuery logQuery;
                logQuery.prepare("INSERT INTO userlogin (email, login_time) VALUES (?, ?)");
                logQuery.addBindValue(email);
                logQuery.addBindValue(currentTime);

                if (!logQuery.exec()) {
                    qDebug() << "Failed to log login:" << logQuery.lastError().text();
                }
                 currentUserEmail = email;
                // ✅ Proceed to userchoice form
                 QString email = ui->lineEdit->text().trimmed();  // capture email
                 userchoice *choice = new userchoice(this, email);  // pass email to userchoice
                 choice->setAttribute(Qt::WA_DeleteOnClose);
                 choice->show();
                 this->hide();

            }

        else {
            QMessageBox::critical(this, "Login Failed", "Incorrect email or password.");
        }
        qDebug() << query.lastError().text();

}

void UserLogin::on_pushButton_signinback_2_clicked()
{
    MainWindow *back = new MainWindow();
    back->show();
    this->close();
}

