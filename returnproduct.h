#ifndef RETURNPRODUCT_H
#define RETURNPRODUCT_H

#include <QDialog>

namespace Ui {
class returnproduct;
}

class returnproduct : public QWidget
{
    Q_OBJECT

public:
    explicit returnproduct(QWidget *parent = nullptr, const QString &userEmail = "");

   // explicit returnproduct(QWidget *parent = nullptr);
    ~returnproduct();

private slots:
    void on_pushButton_backtouserchoice_clicked();

    void on_pushButton_logout_clicked();

    void on_pushButton_return_clicked();
    void updateTotalAmountReturn();

    void on_pushButton_search_bill_id_clicked();


private:
    Ui::returnproduct *ui;
     QString currentUserEmail;
};

#endif // RETURNPRODUCT_H
