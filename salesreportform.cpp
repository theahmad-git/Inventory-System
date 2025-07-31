#include "salesreportform.h"
#include "ui_salesreportform.h"
#include "inventorypanel.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QString>
#include <QDebug>
#include <QScreen>
#include <QApplication>
#include <QShortcut>
#include <QTime>
#include <QDate>
#include <QBrush>
#include <QColor>
#include <QMouseEvent>
#include <QComboBox>


salesreportform::salesreportform(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::salesreportform)


{
    ui->setupUi(this);

    // In constructor:
    connect(ui->lineEdit_searchproduct, &QLineEdit::textChanged,
            this, &salesreportform::filterSalesReturnData);

    connect(ui->comboBox, QOverload<int>::of(&QComboBox::currentIndexChanged),
            this, [this]() {
                filterSalesReturnData(ui->lineEdit_searchproduct->text());
            });

    // Disable sorting initially
    ui->tableWidget_salesreturn->setSortingEnabled(false);
    ui->tableWidget_salesreturn->horizontalHeader()->installEventFilter(this);
    // Connect header click signal
    connect(ui->tableWidget_salesreturn->horizontalHeader(), &QHeaderView::sectionClicked,
            this, &salesreportform::onHeaderClicked);

    // Make Defective column header look clickable
    ui->tableWidget_salesreturn->horizontalHeader()->setStyleSheet(
        "QHeaderView::section:4 { background-color: #f0f0f0; }"  // Highlight Defective column header
        );

    ui->tableWidget_salesreturn->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidget_salesreturn->setSelectionBehavior(QAbstractItemView::SelectRows);
    connect(ui->tableWidget_salesreturn, &QTableWidget::cellClicked,
            this, &salesreportform::onDefectiveCellClicked);

    ui->label_from->setText("From: Select Date");
    ui->label_to->setText("To: Select Date");
    updateDateSelectionVisuals();

    // Make labels clickable
    ui->label_from->installEventFilter(this);
    ui->label_to->installEventFilter(this);

    // Set up calendar and time edits
    QDate currentDate = QDate::currentDate();
    QTime currentTime = QTime::currentTime();

    ui->calendarWidget->setSelectedDate(currentDate);
    QTime midnight(0, 0, 0);          // 12:00:00 AM
    QTime oneMinuteBeforeMidnight(23, 59, 0);  // 11:59:00 PM

    ui->timeEdit_from->setTime(midnight);
    ui->timeEdit_to->setTime(oneMinuteBeforeMidnight); // Default to 1 hour later
    // Set time formats
    ui->timeEdit_from->setDisplayFormat("hh:mm AP");
    ui->timeEdit_to->setDisplayFormat("hh:mm AP");

    // Initialize tables
    ui->tableWidget_topProducts->setColumnCount(3);
    ui->tableWidget_topProducts->setHorizontalHeaderLabels({"Product ID", "Qty Sold", "Contribution %"});

    ui->tableWidget_salesreturn->setColumnCount(8);
    ui->tableWidget_salesreturn->setHorizontalHeaderLabels(
        {"Bill ID", "User Email", "Product ID", "Quantity", "Defective", "Total Amount", "Feedback", "Return Time"});

    // Connect clear button
    connect(ui->pushButton_clear, &QPushButton::clicked, this, &salesreportform::clearForm);

    // Connect search functionality
    connect(ui->lineEdit_searchproduct, &QLineEdit::textChanged, this, &salesreportform::filterSalesReturnData);

    // Connect calendar signal
    connect(ui->calendarWidget, &QCalendarWidget::clicked,
            this, &salesreportform::on_calendarWidget_clicked);

    ui->calendarWidget->setSelectedDate(QDate::currentDate());

    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

}

salesreportform::~salesreportform()
{
    delete ui;
}

