#include "userchoice.h"
#include "ui_userchoice.h"
#include "userlogin.h"
#include "returnproduct.h"
#include "checkoutform.h"
#include "adminpanel.h"
#include <QScreen>
#include <QApplication>

// userchoice.cpp
userchoice::userchoice(QWidget *parent, const QString &email)
    : QDialog(parent)
    , ui(new Ui::userchoice)
    , loggedInEmail(email)


{
    ui->setupUi(this);
    connect(ui->treeWidgetchoice, &QTreeWidget::itemClicked, this, &userchoice::handleSidebarClick);

    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    // Inside adminpanel constructor
    QTreeWidgetItem *buy = new QTreeWidgetItem(ui->treeWidgetchoice);
    buy->setText(0, "🛒 Sale Product");

    QTreeWidgetItem *returnprod = new QTreeWidgetItem(ui->treeWidgetchoice);
    returnprod->setText(0, "↩️ Return Product");

    QTreeWidgetItem *back = new QTreeWidgetItem(ui->treeWidgetchoice);
    back->setText(0, "🔙 Back");

    QTreeWidgetItem *logout = new QTreeWidgetItem(ui->treeWidgetchoice);
    logout->setText(0, "🔓 Logout");

    ui->treeWidgetchoice->expandAll();


}
QStackedWidget* userchoice::getStackedWidget() const {
    return ui->stackedWidget_form;
}


void userchoice::handleSidebarClick(QTreeWidgetItem *item, int)
{
   QString text = item->text(0);

    if (text == "🛒 Sale Product") {
        Checkoutform *checkout = new Checkoutform(nullptr, this);
        int index = ui->stackedWidget_form->addWidget(checkout);
        ui->stackedWidget_form->setCurrentIndex(index);
    }

    else if (text == "↩️ Return Product") {
        returnproduct *retform = new returnproduct(this, loggedInEmail);
        int index = ui->stackedWidget_form->addWidget(retform);
        ui->stackedWidget_form->setCurrentIndex(index);
    }

    else if (text == "🔙 Back") {
        on_pushButton_backtouserlogin_clicked();
    }

    else if (text == "🔓 Logout") {
        QApplication::quit();
    }
}

userchoice::~userchoice()
{
    delete ui;
}

void userchoice::on_pushButton_buyproduct_clicked()
{
    hide();
    checkout =new Checkoutform(nullptr, this);
    checkout->show();
}


void userchoice::on_pushButton_returnproduct_clicked()
{
    hide();
    returnproduct *form = new returnproduct(this, loggedInEmail);
    form->show();

}


void userchoice::on_pushButton_2_clicked()
{
    QApplication::quit();
}


void userchoice::on_pushButton_backtouserlogin_clicked()
{
  UserLogin *back = new UserLogin();
    back->show();
    this->close();
}

