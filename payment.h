#ifndef PAYMENT_H
#define PAYMENT_H

#include <QDialog>

namespace Ui {
class payment;
}

class payment : public QWidget
{
    Q_OBJECT

public:
    explicit payment(QWidget *parent = nullptr);
    ~payment();
    // Cart transfer
    void setPaymentDetails(const QString &total, const QString &cashGiven, const QString &cashReturn, const QString &method);
    QList<QList<QString>> cartData;
    void setCartData(const QList<QList<QString>> &data);

    void setCardNumber(const QString &);
    void setCardPin(const QString &);
    void setTotalAmount(const QString &);
    void setCashGiven(const QString &);
    void setCashReturn(const QString &);
    void setReceipt(const QString &);
    void updatePaymentFieldsVisibility(const QString &method);
    void updateCashReturn();
    void extractInfoFromReceipt();


    //void setTotalAmount(const QString &amount);
public slots:
    void on_pushButton_extractinfo_clicked();

private slots:
    void on_pushButton_paymeny_clicked();
    void on_lineEdit_cashgiven_textChanged(const QString &arg1);
    void on_pushButton_backtocheckoutform_clicked();




private:
    Ui::payment *ui;

};

#endif // PAYMENT_H
