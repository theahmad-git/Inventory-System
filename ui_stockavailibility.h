/********************************************************************************
** Form generated from reading UI file 'stockavailibility.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STOCKAVAILIBILITY_H
#define UI_STOCKAVAILIBILITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stockavailibility
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QTableWidget *tableWidget_stock;
    QHBoxLayout *horizontalLayout;

    void setupUi(QWidget *stockavailibility)
    {
        if (stockavailibility->objectName().isEmpty())
            stockavailibility->setObjectName("stockavailibility");
        stockavailibility->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stockavailibility->sizePolicy().hasHeightForWidth());
        stockavailibility->setSizePolicy(sizePolicy);
        stockavailibility->setMinimumSize(QSize(300, 300));
        stockavailibility->setMaximumSize(QSize(1920, 1080));
        stockavailibility->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(stockavailibility);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 961, 641));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_stock = new QTableWidget(layoutWidget);
        tableWidget_stock->setObjectName("tableWidget_stock");
        tableWidget_stock->setMinimumSize(QSize(300, 300));
        tableWidget_stock->setMaximumSize(QSize(1920, 1080));
        tableWidget_stock->setStyleSheet(QString::fromUtf8("\n"
"QTableWidget {\n"
"    background-color: #E6F2FF; /* Light blue for even rows */\n"
"alternate-background-color: #B5D6F5;\n"
"\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #3498DB;  /* Optional: blue header */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"}\n"
""));
        tableWidget_stock->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_stock->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOn);
        tableWidget_stock->setSizeAdjustPolicy(QAbstractScrollArea::SizeAdjustPolicy::AdjustToContents);
        tableWidget_stock->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerItem);
        tableWidget_stock->setShowGrid(true);

        gridLayout->addWidget(tableWidget_stock, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");

        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(stockavailibility);

        QMetaObject::connectSlotsByName(stockavailibility);
    } // setupUi

    void retranslateUi(QWidget *stockavailibility)
    {
        stockavailibility->setWindowTitle(QCoreApplication::translate("stockavailibility", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stockavailibility: public Ui_stockavailibility {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STOCKAVAILIBILITY_H
