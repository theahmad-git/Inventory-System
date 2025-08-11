#ifndef ADMINEDITABLEINV_H
#define ADMINEDITABLEINV_H
#include <QLabel>
#include <QDialog>

namespace Ui {
class admineditableinv;
}

class admineditableinv : public QWidget
{
    Q_OBJECT

public:
    explicit admineditableinv(QWidget *parent = nullptr);
    ~admineditableinv();
 void generateBarcode(const QString &productId, QLabel *label);

private slots:
    void on_tableWidget_products_cellClicked(int row, int column);

    void on_pushButton_add_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_updateproduct_clicked();

    void on_pushButton_clicked();

    void on_pushButton_5_clicked();


    void on_pushButton_refresh_clicked();
    void onBarcodeOptionChanged(int index);
    void onBarcodeScanned(const QString& barcodeData, const QImage& barcodeImage);

protected:
    void closeEvent(QCloseEvent *event) override;

private:
    Ui::admineditableinv *ui;
    void loadAllProducts();
    void filterProducts(const QString &searchText);
    QStringList categoryList = {"Beverage", "Diary", "Fruit", "Vegetable", "Cosmetics", "Grocery","Miscellaneous"};
    QStringList unitList = {"Kg", "pcs", "liter","Miscellaneous"};
    //void generateBarcode(const QString &data, const QString &outputPath);


};

#endif // ADMINEDITABLEINV_H
