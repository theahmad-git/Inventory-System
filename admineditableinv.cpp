#include "admineditableinv.h"
#include "ui_admineditableinv.h"
#include "adminpanel.h"
#include "globals.h"
#include "adminaction.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QCloseEvent>
#include <QDebug>
#include <QToolTip>
#include <QTimer>
#include <QApplication>
#include <QComboBox>
#include <QScreen>
#include <QDateTime>


admineditableinv::admineditableinv(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admineditableinv)
{
    ui->setupUi(this);
    //connect(ui->lineEdit, &QLineEdit::textChanged, this, &adminaction::filterAdminActions);
    // Make sure you have a QLineEdit named lineEdit_search in your UI
    connect(ui->lineEdit_searchproduct, &QLineEdit::textChanged,
            this, &admineditableinv::filterProducts);

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    this->showMaximized();
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    ui->pushButton_updateproduct->setAutoDefault(false);
    ui->pushButton_updateproduct->setDefault(false);

    loadAllProducts();
}

QString generateUpdateDescription(
    const QString& old_product_id, const QString& new_product_id,
    const QString& old_name, const QString& new_name,
    const QString& old_category, const QString& new_category,
    double old_price, double new_price,
    double old_quantity, double new_quantity,
    const QString& old_unit, const QString& new_unit
    ) {
    QString description = "Product ID: " + old_product_id;

    if (old_product_id != new_product_id)
        description += "\nproduct_id: " + old_product_id + " -> " + new_product_id;
    if (old_name != new_name)
        description += "\nname: " + old_name + " -> " + new_name;
    if (old_category != new_category)
        description += "\ncategory: " + old_category + " -> " + new_category;
    if (!qFuzzyCompare(old_price + 1, new_price + 1))
        description += "\nprice: " + QString::number(old_price) + " -> " + QString::number(new_price);
    if (!qFuzzyCompare(old_quantity + 1, new_quantity + 1))
        description += "\nquantity: " + QString::number(old_quantity) + " -> " + QString::number(new_quantity);
    if (old_unit != new_unit)
        description += "\nunit: " + old_unit + " -> " + new_unit;

    return description;
}

admineditableinv::~admineditableinv()
{
    qDebug() << "admineditableinv destructed.";
    delete ui;
}

void admineditableinv::on_tableWidget_products_cellClicked(int row, int column)
{
    // no logic yet
}


void admineditableinv::on_pushButton_add_clicked()
{
    QString product_id = ui->lineEdit_productid->text().trimmed();
    QString name = ui->lineEdit_productname->text().trimmed();
    QString category = ui->comboBox_category->currentText();
    QString unit = ui->comboBox_unit->currentText();
    double price = ui->lineEdit_productprice->text().toDouble();
    double quantity = ui->lineEdit_productquantity->text().toDouble();

    if (product_id.isEmpty() || name.isEmpty() || category.isEmpty() || unit.isEmpty() || price <= 0 || quantity <= 0) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields correctly.");
        return;
    }

    QSqlDatabase db = QSqlDatabase::database(); // use existing connection
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "❌ Database not open:" << db.lastError().text();
            return; // prevent further action
        }
    }

    QSqlQuery query;
    query.prepare("INSERT INTO product (product_id, name, category, price, quantity, unit, last_modified) VALUES (?, ?, ?, ?, ?,?, ?)");
    query.addBindValue(product_id);
    query.addBindValue(name);
    query.addBindValue(category);
    query.addBindValue(price);
    query.addBindValue(quantity);
    query.addBindValue(unit);
    query.addBindValue(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));

    if (query.exec()) {
        // ✅ Construct readable description for log
        QString description = QString("Added product: ID=%1, Name=%2, Category=%3, Price=%4, Quantity=%5, Unit=%6")
                                  .arg(product_id)
                                  .arg(name)
                                  .arg(category)
                                  .arg(price)
                                  .arg(quantity)
                                  .arg(unit);

        adminaction *action = new adminaction(
            currentAdminEmail,
            "ADD",
            product_id,
            name,
            category,
            quantity,
            unit,
            price,
            description,
            this
            );
        action->deleteLater();
        loadAllProducts();

        ui->lineEdit_productid->clear();
        ui->lineEdit_productname->clear();
        ui->lineEdit_productprice->clear();
        ui->lineEdit_productquantity->clear();
        ui->comboBox_category->setCurrentIndex(0);
        ui->comboBox_unit->setCurrentIndex(0);

        QMessageBox::information(this, "Success", "Product added successfully.");
        //adminaction(currentAdminEmail, "ADD", product_id, name, category, quantity, unit, price, description);

    } else {
        QMessageBox::critical(this, "Error", query.lastError().text());
        qDebug() << "Query error:" << query.lastError().text();
    }
}
void admineditableinv::on_pushButton_delete_clicked()
{
    int row = ui->tableWidget_products->currentRow();
    if (row < 0) {
        QMessageBox::warning(this, "No Selection", "Please select a product to delete.");
        return;
    }

    QString product_id = ui->tableWidget_products->item(row, 1)->text();
    qDebug() << "[DELETE] Selected Product ID:" << product_id;

    QString name, category, unit;
    int quantity = 0;
    double price = 0.0;

    // Fetch product details before deletion
    QSqlQuery fetch;
    fetch.prepare("SELECT name, category, price, quantity, unit FROM product WHERE product_id = ?");
    fetch.addBindValue(product_id);
    if (fetch.exec() && fetch.next()) {
        name = fetch.value("name").toString();
        category = fetch.value("category").toString();
        price = fetch.value("price").toDouble();
        quantity = fetch.value("quantity").toInt();
        unit = fetch.value("unit").toString();
    } else {
        qDebug() << "[DELETE] Fetch query failed:" << fetch.lastError().text();
        return;
    }

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirm Removal", "Are you sure you want to delete this item?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM product WHERE product_id = ?");
        query.addBindValue(product_id);

        if (query.exec()) {
            ui->tableWidget_products->removeRow(row);

            // Create the description and log the action
            QString description = QString("Deleted product: ID=%1, Name=%2, Category=%3, Price=%4, Quantity=%5, Unit=%6")
                                      .arg(product_id)
                                      .arg(name)
                                      .arg(category)
                                      .arg(price)
                                      .arg(quantity)
                                      .arg(unit);

            // In your delete function:
            adminaction *action = new adminaction(
                currentAdminEmail,
                "DELETE",
                product_id,
                name,
                category,
                quantity,
                unit,
                price,
                description,
                this
                );

            qDebug() << "Product Deleted and logged successfully.";
            QMessageBox::information(this, "Success", "Product deleted successfully.");
        } else {
            qDebug() << "Failed to delete the product from DB:" << query.lastError().text();
            QMessageBox::critical(this, "Error", "Failed to delete product: " + query.lastError().text());
        }
    }
}

