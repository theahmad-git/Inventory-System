#include "adminpanel.h"
#include "ui_adminpanel.h"
#include "adminlogin.h"
#include "signup.h"
#include "inventorypanel.h"
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QScreen>
#include <QApplication>
//#include <QTreeWidgetItem>

adminpanel::adminpanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminpanel)
{
    ui->setupUi(this);
    //connect(ui->stackedWidget_pages, &QTreeWidget::itemClicked, this, &adminpanel::handleSidebarClick);
    connect(ui->treeWidgetItem, &QTreeWidget::itemClicked, this, &adminpanel::handleSidebarClick);

    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    //connect(ui->pushButton4_inventory, &QPushButton::clicked, this, &adminpanel::on_pushButton_4_inventory_clicked);

    QTreeWidgetItem *inventory = new QTreeWidgetItem(ui->treeWidgetItem);
    inventory->setText(0, "📦 Inventory");

    QTreeWidgetItem *stock = new QTreeWidgetItem(inventory);
    stock->setText(0, "Stock Availability");

    QTreeWidgetItem *sales = new QTreeWidgetItem(inventory);
    sales->setText(0, "Sales Report");

    QTreeWidgetItem *edit = new QTreeWidgetItem(ui->treeWidgetItem);
    edit->setText(0, "✏️ Edit");

    QTreeWidgetItem *editProd = new QTreeWidgetItem(edit);
   editProd->setText(0, "Edit Product");

   // QTreeWidgetItem *editCat = new QTreeWidgetItem(edit);
  //  editCat->setText(0, "Edit Category");

    QTreeWidgetItem *back = new QTreeWidgetItem(ui->treeWidgetItem);
    back->setText(0, "🔙 Back");

    QTreeWidgetItem *logout = new QTreeWidgetItem(ui->treeWidgetItem);
    logout->setText(0, "🔓 Logout");

    QTreeWidgetItem *newuser = new QTreeWidgetItem(ui->treeWidgetItem);
    newuser->setText(0, "➕ New User");

    ui->treeWidgetItem->expandAll();

}


void adminpanel::handleSidebarClick(QTreeWidgetItem *item, int)
{
    QString text = item->text(0);

    if (text == "Stock Availability") {
        stockavailibility *stockPage = new stockavailibility();
        int index = ui->stackedWidget_pages->addWidget(stockPage);
        ui->stackedWidget_pages->setCurrentIndex(index);
    }

    else if (text == "Sales Report") {
        salesreportform *sales = new salesreportform();  // ✅ Make sure this is QWidget-based!
        int index = ui->stackedWidget_pages->addWidget(sales);
        ui->stackedWidget_pages->setCurrentIndex(index);
        // Load Sales Record widget
    }

    else if (text == "Edit Product") {
        admineditableinv *editform  = new admineditableinv(this);
        int index = ui->stackedWidget_pages->addWidget(editform);
        ui->stackedWidget_pages->setCurrentIndex(index);
    }

    else if (text == "🔙 Back") {
        on_pushButton_adminpanelback_clicked();
        MainWindow *back = new MainWindow(this);
        back->show();
        this->close();
    }

    else if (text == "🔓 Logout") {
        QApplication::quit();
    }

    else if (text == "➕ New User") {
        signu = new signup(this);
        int index = ui->stackedWidget_pages->addWidget(signu);
        ui->stackedWidget_pages->setCurrentIndex(index);
    }
}

adminpanel::~adminpanel()
{
    delete ui;
}


void adminpanel::on_pushButton_4_inventory_clicked()
{
    invntorypan = new inventorypanel(this);
    invntorypan->setAttribute(Qt::WA_DeleteOnClose);
    invntorypan->show();
    this->hide();

}

void adminpanel::on_pushButton_adminpanelback_clicked()
{
    adminlogin *back = new adminlogin(this);
    back->show();
    this->close();
}


void adminpanel::on_pushButton_clicked()
{
    QApplication::quit();
}



void adminpanel::on_pushButton_edit_clicked()
{

    adminedit = new admineditableinv(this);

    adminedit->show();

}



void adminpanel::on_pushButton_2_clicked()
{

    hide();
    signu = new signup(this);
    signu -> show();
}


