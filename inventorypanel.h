#ifndef INVENTORYPANEL_H
#define INVENTORYPANEL_H
#include <stockavailibility.h>
#include<salesreportform.h>

#include <QWidget>

namespace Ui {
class inventorypanel;
}

class inventorypanel : public QWidget
{
    Q_OBJECT

public:
    explicit inventorypanel(QWidget *parent = nullptr);
    ~inventorypanel();
 void loadStockTable();
private slots:
    void on_showstock_clicked();

    void on_pushButton_4_monthlySales_clicked();

    void on_pushButton_4_salesreport_clicked();

    void on_pushButton_inventoryback_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::inventorypanel *ui;
    stockavailibility *stockavail;
    salesreportform *salesrepor;
};

#endif
