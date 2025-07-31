#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H


#include <QDialog>

namespace Ui {
class adminlogin;
}


class adminlogin : public QDialog
{
    Q_OBJECT

public:
    explicit adminlogin(QWidget *parent = nullptr);
    ~adminlogin();
    bool setupDatabase();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_admin_ui_login_clicked();

    void on_pushButton_adminverificationback_clicked();


private:
    Ui::adminlogin *ui;

};

#endif
