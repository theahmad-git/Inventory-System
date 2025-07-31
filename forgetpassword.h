#ifndef FORGETPASSWORD_H
#define FORGETPASSWORD_H

#include <QDialog>

namespace Ui {
class forgetpassword;
}

class forgetpassword : public QDialog
{
    Q_OBJECT

public:
    explicit forgetpassword(QWidget *parent = nullptr);
    ~forgetpassword();

private slots:
    void on_pushButton_forgetpassword_clicked();
    void on_pushButton_submittocheck_clicked();

    void on_pushButton_backtoadminlogin_clicked();

private:
    Ui::forgetpassword *ui;
};

#endif // FORGETPASSWORD_H
