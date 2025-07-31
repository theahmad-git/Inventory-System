#ifndef SIGNUPADMIN_H
#define SIGNUPADMIN_H

#include <QDialog>

namespace Ui {
class signupadmin;
}

class signupadmin : public QDialog
{
    Q_OBJECT

public:
    explicit signupadmin(QWidget *parent = nullptr);
    ~signupadmin();

private:
    Ui::signupadmin *ui;
};

#endif // SIGNUPADMIN_H
