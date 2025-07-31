#ifndef SALESREPORTFORM_H
#define SALESREPORTFORM_H
#include "salesreportform.h"
#include <QDialog>
#include <QWidget>
#include <QDateTime>
#include <QTableWidgetItem>
#include <QComboBox>

class NumericTableWidgetItem : public QTableWidgetItem {
public:
    NumericTableWidgetItem(const QString &text) : QTableWidgetItem(text) {}

    bool operator<(const QTableWidgetItem &other) const override {
        return text().toInt() < other.text().toInt();
    }
};

namespace Ui {
class salesreportform;
}

class salesreportform : public QWidget
{
    Q_OBJECT

public:
    explicit salesreportform(QWidget *parent = nullptr);
    bool eventFilter(QObject *obj, QEvent *event) override;

    void clearForm();
    ~salesreportform();



private slots:

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_clear_clicked();
    void on_label_from_clicked();
    void on_label_to_clicked();
    void on_pushButton_check_clicked();
    void on_calendarWidget_clicked(const QDate &date);
    void on_label_from_linkActivated(const QString &link);
    void onDefectiveCellClicked(int row, int column);
    void onHeaderClicked(int logicalIndex);

   // bool eventFilter(QObject *watched, QEvent *event) override;
private:

    Ui::salesreportform *ui;
    bool selectingFromDate = true;
    void loadTopSellingProducts(const QDateTime &from, const QDateTime &to);
    void loadReturnedProductsDefective(const QDateTime &from, const QDateTime &to);
    void loadSalesData(const QDateTime &from, const QDateTime &to);
    void filterSalesReturnData(const QString &text);
    void updateSummary(const QDateTime &from, const QDateTime &to);
    void loadSalesReturnData();
    void updateDateSelectionVisuals();
    void updateDefectiveStatusInDatabase(const QString &billId, const QString &status);
    QDate fromDate;
    QDate toDate;


};



#endif
