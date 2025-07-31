#ifndef USERCHOICE_H
#define USERCHOICE_H
#include "checkoutform.h"
#include "returnproduct.h"
#include <QTreeWidgetItem>
#include <QStackedWidget>

#include <QDialog>

namespace Ui {
class userchoice;
}

class userchoice : public QDialog
{
    Q_OBJECT



public:
    // userchoice.h
    explicit userchoice(QWidget *parent = nullptr, const QString &email = "");
    QString loggedInEmail;
    QStackedWidget* getStackedWidget() const;


    ~userchoice();


private slots:
    void on_pushButton_buyproduct_clicked();

    void on_pushButton_returnproduct_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_backtouserlogin_clicked();
    void handleSidebarClick(QTreeWidgetItem *item, int);  // 👈 Add this line


private:
    Ui::userchoice *ui;
    Checkoutform *checkout;
    returnproduct *returnprod;
};

#endif // USERCHOICE_H
