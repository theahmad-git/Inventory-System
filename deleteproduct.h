#ifndef DELETEPRODUCT_H
#define DELETEPRODUCT_H

#include <QDialog>

namespace Ui {
class deleteproduct;
}

class deleteproduct : public QDialog
{
    Q_OBJECT

public:
    explicit deleteproduct(QWidget *parent = nullptr);
    ~deleteproduct();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_deleteproductback_clicked();

private:
    Ui::deleteproduct *ui;
};

#endif
