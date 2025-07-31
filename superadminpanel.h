#ifndef SUPERADMINPANEL_H
#define SUPERADMINPANEL_H
#include "editadmin.h"
#include "adminaction.h"
#include <QTreeWidgetItem>

#include <QDialog>

namespace Ui {
class superadminpanel;
}

class superadminpanel : public QDialog
{
    Q_OBJECT

public:
    explicit superadminpanel(QWidget *parent = nullptr);
    ~superadminpanel();

private slots:

    void on_pushButton_editadmin_clicked();

    void on_pushButton_adminaction_clicked();

    void handleSidebarClick(QTreeWidgetItem *item, int);

private:
    Ui::superadminpanel *ui;
    editadmin *edit;
    adminaction *adminact;
};

#endif // SUPERADMINPANEL_H
