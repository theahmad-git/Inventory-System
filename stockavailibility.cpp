#include "stockavailibility.h"
#include "ui_stockavailibility.h"
#include "inventorypanel.h"
#include <QSqlQuery>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QScreen>
#include <QApplication>

stockavailibility::stockavailibility(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::stockavailibility)
{
    ui->setupUi(this);
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->resize(screenGeometry.width() - 100, screenGeometry.height() - 100);
    this->move(50, 50);

    ui->tableWidget_stock->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
    ui->tableWidget_stock->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    ui->tableWidget_stock->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    ui->tableWidget_stock->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
    ui->tableWidget_stock->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);

    ui->tableWidget_stock->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget_stock->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);

    ui->tableWidget_stock->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);


    loadLowStockItems();
}

stockavailibility::~stockavailibility()
{
    delete ui;
}

void stockavailibility::loadLowStockItems() {
    ui->tableWidget_stock->setAlternatingRowColors(true);
    ui->tableWidget_stock->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

    ui->tableWidget_stock->setSortingEnabled(false);  // 🚫 temporarily disable sorting

    QSqlQuery query("SELECT product_id, name, category, price, quantity, unit,size, last_modified FROM product");
    ui->tableWidget_stock->setRowCount(0);
    ui->tableWidget_stock->setColumnCount(8);
    ui->tableWidget_stock->setHorizontalHeaderLabels(QStringList()
                                                         << "Product ID" << "Name" << "Category" << "Price" << "Quantity" << "Unit"<< "Size" << "Last Modified");

    int row = 0;
    QStringList lowStockItems;
    const int lowStockThreshold = 10;

    while (query.next()) {
        QString product_id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString category = query.value(2).toString();
        double price = query.value(3).toDouble();
        int quantity = query.value(4).toInt();
        QString unit = query.value(5).toString();
        QString size = query.value(6).toString();
        QString lastModified = query.value(7).toString();

        ui->tableWidget_stock->insertRow(row);
        ui->tableWidget_stock->setItem(row, 0, new QTableWidgetItem(product_id));
        ui->tableWidget_stock->setItem(row, 1, new QTableWidgetItem(name));
        ui->tableWidget_stock->setItem(row, 2, new QTableWidgetItem(category));
        ui->tableWidget_stock->setItem(row, 3, new QTableWidgetItem(QString::number(price)));
        QTableWidgetItem *quantityItem = new QTableWidgetItem();
        quantityItem->setData(Qt::EditRole, quantity);
        ui->tableWidget_stock->setItem(row, 4, quantityItem);
        ui->tableWidget_stock->setItem(row, 5, new QTableWidgetItem(unit));
        ui->tableWidget_stock->setItem(row, 6, new QTableWidgetItem(size));
        QTableWidgetItem *modifiedItem = new QTableWidgetItem(lastModified);
        modifiedItem->setFlags(modifiedItem->flags() & ~Qt::ItemIsEditable);
        ui->tableWidget_stock->setItem(row, 7, modifiedItem);

        if (quantity < lowStockThreshold) {
            lowStockItems << name;
            for (int col = 0; col < 8 ; ++col) {
                ui->tableWidget_stock->item(row, col)->setBackground(QColor(Qt::red).lighter(150));
            }
        }
        row++;
    }

    ui->tableWidget_stock->setSortingEnabled(true);  // ✅ enable sorting after data load
}



void stockavailibility::on_pushButton_stoackavailibilityback_clicked()
{
    inventorypanel *back = new inventorypanel();
    back->show();
    this->close();


}



