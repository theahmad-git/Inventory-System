#ifndef SUPERADMIN_H
#define SUPERADMIN_H

#include <QDialog>
#include "forgetpassword.h"
#include "changepassword.h"
#include "superadminpanel.h"
#include <QTreeWidgetItem>

namespace Ui {
class superadmin;
}

class superadmin : public QDialog
{
    Q_OBJECT

public:
    explicit superadmin(QWidget *parent = nullptr);
    ~superadmin();

    bool setupDatabase();
    void showRestoreDialog();

private slots:
    void on_pushButton_login_clicked();
    void on_pushButton_forgetpassword_clicked();
    void on_pushButton_changepassword_clicked();
    void on_pushButton_backfromsuperadmin_clicked();
    void on_pushButton_logout_clicked();

private:
    Ui::superadmin *ui;
    forgetpassword *forgetpass;
    changepassword *changepass;
    superadminpanel *superadminpan;
};

#endif // SUPERADMIN_H
