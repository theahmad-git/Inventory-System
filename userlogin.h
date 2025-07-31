#ifndef USERLOGIN_H
#define USERLOGIN_H
#include "userchoice.h"
#include <QDialog>

namespace Ui {
class UserLogin;
}

class UserLogin : public QDialog
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = nullptr);
    ~UserLogin();
    bool setupDatabase();

private slots:
    void on_pushButton_3_logi_user_clicked();

    void on_pushButton_clicked();

    void on_pushButton_signinback_2_clicked();

private:
    Ui::UserLogin *ui;
    userchoice *choice;
};

#endif
