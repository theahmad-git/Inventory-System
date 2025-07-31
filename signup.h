#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>

namespace Ui {
class signup;
}

class signup : public QWidget
{
    Q_OBJECT

public:
    explicit signup(QWidget *parent = nullptr);
    ~signup();


private slots:
    //void on_pushButton_2_signup_clicked();

  //  void on_pushButton_clicked();

   // void on_pushButton_signupback_clicked();

   // void on_pushButton_updateuser_clicked();

    void on_pushButton_deleteuser_clicked();

    void on_pushButton_searchuser_clicked();

    void on_pushButton_adduser_clicked();

private:
    Ui::signup *ui;
    void loadAllUsers();
};

#endif
