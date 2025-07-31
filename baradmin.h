#ifndef BARADMIN_H
#define BARADMIN_H

#include <QWidget>

namespace Ui {
class baradmin;
}

class baradmin : public QWidget
{
    Q_OBJECT

public:
    explicit baradmin(QWidget *parent = nullptr);
    ~baradmin();

private:
    Ui::baradmin *ui;
};

#endif // BARADMIN_H
