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
#include <QImage>
#include <QPixmap>
#include <QLabel>
#include <QProcess>
#include <QDir>
#include "zint.h"


admineditableinv::admineditableinv(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admineditableinv)
{
    ui->setupUi(this);
    connect(ui->lineEdit_searchproduct, &QLineEdit::textChanged,
            this, &admineditableinv::filterProducts);

    // Connect the barcode option combo box
    connect(ui->comboBox_barcodeoption, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, &admineditableinv::onBarcodeOptionChanged);

    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    this->showMaximized();
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    ui->pushButton_updateproduct->setAutoDefault(false);
    ui->pushButton_updateproduct->setDefault(false);
    // Set initial visibility based on default selection
    ui->label_barcode->setVisible(ui->comboBox_barcodeoption->currentText() == "Scan Barcode");

    loadAllProducts();
}

QString generateUpdateDescription(
    const QString& old_product_id, const QString& new_product_id,
    const QString& old_name, const QString& new_name,
    const QString& old_category, const QString& new_category,
    double old_price, double new_price,
    double old_quantity, double new_quantity,
    const QString& old_unit, const QString& new_unit,
    const QString& old_size, const QString& new_size)
{
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
    if (old_size != new_size)
        description += "\nsize: " + old_size + " -> " + new_size;

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
    QString size = ui->comboBox_size->currentText();
    double price = ui->lineEdit_productprice->text().toDouble();
    double quantity = ui->lineEdit_productquantity->text().toDouble();
    QString barcodeOption = ui->comboBox_barcodeoption->currentText();

    // Validate inputs
    if (product_id.isEmpty() || name.isEmpty() || category.isEmpty() || size.isEmpty() || unit.isEmpty() || price <= 0 || quantity <= 0) {
        QMessageBox::warning(this, "Input Error", "Please fill all fields correctly.");
        return;
    }

    // Check if product ID already exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM product WHERE product_id = ?");
    checkQuery.addBindValue(product_id);
    if (checkQuery.exec() && checkQuery.next() && checkQuery.value(0).toInt() > 0) {
        QMessageBox::warning(this, "Duplicate Product", "Product ID already exists. Please use a different ID.");
        return;
    }

    QString relativeBarcodePath;

    if (barcodeOption == "Generate Barcode") {
        // Generate barcode logic
        QString barcodeDir = QCoreApplication::applicationDirPath() + "/barcode/";
        QDir().mkpath(barcodeDir);
        QString fileName = "barcode_" + product_id + ".png";
        QString fullPath = barcodeDir + fileName;

        QString program = "E:/Inventory/zint-2.15.0/zint.exe";
        QStringList arguments;
        arguments << "-b" << "20" << "-d" << product_id << "-o" << fullPath;

        QProcess process;
        process.start(program, arguments);
        if (!process.waitForStarted() || !process.waitForFinished()) {
            qDebug() << "❌ Failed to generate barcode.";
            QMessageBox::warning(this, "Barcode Error", "Failed to generate barcode.");
            return;
        }

        relativeBarcodePath = "barcode/" + fileName;

        // Show the generated barcode
        QPixmap pixmap(fullPath);
        ui->label_barcode->setPixmap(pixmap.scaled(ui->label_barcode->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
    else if (barcodeOption == "Scan Barcode") {
        // For scanned barcode, check if we have an image
        if (ui->label_barcode->pixmap().isNull()) {
            QMessageBox::warning(this, "Barcode Error", "Please scan a barcode first.");
            return;
        }

        // Save the scanned barcode image
        QString barcodeDir = QCoreApplication::applicationDirPath() + "/barcode/";
        QDir().mkpath(barcodeDir);
        QString fileName = "barcode_" + product_id + ".png";
        QString fullPath = barcodeDir + fileName;

        if (!ui->label_barcode->pixmap().save(fullPath)) {
            QMessageBox::warning(this, "Barcode Error", "Failed to save scanned barcode.");
            return;
        }

        relativeBarcodePath = "barcode/" + fileName;
    }

    // Insert product into database
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "❌ Database not open:" << db.lastError().text();
            return;
        }
    }

    QSqlQuery query;
    query.prepare("INSERT INTO product (product_id, name, category, price, quantity, size, unit, last_modified, barcode_path) "
                  "VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");
    query.addBindValue(product_id);
    query.addBindValue(name);
    query.addBindValue(category);
    query.addBindValue(price);
    query.addBindValue(quantity);
    query.addBindValue(size);
    query.addBindValue(unit);
    query.addBindValue(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    query.addBindValue(relativeBarcodePath);

    if (query.exec()) {
        // Log Action
        QString description = QString("Added product: ID=%1, Name=%2, Category=%3, Price=%4, Quantity=%5, Size=%6, Unit=%7")
                                  .arg(product_id)
                                  .arg(name)
                                  .arg(category)
                                  .arg(price)
                                  .arg(quantity)
                                  .arg(size)
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

        // Clear fields
        ui->lineEdit_productid->clear();
        ui->lineEdit_productname->clear();
        ui->lineEdit_productprice->clear();
        ui->lineEdit_productquantity->clear();
        ui->comboBox_category->setCurrentIndex(0);
        ui->comboBox_unit->setCurrentIndex(0);
        ui->comboBox_size->setCurrentIndex(0);
        ui->label_barcode->clear();

        QMessageBox::information(this, "Success", "Product added successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to add product: " + query.lastError().text());
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

    QString name, category, size, unit;
    int quantity = 0;
    double price = 0.0;

    // Fetch product details before deletion
    QSqlQuery fetch;
    fetch.prepare("SELECT name, category, price, quantity, size, unit FROM product WHERE product_id = ?");
    fetch.addBindValue(product_id);
    if (fetch.exec() && fetch.next()) {
        name = fetch.value("name").toString();
        category = fetch.value("category").toString();
        price = fetch.value("price").toDouble();
        quantity = fetch.value("quantity").toInt();
        size = fetch.value("size").toString();
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
            QString description = QString("Deleted product: ID=%1, Name=%2, Category=%3, Price=%4, Quantity=%5, Size=%6, Unit=%7")
                                      .arg(product_id)
                                      .arg(name)
                                      .arg(category)
                                      .arg(price)
                                      .arg(quantity)
                                      .arg(size)
                                      .arg(unit);

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
    for (int row = 0; row < ui->tableWidget_products->rowCount(); ++row) {
        QString id = ui->tableWidget_products->item(row, 0)->text();

        // STEP 1: Get old data from DB
        QSqlQuery oldQuery;
        oldQuery.prepare("SELECT product_id, name, category, price, quantity, size, unit FROM product WHERE id = ?");
        oldQuery.addBindValue(id);

        QString old_product_id, old_name, old_category, old_size, old_unit;
        double old_price = 0, old_quantity = 0;

        if (oldQuery.exec() && oldQuery.next()) {
            old_product_id = oldQuery.value("product_id").toString();
            old_name = oldQuery.value("name").toString();
            old_category = oldQuery.value("category").toString();
            old_price = oldQuery.value("price").toDouble();
            old_quantity = oldQuery.value("quantity").toDouble();
            old_size = oldQuery.value("size").toString();
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
        QString new_size = qobject_cast<QComboBox *>(ui->tableWidget_products->cellWidget(row, 6))->currentText();
        QString new_unit = qobject_cast<QComboBox *>(ui->tableWidget_products->cellWidget(row, 7))->currentText();
        double new_price = new_price_str.toDouble();
        double new_quantity = new_quantity_str.toDouble();

        // Skip invalid data
        if (new_product_id.isEmpty() || new_name.isEmpty() || new_category.isEmpty() || new_size.isEmpty() || new_unit.isEmpty() ||
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
            old_size == new_size &&
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
        updateQuery.prepare("UPDATE product SET product_id = ?, name = ?, category = ?, price = ?, quantity = ?, size = ?, unit = ?, last_modified = ? WHERE id = ?");
        updateQuery.addBindValue(new_product_id);
        updateQuery.addBindValue(new_name);
        updateQuery.addBindValue(new_category);
        updateQuery.addBindValue(new_price);
        updateQuery.addBindValue(new_quantity);
        updateQuery.addBindValue(new_size);
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
                old_unit, new_unit,
                old_size, new_size
                );

            adminaction *action = new adminaction(
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
    ui->tableWidget_products->setColumnCount(10);  // Now 10 columns with size
    QStringList headers = {"ID", "Product ID", "Name", "Category", "Price", "Quantity", "Size", "Unit", "Last Modified", "Barcode"};
    ui->tableWidget_products->setHorizontalHeaderLabels(headers);

    QSqlQuery query("SELECT id, product_id, name, category, price, quantity, size, unit, last_modified, barcode_path FROM product");

    int row = 0;

    while (query.next()) {
        ui->tableWidget_products->insertRow(row);

        for (int col = 0; col < 10; ++col) {
            // Skip columns handled by combo boxes (category, size, unit)
            if (col == 3 || col == 6 || col == 7) continue;

            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());

            // Make editable except for ID, last_modified and barcode_path
            if (col != 0 && col != 8 && col != 9) {
                item->setFlags(item->flags() | Qt::ItemIsEditable);
            } else {
                item->setFlags(item->flags() & ~Qt::ItemIsEditable);  // Read-only
            }

            item->setData(Qt::UserRole, query.value(col).toString());
            ui->tableWidget_products->setItem(row, col, item);
        }

        // Category ComboBox (column 3)
        QComboBox *categoryBox = new QComboBox();
        categoryBox->addItems(categoryList);
        categoryBox->setCurrentText(query.value(3).toString());
        categoryBox->setProperty("original", query.value(3).toString());
        ui->tableWidget_products->setCellWidget(row, 3, categoryBox);

        // Size ComboBox (column 6)
        QComboBox *sizeBox = new QComboBox();
        QStringList sizeList = {"N/A","XS", "S", "M", "L", "XL", "XXL", "XXXL"};
        sizeBox->addItems(sizeList);
        sizeBox->setCurrentText(query.value(6).toString());
        sizeBox->setProperty("original", query.value(6).toString());
        ui->tableWidget_products->setCellWidget(row, 6, sizeBox);

        // Unit ComboBox (column 7)
        QComboBox *unitBox = new QComboBox();
        unitBox->addItems(unitList);
        unitBox->setCurrentText(query.value(7).toString());
        unitBox->setProperty("original", query.value(7).toString());
        ui->tableWidget_products->setCellWidget(row, 7, unitBox);

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
    const QString &size,
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
             quantity, size, unit, price, description, action_time)
        VALUES
            (?, ?, ?, ?, ?, ?, ?, ?, ?, ?, datetime('now', 'localtime'))
    )");

    query.addBindValue(adminEmail);
    query.addBindValue(actionType);
    query.addBindValue(productId);
    query.addBindValue(name);
    query.addBindValue(category);
    query.addBindValue(quantity);
    query.addBindValue(size);
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

void admineditableinv::generateBarcode(const QString& productId, QLabel* label)
{
    // Step 1: Create barcode/ folder if it doesn't exist
    QString barcodeDir = QCoreApplication::applicationDirPath() + "/barcode/";
    QDir().mkpath(barcodeDir);  // Ensures directory exists

    // Step 2: Set file name and full path
    QString fileName = "barcode_" + productId + ".png";
    QString fullPath = barcodeDir + fileName;

    // Step 3: Run zint.exe via QProcess
    QString program = "E:/Inventory/zint-2.15.0/zint.exe";  // Update to your path
    QStringList arguments;
    arguments << "-b" << "20" << "-d" << productId << "-o" << fullPath;

    QProcess process;
    process.start(program, arguments);
    if (!process.waitForStarted() || !process.waitForFinished()) {
        qDebug() << "Failed to generate barcode.";
        return;
    }

    // Step 4: Set barcode image to label
    QPixmap pixmap(fullPath);
    label->setPixmap(pixmap.scaled(label->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));

    // Step 5: Store relative path (like "barcode/barcode_PRD001.png")
    QString relativePath = "barcode/" + fileName;
    QSqlQuery query;
    query.prepare("UPDATE product SET barcode_path = :path WHERE product_id = :id");
    query.bindValue(":path", relativePath);
    query.bindValue(":id", productId);
    if (!query.exec())
        qDebug() << "Failed to update DB with barcode path:" << query.lastError();
}

void admineditableinv::onBarcodeOptionChanged(int index)
{
    QString option = ui->comboBox_barcodeoption->currentText();
    ui->label_barcode->setVisible(option == "Scan Barcode");

    // Clear the barcode label when switching modes
    if (option == "Generate Barcode") {
        ui->label_barcode->clear();
    }
}

void admineditableinv::onBarcodeScanned(const QString& barcodeData, const QImage& barcodeImage)
{
    // Set the product ID from the scanned barcode
    ui->lineEdit_productid->setText(barcodeData);

    // Display the scanned barcode image
    QPixmap pixmap = QPixmap::fromImage(barcodeImage);
    ui->label_barcode->setPixmap(pixmap.scaled(ui->label_barcode->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
}
