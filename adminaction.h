#ifndef ADMINACTION_H
#define ADMINACTION_H
#include <QWidget>
#include <QSqlTableModel>

namespace Ui {
class adminaction;
}


class adminaction : public QWidget
{
    Q_OBJECT

public:
     explicit adminaction(QWidget *parent = nullptr);
    adminaction(const QString &adminEmail, const QString &actionType,
                const QString &productId, const QString &name,
                const QString &category, double quantity,
                const QString &unit, double price,
                const QString &description, QWidget *parent = nullptr);
    ~adminaction();
void loadAdminActions();

private slots:
    void on_pushButton_clicked();  // <-- this should be declared

private:
    Ui::adminaction *ui;
    QSqlTableModel *model;
    void setupTable();
    void filterAdminActions(const QString &searchText);

};


#endif // ADMINACTION_H
