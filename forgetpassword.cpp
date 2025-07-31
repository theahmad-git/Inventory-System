#include "forgetpassword.h"
#include "ui_forgetpassword.h"
#include "adminlogin.h"
#include "superadmin.h"
#include <QString>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlDatabase>
#include <QScreen>
#include <QApplication>

forgetpassword::forgetpassword(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::forgetpassword)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);


    QSqlQuery query("SELECT question1, question2, question3 FROM adminforget");

    if (query.exec() && query.next()) {
        ui->label_Qno1->setText(query.value(0).toString());
        ui->label_Qno2->setText(query.value(1).toString());
        ui->label_Qno3->setText(query.value(2).toString());
    } else {
        QMessageBox::warning(this, "Error", "Admin data not found.");
        this->close();
    }

}

void forgetpassword::on_pushButton_forgetpassword_clicked()
{

}


forgetpassword::~forgetpassword()
{
    delete ui;
}

void forgetpassword::on_pushButton_submittocheck_clicked()
    {
        QString ans1 = ui->lineEdit_ansno1->text().trimmed();
        QString ans2 = ui->lineEdit_ansno2->text().trimmed();
        QString ans3 = ui->lineEdit_ansno3->text().trimmed();

        QSqlQuery query("SELECT password, answer1, answer2, answer3 FROM adminforget");

        if (query.exec() && query.next())
        {
            QString db_answer1 = query.value(1).toString().trimmed();
            QString db_answer2 = query.value(2).toString().trimmed();
            QString db_answer3 = query.value(3).toString().trimmed();

            if (ans1.toLower().remove(" ") == db_answer1.toLower().remove(" ")&&
                ans2.toLower().remove(" ") == db_answer2.toLower().remove(" ")&&
                ans3.toLower().remove(" ") == db_answer3.toLower().remove(" "))
               // ans1 == db_answer1 && ans2 == db_answer2 && ans3 == db_answer3)
            {
                QString password = query.value(0).toString();
                QMessageBox::information(this, "Password Found", "Your password is: " + password);

                ui->lineEdit_ansno1->clear();
                ui->lineEdit_ansno2->clear();
                ui->lineEdit_ansno3->clear();
            } else {
                QMessageBox::warning(this, "Wrong Answers", "One or more answers are incorrect.");
            }
        }

    }




    void forgetpassword::on_pushButton_backtoadminlogin_clicked()
    {
        superadmin *back = new superadmin();
        back->show();
        this->close();

    }

