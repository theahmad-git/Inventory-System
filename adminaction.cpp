#include "adminaction.h"
#include "ui_adminaction.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>

adminaction::adminaction(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::adminaction)
{
    ui->setupUi(this);
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &adminaction::filterAdminActions);
    setupTable();
    loadAdminActions();
}

adminaction::adminaction(
    const QString &adminEmail,
    const QString &actionType,
    const QString &productId,
    const QString &name,
    const QString &category,
    double quantity,
    const QString &unit,
    double price,
    const QString &description,
    QWidget *parent)
    : QWidget(parent),
    ui(new Ui::adminaction)
{
    ui->setupUi(this);

    // Log the action to database
    QSqlQuery query;
    query.prepare("INSERT INTO logAdminAction (admin_email, action_type, product_id, name, "
                  "category, quantity, unit, price, description) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(adminEmail);
    query.addBindValue(actionType);
    query.addBindValue(productId);
    query.addBindValue(name);
    query.addBindValue(category);
    query.addBindValue(quantity);
    query.addBindValue(unit);
    query.addBindValue(price);
    query.addBindValue(description);

    if (!query.exec()) {
        qDebug() << "Failed to log admin action:" << query.lastError().text();
    }

    setupTable();
    loadAdminActions();
}

adminaction::~adminaction()
{
    delete ui;
}

void adminaction::setupTable()
{
    ui->tableWidget->setColumnCount(5);
    ui->tableWidget->setHorizontalHeaderLabels({"Admin", "Action", "Product ID", "Description", "Time"});
    // Set column widths
    ui->tableWidget->setColumnWidth(0, 150); // Admin
    ui->tableWidget->setColumnWidth(1, 100); // Action
    ui->tableWidget->setColumnWidth(2, 100); // Product ID
    ui->tableWidget->setColumnWidth(3, 300); // Description (wider)
    ui->tableWidget->setColumnWidth(4, 150); // Time
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    // Make the entire table read-only
    ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);

    // Optional: Adjust column resize modes
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Interactive);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
}
void adminaction::loadAdminActions()
{
    QSqlQuery query("SELECT admin_email, action_type, product_id, description, action_time FROM logAdminAction ORDER BY action_time DESC");

    ui->tableWidget->setRowCount(0);
    while (query.next()) {
        int row = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(row);

        // Process each column
        for (int col = 0; col < 5; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());

            // For description column, replace newlines with spaces for better display
            if (col == 3) {
                QString desc = query.value(col).toString();
                desc.replace("\n", " | ");
                item->setText(desc);
                item->setToolTip(query.value(col).toString()); // Show full description in tooltip
            }

            item->setFlags(item->flags() & ~Qt::ItemIsEditable);
            ui->tableWidget->setItem(row, col, item);
        }
    }
}
void adminaction::filterAdminActions(const QString &searchText) {
    for (int i = 0; i < ui->tableWidget->rowCount(); ++i) {
        bool match = false;
        for (int j = 0; j < ui->tableWidget->columnCount(); ++j) {
            QTableWidgetItem *item = ui->tableWidget->item(i, j);
            if (item && item->text().contains(searchText, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->tableWidget->setRowHidden(i, !match);
    }
}

void adminaction::on_pushButton_clicked() {
    ui->lineEdit->clear();
    loadAdminActions();
}
