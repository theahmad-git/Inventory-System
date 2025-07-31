#ifndef EDITADMIN_H
#define EDITADMIN_H

#include <QWidget>

namespace Ui {
class editadmin;
}

class editadmin : public QWidget
{
    Q_OBJECT

public:
    explicit editadmin(QWidget *parent = nullptr);
    ~editadmin();

private slots:
    void on_pushButton_searchadmin_clicked();

    void on_pushButton_deleteadmin_clicked();

    void on_pushButton_addadmin_clicked();
    void loadAllAdmin();

private:
    Ui::editadmin *ui;
  //  loadAllAdmin();
};

#endif // EDITADMIN_H