void admineditableinv::on_pushButton_updateproduct_clicked() {
    bool anyUpdated = false;
    adminaction *actionLog = nullptr;
    for (int row = 0; row < ui->tableWidget_products->rowCount(); ++row) {
        QString id = ui->tableWidget_products->item(row, 0)->text();

        // STEP 1: Get old data from DB
        QSqlQuery oldQuery;
        oldQuery.prepare("SELECT product_id, name, category, price, quantity, unit FROM product WHERE id = ?");
        oldQuery.addBindValue(id);

        QString old_product_id, old_name, old_category, old_unit;
        double old_price = 0, old_quantity = 0;

        if (oldQuery.exec() && oldQuery.next()) {
            old_product_id = oldQuery.value("product_id").toString();
            old_name = oldQuery.value("name").toString();
            old_category = oldQuery.value("category").toString();
            old_price = oldQuery.value("price").toDouble();
            old_quantity = oldQuery.value("quantity").toDouble();
            old_unit = oldQuery.value("unit").toString();
        } else {
            qDebug() << "Error fetching row " << row << ": " << oldQuery.lastError().text();
            continue;  // skip this row
        }

        // STEP 2: Get new data from table
        QString new_product_id = ui->tableWidget_products->item(row, 1)->text().trimmed();
        QString new_name = ui->tableWidget_products->item(row, 2)->text().trimmed();
        QString new_category = qobject_cast<QComboBox *>(ui->tableWidget_products->cellWidget(row, 3))->currentText();
        QString new_price_str = ui->tableWidget_products->item(row, 4)->text();
        QString new_quantity_str = ui->tableWidget_products->item(row, 5)->text();
        QString new_unit = qobject_cast<QComboBox *>(ui->tableWidget_products->cellWidget(row, 6))->currentText();
        double new_price = new_price_str.toDouble();
        double new_quantity = new_quantity_str.toDouble();

        // Skip invalid data
        if (new_product_id.isEmpty() || new_name.isEmpty() || new_category.isEmpty() || new_unit.isEmpty() ||
            new_price <= 0 || new_quantity <= 0) {
            qDebug() << "Skipping row " << row << " due to invalid input";
            continue;
        }

        // STEP 3: Check if anything has changed
        if (old_product_id == new_product_id &&
            old_name == new_name &&
            old_category == new_category &&
            qFuzzyCompare(old_price + 1, new_price + 1) &&
            qFuzzyCompare(old_quantity + 1, new_quantity + 1) &&
            old_unit == new_unit) {
            continue;  // no change
        }

        QSqlDatabase db = QSqlDatabase::database(); // use existing connection
        if (!db.isOpen()) {
            if (!db.open()) {
                qDebug() << "❌ Database not open:" << db.lastError().text();
                return; // prevent further action
            }
        }

        // STEP 4: Perform Update
        QSqlQuery updateQuery;
        updateQuery.prepare("UPDATE product SET product_id = ?, name = ?, category = ?, price = ?, quantity = ?, unit = ?, last_modified = ? WHERE id = ?");
        updateQuery.addBindValue(new_product_id);
        updateQuery.addBindValue(new_name);
        updateQuery.addBindValue(new_category);
        updateQuery.addBindValue(new_price);
        updateQuery.addBindValue(new_quantity);
        updateQuery.addBindValue(new_unit);
        updateQuery.addBindValue(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
        updateQuery.addBindValue(id);

        if (updateQuery.exec()) {
            // STEP 5: Log the update
            QString description = generateUpdateDescription(
                old_product_id, new_product_id,
                old_name, new_name,
                old_category, new_category,
                old_price, new_price,
                old_quantity, new_quantity,
                old_unit, new_unit
                );

            adminaction*action = new adminaction(
                currentAdminEmail,
                "UPDATE",
                new_product_id,
                new_name,
                new_category,
                new_quantity,
                new_unit,
                new_price,
                description,
                this
                );

            anyUpdated = true;
        } else {
            qDebug() << "Update failed for row " << row << ": " << updateQuery.lastError().text();
        }
    }

    if (anyUpdated) {
        QMessageBox::information(this, "Success", "Updated all modified products.");
        loadAllProducts();
    } else {
        QMessageBox::information(this, "No Change", "No changes detected in any row.");
    }
}

void admineditableinv::loadAllProducts() {
    ui->tableWidget_products->setSortingEnabled(false);
    ui->tableWidget_products->setRowCount(0);
    ui->tableWidget_products->setColumnCount(8);
    QStringList headers = {"ID", "Product ID", "Name", "Category", "Price", "Quantity", "Unit", "Last Modified"};
    ui->tableWidget_products->setHorizontalHeaderLabels(headers);

    QSqlQuery query("SELECT id, product_id, name, category, price, quantity, unit, last_modified FROM product");

    int row = 0;

    while (query.next()) {
        ui->tableWidget_products->insertRow(row);

        for (int col = 0; col < 8; ++col) {
            if (col == 3 || col == 6) continue;  // Skip category/unit for combo boxes
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());

            // Make editable only if not the 'last_modified' column (which is now at index 7)
            if (col != 7) {
                item->setFlags(item->flags() | Qt::ItemIsEditable);
            } else {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);  // Read-only timestamp
            }

            item->setData(Qt::UserRole, query.value(col).toString());
            ui->tableWidget_products->setItem(row, col, item);
        }


        QComboBox *categoryBox = new QComboBox();
        categoryBox->addItems(categoryList);
        categoryBox->setCurrentText(query.value(3).toString());
        categoryBox->setProperty("original", query.value(3).toString());
        ui->tableWidget_products->setCellWidget(row, 3, categoryBox);

        QComboBox *unitBox = new QComboBox();
        unitBox->addItems(unitList);
        unitBox->setCurrentText(query.value(6).toString());
        unitBox->setProperty("original", query.value(6).toString());
        ui->tableWidget_products->setCellWidget(row, 6, unitBox);

        row++;
    }
     ui->tableWidget_products->setSortingEnabled(true);
}

