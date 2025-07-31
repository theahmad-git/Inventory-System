#include "inventorypanel.h"
#include "adminpanel.h"
#include "ui_inventorypanel.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QScreen>
#include <QApplication>

inventorypanel::inventorypanel(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::inventorypanel)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

}

inventorypanel::~inventorypanel()
{
    delete ui;
}

void inventorypanel::on_showstock_clicked() {
    stockavailibility *stockForm = new stockavailibility();
    stockForm->setAttribute(Qt::WA_DeleteOnClose);
    stockForm->show();
}


void inventorypanel::on_pushButton_4_monthlySales_clicked(){

}
void inventorypanel::on_pushButton_4_salesreport_clicked()
{
    hide();
    salesrepor = new salesreportform(this);
    salesrepor->show();
}


void inventorypanel::on_pushButton_inventoryback_clicked()
{
    adminpanel *back = new adminpanel();
    back->show();
    this->close();
}


void inventorypanel::on_pushButton_2_clicked()
{
     QApplication::quit();
}

