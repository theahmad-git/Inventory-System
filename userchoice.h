#ifndef USERCHOICE_H
#define USERCHOICE_H

#include <QDialog>
// Forward declarations instead of includes
class Checkoutform;
class returnproduct;
class QStackedWidget;
class QTreeWidgetItem;

namespace Ui {
class userchoice;
}

class userchoice : public QDialog
{
    Q_OBJECT
public:
    explicit userchoice(QWidget *parent = nullptr, const QString &email = "");
    QString loggedInEmail;
    QStackedWidget* getStackedWidget() const;
    ~userchoice();

private slots:
    void on_pushButton_buyproduct_clicked();
    void on_pushButton_returnproduct_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_backtouserlogin_clicked();
    void handleSidebarClick(QTreeWidgetItem *item, int);

private:
    Ui::userchoice *ui;
    Checkoutform *checkout;
    returnproduct *returnprod;
};

#endif // USERCHOICE_H
