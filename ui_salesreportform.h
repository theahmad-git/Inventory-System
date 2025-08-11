/********************************************************************************
** Form generated from reading UI file 'salesreportform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESREPORTFORM_H
#define UI_SALESREPORTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_salesreportform
{
public:
    QSplitter *splitter_2;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableWidget *tableWidget_topProducts;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_from;
    QTimeEdit *timeEdit_from;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_to;
    QTimeEdit *timeEdit_to;
    QCalendarWidget *calendarWidget;
    QPushButton *pushButton_check;
    QTextEdit *textEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox;
    QLineEdit *lineEdit_searchproduct;
    QPushButton *pushButton_clear;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_salesreturn;

    void setupUi(QWidget *salesreportform)
    {
        if (salesreportform->objectName().isEmpty())
            salesreportform->setObjectName("salesreportform");
        salesreportform->resize(1920, 1023);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(salesreportform->sizePolicy().hasHeightForWidth());
        salesreportform->setSizePolicy(sizePolicy);
        salesreportform->setMinimumSize(QSize(300, 300));
        salesreportform->setMaximumSize(QSize(1920, 1080));
        salesreportform->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        splitter_2 = new QSplitter(salesreportform);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setGeometry(QRect(0, 0, 961, 631));
        splitter_2->setOrientation(Qt::Orientation::Vertical);
        splitter = new QSplitter(splitter_2);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLabel {\n"
"background-color:#5D6D7E;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 12px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        verticalLayout_2->addWidget(label);

        tableWidget_topProducts = new QTableWidget(layoutWidget);
        if (tableWidget_topProducts->columnCount() < 3)
            tableWidget_topProducts->setColumnCount(3);
        tableWidget_topProducts->setObjectName("tableWidget_topProducts");
        tableWidget_topProducts->setStyleSheet(QString::fromUtf8("\n"
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
"\n"
""));
        tableWidget_topProducts->setColumnCount(3);
        tableWidget_topProducts->horizontalHeader()->setVisible(true);
        tableWidget_topProducts->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_2->addWidget(tableWidget_topProducts);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_from = new QLabel(layoutWidget1);
        label_from->setObjectName("label_from");
        label_from->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #F1C40F;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_from);

        timeEdit_from = new QTimeEdit(layoutWidget1);
        timeEdit_from->setObjectName("timeEdit_from");

        horizontalLayout->addWidget(timeEdit_from);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_to = new QLabel(layoutWidget1);
        label_to->setObjectName("label_to");
        label_to->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #F1C40F;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label_to);

        timeEdit_to = new QTimeEdit(layoutWidget1);
        timeEdit_to->setObjectName("timeEdit_to");

        horizontalLayout_2->addWidget(timeEdit_to);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_3);

        calendarWidget = new QCalendarWidget(layoutWidget1);
        calendarWidget->setObjectName("calendarWidget");
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget {\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"    background-color: white;\n"
"    color: black;\n"
"    selection-background-color: #87CEFA;\n"
"    selection-color: black;\n"
"}\n"
"QCalendarWidget QToolButton {\n"
"    color: black;\n"
"    background-color: lightgray;\n"
"}\n"
"QCalendarWidget QMenu {\n"
"    background-color: white;\n"
"    color: black;\n"
"}\n"
""));

        verticalLayout_3->addWidget(calendarWidget);

        pushButton_check = new QPushButton(layoutWidget1);
        pushButton_check->setObjectName("pushButton_check");
        pushButton_check->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        verticalLayout_3->addWidget(pushButton_check);

        textEdit = new QTextEdit(layoutWidget1);
        textEdit->setObjectName("textEdit");

        verticalLayout_3->addWidget(textEdit);

        splitter->addWidget(layoutWidget1);
        splitter_2->addWidget(splitter);
        layoutWidget2 = new QWidget(splitter_2);
        layoutWidget2->setObjectName("layoutWidget2");
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_4 = new QLabel(layoutWidget2);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QLabel {\n"
"background-color:#5D6D7E;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 12px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(475, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        comboBox = new QComboBox(layoutWidget2);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");

        horizontalLayout_4->addWidget(comboBox);

        lineEdit_searchproduct = new QLineEdit(layoutWidget2);
        lineEdit_searchproduct->setObjectName("lineEdit_searchproduct");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_searchproduct->sizePolicy().hasHeightForWidth());
        lineEdit_searchproduct->setSizePolicy(sizePolicy1);
        lineEdit_searchproduct->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: #ECF0F1;\n"
"    color: #2C3E50;\n"
"    border: 1px solid #BDC3C7;\n"
"    border-radius: 3px;\n"
"    padding: 2px 4px;\n"
"    font-size: 12px;\n"
"    min-height: 20px; /* reduce height */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #3498DB;\n"
"    background-color: #FFFFFF;\n"
"}\n"
"\n"
"QLineEdit::placeholder {\n"
"    color: #95A5A6;\n"
"    font-style: italic;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(lineEdit_searchproduct);

        pushButton_clear = new QPushButton(layoutWidget2);
        pushButton_clear->setObjectName("pushButton_clear");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy2.setHorizontalStretch(10);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_clear->sizePolicy().hasHeightForWidth());
        pushButton_clear->setSizePolicy(sizePolicy2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: #27AE60;  /* Emerald green */\n"
"    background-color: #2ECC71;  /* Light green */\n"
"    color: white;\n"
" font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #1E8449;  /* Darker shade of emerald green */\n"
"\n"
"}\n"
""));

        horizontalLayout_4->addWidget(pushButton_clear);

        horizontalSpacer_2 = new QSpacerItem(475, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_4->addLayout(verticalLayout);

        tableWidget_salesreturn = new QTableWidget(layoutWidget2);
        tableWidget_salesreturn->setObjectName("tableWidget_salesreturn");
        tableWidget_salesreturn->setStyleSheet(QString::fromUtf8("\n"
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
"\n"
""));
        tableWidget_salesreturn->horizontalHeader()->setStretchLastSection(true);

        verticalLayout_4->addWidget(tableWidget_salesreturn);

        splitter_2->addWidget(layoutWidget2);

        retranslateUi(salesreportform);

        QMetaObject::connectSlotsByName(salesreportform);
    } // setupUi

    void retranslateUi(QWidget *salesreportform)
    {
        salesreportform->setWindowTitle(QCoreApplication::translate("salesreportform", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("salesreportform", "Top selling products:", nullptr));
        label_from->setText(QCoreApplication::translate("salesreportform", "From:", nullptr));
        label_to->setText(QCoreApplication::translate("salesreportform", "To:", nullptr));
        pushButton_check->setText(QCoreApplication::translate("salesreportform", "Check", nullptr));
        label_4->setText(QCoreApplication::translate("salesreportform", "Check All Return Sales:", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("salesreportform", "Search All Columns", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("salesreportform", "Search By Bill No", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("salesreportform", "Search By Product ID", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("salesreportform", "Search Defective", nullptr));

        pushButton_clear->setText(QCoreApplication::translate("salesreportform", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class salesreportform: public Ui_salesreportform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESREPORTFORM_H