bool salesreportform::eventFilter(QObject *obj, QEvent *event)
{
    // Handle header clicks for sorting
    if (obj == ui->tableWidget_salesreturn->horizontalHeader() &&
        event->type() == QEvent::MouseButtonPress) {
        QMouseEvent *mouseEvent = static_cast<QMouseEvent*>(event);
        int logicalIndex = ui->tableWidget_salesreturn->horizontalHeader()->logicalIndexAt(mouseEvent->pos());

        // Only allow clicking on Defective column (index 4)
        if (logicalIndex == 4) {
            onHeaderClicked(logicalIndex);
            return true; // Event handled
        }
        return true; // Block clicks on other columns
    }

    // Handle your existing label clicks
    if (event->type() == QEvent::MouseButtonPress) {
        if (obj == ui->label_from) {
            selectingFromDate = true;
            ui->calendarWidget->setSelectedDate(fromDate.isValid() ? fromDate : QDate::currentDate());
            updateDateSelectionVisuals();
            return true;
        }
        else if (obj == ui->label_to) {
            selectingFromDate = false;
            ui->calendarWidget->setSelectedDate(toDate.isValid() ? toDate : QDate::currentDate());
            updateDateSelectionVisuals();
            return true;
        }
    }

    return QWidget::eventFilter(obj, event);

}

void salesreportform::on_calendarWidget_clicked(const QDate &date)
{
    if (selectingFromDate) {
        fromDate = date;
        ui->label_from->setText("From: " + date.toString("dd-MM-yyyy"));
    } else {
        toDate = date;
        ui->label_to->setText("To: " + date.toString("dd-MM-yyyy"));
    }
     updateDateSelectionVisuals();
}

void salesreportform::on_label_from_clicked()
{
    selectingFromDate = true;
    ui->calendarWidget->setSelectedDate(QDate::currentDate());
}

void salesreportform::on_label_to_clicked()
{
    selectingFromDate = false;
    ui->calendarWidget->setSelectedDate(QDate::currentDate());
}

void salesreportform::on_pushButton_check_clicked()
{
    if (!fromDate.isValid() || !toDate.isValid()) {
        QMessageBox::warning(this, "Error", "Please select both From and To dates");
        return;
    }

    QDateTime from(fromDate, ui->timeEdit_from->time());
    QDateTime to(toDate, ui->timeEdit_to->time());

    if (from >= to) {
        QMessageBox::warning(this, "Invalid Range", "End date/time must be after start date/time");
        return;
    }

    loadSalesData(from, to);
    loadTopSellingProducts(from, to);
    updateSummary(from, to);
}
void salesreportform::loadSalesData(const QDateTime &from, const QDateTime &to)
{
    ui->tableWidget_salesreturn->setRowCount(0);

    QSqlQuery query;
    query.prepare("SELECT bill_id, user_email, product_id, quantity, defective, "
                  "total_amount_return, feedback, return_date_time FROM sales_return "
                  "WHERE return_date_time BETWEEN ? AND ?");
    query.addBindValue(from.toString("yyyy-MM-dd HH:mm:ss"));
    query.addBindValue(to.toString("yyyy-MM-dd HH:mm:ss"));

    if (!query.exec()) {
        qDebug() << "Query error:" << query.lastError().text();
        return;
    }

    int row = 0;
    while (query.next()) {
        ui->tableWidget_salesreturn->insertRow(row);

        for (int col = 0; col < 8; ++col) {
            QTableWidgetItem *item = new QTableWidgetItem(query.value(col).toString());
            item->setFlags(item->flags() & ~Qt::ItemIsEditable);

            if (col == 4) { // Defective column
                if (item->text().compare("Yes", Qt::CaseInsensitive) == 0) {
                    item->setBackground(QBrush(QColor(255, 200, 200))); // Light red for Yes
                } else {
                    item->setBackground(QBrush(QColor(200, 255, 200))); // Light green for No
                }
                item->setTextAlignment(Qt::AlignCenter);
            }

            ui->tableWidget_salesreturn->setItem(row, col, item);
        }
        row++;
    }
}
void salesreportform::loadTopSellingProducts(const QDateTime &from, const QDateTime &to)
{
    ui->tableWidget_topProducts->setRowCount(0);

    QSqlQuery query;
    query.prepare(R"(
        SELECT p.product_id, SUM(s.quantity_sold) AS total_sold,
               ROUND(100.0 * SUM(s.quantity_sold) /
               (SELECT SUM(quantity_sold) FROM sales WHERE sale_date_time BETWEEN ? AND ?), 2) AS percentage
        FROM sales s
        JOIN product p ON s.product_id = p.product_id
        WHERE s.sale_date_time BETWEEN ? AND ?
        GROUP BY s.product_id
        ORDER BY total_sold DESC

 )");

    QString rangeStr = from.toString("yyyy-MM-dd HH:mm:ss");
    query.addBindValue(rangeStr);
    query.addBindValue(to.toString("yyyy-MM-dd HH:mm:ss"));
    query.addBindValue(rangeStr);
    query.addBindValue(to.toString("yyyy-MM-dd HH:mm:ss"));

    if (!query.exec()) {
        qDebug() << "Query error:" << query.lastError().text();
        return;
    }

    int row = 0;
    while (query.next()) {
        ui->tableWidget_topProducts->insertRow(row);
        ui->tableWidget_topProducts->setItem(row, 0,
                                             new QTableWidgetItem(query.value(0).toString()));
        ui->tableWidget_topProducts->setItem(row, 1,
                                             new QTableWidgetItem(query.value(1).toString()));
        ui->tableWidget_topProducts->setItem(row, 2,
                                             new QTableWidgetItem(query.value(2).toString() + "%"));
        row++;
    }
}


