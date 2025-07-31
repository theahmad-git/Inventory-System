#ifndef STOCKAVAILIBILITY_H
#define STOCKAVAILIBILITY_H
#include <QDialog>
#include <QWidget>

namespace Ui {
class stockavailibility;
}

class stockavailibility : public QWidget
{
    Q_OBJECT

public:
    explicit stockavailibility(QWidget *parent = nullptr);
    ~stockavailibility();


private slots:
    void on_pushButton_stoackavailibilityback_clicked();

private:
    Ui::stockavailibility *ui;
    void loadLowStockItems();
};

#endif
