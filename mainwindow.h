#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "UserLogin.h"
#include "adminlogin.h"
#include "adminpanel.h"
#include "superadmin.h"


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void checkAvailableDrivers();
    bool setupDatabase();

private slots:
    void on_pushButton_loginAdmin_clicked();
    void on_pushButton_3_logi_user_clicked();
    void on_pushButton_add_product_clicked();
    void on_pushButton_superadmin_clicked();
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    adminlogin *adminlog;
    UserLogin *userlog;
    signup *signu;
    superadmin *superadminlogin;
   // void setupDatabase();

};
#endif