void admineditableinv::closeEvent(QCloseEvent *event) {
    QWidget::closeEvent(event);
}

void logAdminAction(
    const QString &adminEmail,
    const QString &actionType,
    const QString &productId,
    const QString &name,
    const QString &category,
    double quantity,
    const QString &unit,
    double price,
    const QString &description)
{
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen() && !db.open()) {
        qDebug() << "Database not open:" << db.lastError().text();
        return;
    }

    QSqlQuery query;
    query.prepare(R"(
        INSERT INTO logAdminAction
            (admin_email, action_type, product_id, name, category,
             quantity, unit, price, description, action_time)
        VALUES
            (?, ?, ?, ?, ?, ?, ?, ?, ?, datetime('now', 'localtime'))
    )");

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
}

void admineditableinv::filterProducts(const QString &searchText)
{
    for (int row = 0; row < ui->tableWidget_products->rowCount(); ++row) {
        bool match = false;
        for (int col = 0; col < ui->tableWidget_products->columnCount(); ++col) {
            QTableWidgetItem *item = ui->tableWidget_products->item(row, col);
            if (item && item->text().contains(searchText, Qt::CaseInsensitive)) {
                match = true;
                break;
            }
        }
        ui->tableWidget_products->setRowHidden(row, !match);
    }
}

void admineditableinv::on_pushButton_clicked()
{
    adminpanel *back = new adminpanel();
    back->show();
    this->close();
}

void admineditableinv::on_pushButton_5_clicked()
{
    QApplication::quit();
}

void admineditableinv::on_pushButton_refresh_clicked()
{
    ui->lineEdit_searchproduct->clear();
    loadAllProducts();
}

