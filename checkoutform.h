#ifndef CHECKOUTFORM_H
#define CHECKOUTFORM_H

#include <QWidget>
// Forward declaration instead of include
class MainWindow;
class payment;

struct Product {
    QString id;
    QString name;
    double price;
    int quantity;
    QString size;

    bool isValid() const {
        return !id.isEmpty() && price > 0;
    }
};

namespace Ui {
class Checkoutform;
}

class Checkoutform : public QWidget
{
    Q_OBJECT
public:
    explicit Checkoutform(MainWindow *mainWindow, QWidget *parent = nullptr);
    ~Checkoutform();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

public slots:
    void handleBarcode(const QString &barcode);
    void addToCart(const Product &product);

private slots:

    void on_pushButton_addtocart_clicked();

    void on_pushButton_remove_clicked();

    void on_lineEdit_discount_textChanged(const QString & discountText);

    void on_pushButton_generatebill_clicked();

    void on_comboBox_2_activated(int index);

    void on_comboBox_method_activated(int index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void onCartQuantityChanged(int row, int column);

    void on_pushButton_paynow_clicked();

    void on_pushButton_clearform_clicked();

    void on_lineEdit_searchproduct_textChanged(const QString &text);

    void on_quantitybox_textChanged(const QString &arg1);

private:
    Ui::Checkoutform *ui;
    void applyDiscount();
    void updateTotalAmount();
    double calculatecarttotal();
    void updateCashReturn();
    void addSelectedProductToCart();
    void confirmAndRemoveCartItem();
    void ensureQuantityEditable();

    payment *pay;

};

#endif
