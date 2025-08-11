

#ifndef SUPERADMINPANEL_H
#define SUPERADMINPANEL_H

#include <QDialog>
#include <QTreeWidgetItem>

// Forward declarations
namespace Ui {
class superadminpanel;
}

class editadmin;
class adminaction;

class superadminpanel : public QDialog
{
    Q_OBJECT

public:
    explicit superadminpanel(QWidget *parent = nullptr);  // Changed to QDialog*
    ~superadminpanel();

private slots:
    void on_pushButton_editadmin_clicked();
    void on_pushButton_adminaction_clicked();
    void handleSidebarClick(QTreeWidgetItem *item, int column);
    void createManualBackup();
    void restoreFromBackup();

private:
    Ui::superadminpanel *ui;
    editadmin *edit;
    adminaction *adminact;
};

#endif // SUPERADMINPANEL_H
