#ifndef SALESREPORTFORM_H
#define SALESREPORTFORM_H
#include "salesreportform_new.h"
//#include <QDialog>
#include <QWidget>
#include <QDateTime>
#include <QTableWidgetItem>
#include <QComboBox>
#include <QSqlQuery>
#include "QXlsx/QXlsx/header/xlsxdocument.h"

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
    QString browseExcelFile();  // Add this line
    void readExcelFile(const QString& filePath);
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
    void on_pushButton_createBackup_clicked();
    //void exportToCSV(const QString &tableName, const QDateTime &from = QDateTime(), const QDateTime &to = QDateTime());
    QString getSaveFilePath(const QString &defaultName);

private:

    Ui::salesreportform *ui;
    QDate fromDate;
    QDate toDate;
    bool selectingFromDate = true;

    void loadTopSellingProducts(const QDateTime &from, const QDateTime &to);
    void loadReturnedProductsDefective(const QDateTime &from, const QDateTime &to);
    void loadSalesData(const QDateTime &from, const QDateTime &to);
    void filterSalesReturnData(const QString &text);
    void updateSummary(const QDateTime &from, const QDateTime &to);
    void loadSalesReturnData();
    void updateDateSelectionVisuals();
    void updateDefectiveStatusInDatabase(const QString &billId, const QString &status);

    void exportQueryToExcel(QSqlQuery &query, const QString &baseFileName);
    void exportToExcel(const QString &tableName);
    void exportToExcel(const QString &tableName, const QDateTime &from, const QDateTime &to);

};



#endif
