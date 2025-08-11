#ifndef ADMINPANEL_H
#define ADMINPANEL_H
#include "inventorypanel.h"
#include "signup.h"
#include "stockavailibility.h"
#include "admineditableinv.h"
#include <QWidget>
#include <QTreeWidgetItem>

namespace Ui {
class adminpanel;
}

class adminpanel : public QWidget
{
    Q_OBJECT

public:
    explicit adminpanel(QWidget *parent = nullptr);
    ~adminpanel();


private slots:
    void handleSidebarClick(QTreeWidgetItem *item, int column);

private slots:

    void on_pushButton_4_inventory_clicked();


    void on_pushButton_adminpanelback_clicked();

    void on_pushButton_clicked();


    void on_pushButton_edit_clicked();


    void on_pushButton_2_clicked();


private:
    Ui::adminpanel *ui;
    inventorypanel *invntorypan;
    admineditableinv *adminedit =nullptr;
    signup *signu;
};

#endif