void salesreportform::updateSummary(const QDateTime &from, const QDateTime &to)
{
    // Get total sales
    QSqlQuery salesQuery;
    salesQuery.prepare("SELECT SUM(final_total) FROM sales WHERE sale_date_time BETWEEN ? AND ?");
    salesQuery.addBindValue(from.toString("yyyy-MM-dd HH:mm:ss"));
    salesQuery.addBindValue(to.toString("yyyy-MM-dd HH:mm:ss"));

    double totalSales = 0;
    if (salesQuery.exec() && salesQuery.next()) {
        totalSales = salesQuery.value(0).toDouble();
    }
    // Get total returns
    QSqlQuery returnsQuery;
    returnsQuery.prepare("SELECT SUM(total_amount_return) FROM sales_return WHERE return_date_time BETWEEN ? AND ?");
    returnsQuery.addBindValue(from.toString("yyyy-MM-dd HH:mm:ss"));
    returnsQuery.addBindValue(to.toString("yyyy-MM-dd HH:mm:ss"));

    double totalReturns = 0;
    if (returnsQuery.exec() && returnsQuery.next()) {
        totalReturns = returnsQuery.value(0).toDouble();
    }

    // Update summary text
    QString summary = QString(" 𝗦𝗮𝗹𝗲𝘀 𝗥𝗲𝗽𝗼𝗿𝘁 𝗦𝘂𝗺𝗺𝗮𝗿𝘆\n"
                              " 𝗗𝗮𝘁𝗲 𝗥𝗮𝗻𝗴𝗲: %1 𝘁𝗼 %2\n"
                              " 𝗧𝗼𝘁𝗮𝗹 𝗦𝗮𝗹𝗲𝘀: Rs. %3\n"
                              " 𝗧𝗼𝘁𝗮𝗹 𝗥𝗲𝘁𝘂𝗿𝗻𝘀: Rs. %4\n"
                              " 𝗡𝗲𝘁 𝗦𝗮𝗹𝗲𝘀: Rs. %5")
                          .arg(from.toString("dd-MM-yyyy hh:mm AP"))
                          .arg(to.toString("dd-MM-yyyy hh:mm AP"))
                          .arg(totalSales, 0, 'f', 2)
                          .arg(totalReturns, 0, 'f', 2)
                          .arg(totalSales - totalReturns, 0, 'f', 2);

    ui->textEdit->setText(summary);
}
    void salesreportform::on_pushButton_clicked()
    {
        inventorypanel *back = new inventorypanel();
        back->show();
        this->close();
    }

    void salesreportform::on_pushButton_2_clicked()
    {
        QApplication ::quit();
    }

    void salesreportform::loadSalesReturnData() {
         ui->tableWidget_salesreturn->setSortingEnabled(false);
        ui->tableWidget_salesreturn->clear();
        ui->tableWidget_salesreturn->setRowCount(0);
        ui->tableWidget_salesreturn->setColumnCount(8);
        ui->tableWidget_salesreturn->setHorizontalHeaderLabels({"Bill ID", "User Email", "Product ID", "Quantity", "Defective", "Total Amount", "Feedback", "Return Time"});

        QSqlQuery query("SELECT bill_id, user_email, product_id, quantity, defective, total_amount_return, feedback, return_date_time FROM sales_return");
        int row = 0;
        while (query.next()) {
            ui->tableWidget_salesreturn->insertRow(row);
            for (int col = 0; col < 8; ++col) {
                ui->tableWidget_salesreturn->setItem(row, col, new QTableWidgetItem(query.value(col).toString()));
            }
            row++;
        }
         ui->tableWidget_salesreturn->setSortingEnabled(true);
    }
    void salesreportform::filterSalesReturnData(const QString &text)
    {
        QString searchType = ui->comboBox->currentText();
        qDebug() << "Searching for:" << text << "in:" << searchType; // Debug output

        for (int i = 0; i < ui->tableWidget_salesreturn->rowCount(); ++i) {
            bool match = false;

            if (searchType == "Search All Columns") {
                // Show all rows if search is empty
                if (text.isEmpty()) {
                    match = true;
                }
                else {
                    // Search across all columns
                    for (int col = 0; col < ui->tableWidget_salesreturn->columnCount(); ++col) {
                        QTableWidgetItem *item = ui->tableWidget_salesreturn->item(i, col);
                        if (item && item->text().contains(text, Qt::CaseInsensitive)) {
                            match = true;
                            break;
                        }
                    }
                }
            }
            else if (searchType == "Search By Bill No") {
                QTableWidgetItem *item = ui->tableWidget_salesreturn->item(i, 0);
                if (text.isEmpty()) {
                    match = true;
                } else if (item) {
                    match = item->text().contains(text, Qt::CaseInsensitive);
                }
            }
            else if (searchType == "Search By Product ID") {
                QTableWidgetItem *item = ui->tableWidget_salesreturn->item(i, 2);
                if (text.isEmpty()) {
                    match = true;
                } else if (item) {
                    match = item->text().contains(text, Qt::CaseInsensitive);
                }
            }
            else if (searchType == "Search Defective") {
                QTableWidgetItem *item = ui->tableWidget_salesreturn->item(i, 4);
                if (text.isEmpty()) {
                    match = true;
                } else if (item) {
                    QString searchText = text.toLower();
                    QString itemText = item->text().toLower();

                    // Match either "yes" or "no" exactly
                    if (searchText == "y" || searchText == "yes") {
                        match = (itemText == "yes");
                    }
                    else if (searchText == "n" || searchText == "no") {
                        match = (itemText == "no");
                    }
                    // Also allow partial matches for flexibility
                    else {
                        match = itemText.contains(searchText);
                    }
                }
            }

            ui->tableWidget_salesreturn->setRowHidden(i, !match);
        }

        // Ensure the table updates visually
        ui->tableWidget_salesreturn->viewport()->update();
    }
    void salesreportform::clearForm()
    {
        fromDate = QDate();
        toDate = QDate();
        QDateTime current = QDateTime::currentDateTime();
        ui->calendarWidget->setSelectedDate(current.date());
        QTime midnight(0, 0, 0);
        QTime oneMinuteBeforeMidnight(23, 59, 0);

        ui->timeEdit_from->setTime(midnight);
        ui->timeEdit_to->setTime(oneMinuteBeforeMidnight);
        ui->tableWidget_topProducts->setRowCount(0);
        ui->tableWidget_salesreturn->setRowCount(0);
        ui->textEdit->clear();
        ui->lineEdit_searchproduct->clear();
        ui->label_from->setText("From: Select Date");
        ui->label_to->setText("To: Select Date");
        updateDateSelectionVisuals();
    }

    void salesreportform::on_pushButton_clear_clicked()
    {
        // Reset date/time
        fromDate = QDate();
        toDate = QDate();
        QDateTime current = QDateTime::currentDateTime();
        ui->timeEdit_from->setTime(current.time());
        ui->timeEdit_to->setTime(current.time());
        ui->calendarWidget->setSelectedDate(current.date());

        // Clear tables
        ui->tableWidget_salesreturn->setRowCount(0);
        ui->tableWidget_topProducts->setRowCount(0);

        // Clear summary
        ui->textEdit->clear();
        // Clear search
        ui->lineEdit_searchproduct->clear();
        ui->tableWidget_salesreturn->setSortingEnabled(false);
    }
    void salesreportform::on_label_from_linkActivated(const QString &link)
    {
        Q_UNUSED(link);
        selectingFromDate = true;
        ui->calendarWidget->setSelectedDate(QDate::currentDate());
    }

    void salesreportform::updateDateSelectionVisuals()
    {
        QString fromStyle, toStyle;
        QString baseStyle = "QLabel {"
                            "    background-color: #F1C40F;  /* Yellow background */"
                            "    color: white;"
                            "    border-radius: 5px;"
                            "    padding: 5px 10px;"
                            "    font-size: 10px;"
                            "    font-weight: bold;"
                            "}";

        QString selectedStyle = "QLabel {"
                                "    color: #FFFFFF;"
                                "    background-color: #E74C3C; /* Blue background when selected */"
                                "    border: 1px solid #2980B9;"
                                "    border-radius: 5px;"
                                "    padding: 5px 10px;"
                                "    font-size: 10px;"
                                "    font-weight: bold;"
                                "}";

        QString dateSetStyle = "QLabel {"
                               "    color: #FFFFFF;"
                               "    background-color: #27AE60; /* Green background when date is set */"
                               "    border: 1px solid #219653;"
                               "    border-radius: 5px;"
                               "    padding: 5px 10px;"
                               "    font-size: 10px;"
                               "    font-weight: bold;"
                               "}";

        if (selectingFromDate) {
            // Highlight From label when selecting From date
            fromStyle = selectedStyle;
            toStyle = baseStyle;
        } else {
            // Highlight To label when selecting To date
            fromStyle = baseStyle;
            toStyle = selectedStyle;
        }

        // Apply different style if date is actually selected
        if (fromDate.isValid()) {
            fromStyle = dateSetStyle;
        }
        if (toDate.isValid()) {
            toStyle = dateSetStyle;
        }

        ui->label_from->setStyleSheet(fromStyle);
        ui->label_to->setStyleSheet(toStyle);
    }
    void salesreportform::onDefectiveCellClicked(int row, int column)
    {
        // Check if clicked column is the "Defective" column (column 4)
        if (column == 4) {
            QTableWidgetItem *item = ui->tableWidget_salesreturn->item(row, column);
            if (item) {
                // Toggle between "Yes" and "No"
                QString currentValue = item->text();
                QString newValue = (currentValue.compare("Yes", Qt::CaseInsensitive) == 0) ? "No" : "Yes";
                item->setText(newValue);

                // Update the background color
                if (newValue == "Yes") {
                    item->setBackground(QBrush(QColor(255, 200, 200)));
                } else {
                    item->setBackground(QBrush(QColor(200, 255, 200)));
                }

                // Update the database
                QString billId = ui->tableWidget_salesreturn->item(row, 0)->text(); // Get bill ID from first column
                updateDefectiveStatusInDatabase(billId, newValue);
            }
        }
    }
    void salesreportform::updateDefectiveStatusInDatabase(const QString &billId, const QString &status)
    {
        QSqlQuery query;
        query.prepare("UPDATE sales_return SET defective = ? WHERE bill_id = ?");
        query.addBindValue(status);
        query.addBindValue(billId);

        if (!query.exec()) {
            qDebug() << "Failed to update defective status:" << query.lastError().text();
        }
    }

    void salesreportform::onHeaderClicked(int logicalIndex)
    {
        if (logicalIndex == 4) {
            static bool ascending = true;
            Qt::SortOrder order = ascending ? Qt::AscendingOrder : Qt::DescendingOrder;

            ui->tableWidget_salesreturn->setSortingEnabled(true);
            ui->tableWidget_salesreturn->sortByColumn(logicalIndex, order);
            ui->tableWidget_salesreturn->horizontalHeader()->setSortIndicator(logicalIndex, order);

            // Reapply colors
            for (int row = 0; row < ui->tableWidget_salesreturn->rowCount(); ++row) {
                QTableWidgetItem *item = ui->tableWidget_salesreturn->item(row, 4);
                if (item) {
                    item->setBackground(item->text().compare("Yes", Qt::CaseInsensitive) == 0 ?
                                            QColor(255, 200, 200) : QColor(200, 255, 200));
                }
            }

            ascending = !ascending;
        }
    }
