/********************************************************************************
** Form generated from reading UI file 'admineditableinv.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINEDITABLEINV_H
#define UI_ADMINEDITABLEINV_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admineditableinv
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_products;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_16;
    QDateTimeEdit *dateTimeEdit;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *pushButton_updateproduct;
    QPushButton *pushButton_delete;
    QHBoxLayout *horizontalLayout_15;
    QHBoxLayout *horizontalLayout;
    QLabel *label_6;
    QLineEdit *lineEdit_searchproduct;
    QPushButton *pushButton_refresh;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit_productid;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEdit_productname;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QComboBox *comboBox_category;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEdit_productquantity;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_3;
    QLineEdit *lineEdit_productprice;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_9;
    QComboBox *comboBox_size;
    QLabel *label_5;
    QComboBox *comboBox_unit;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *comboBox_barcodeoption;
    QLabel *label_barcode;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_add;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QWidget *admineditableinv)
    {
        if (admineditableinv->objectName().isEmpty())
            admineditableinv->setObjectName("admineditableinv");
        admineditableinv->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(admineditableinv->sizePolicy().hasHeightForWidth());
        admineditableinv->setSizePolicy(sizePolicy);
        admineditableinv->setMinimumSize(QSize(300, 300));
        admineditableinv->setMaximumSize(QSize(1920, 1080));
        admineditableinv->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(admineditableinv);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(2, -3, 951, 651));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_products = new QTableWidget(layoutWidget);
        if (tableWidget_products->columnCount() < 9)
            tableWidget_products->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_products->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget_products->setObjectName("tableWidget_products");
        tableWidget_products->setMaximumSize(QSize(1920, 1080));
        tableWidget_products->setStyleSheet(QString::fromUtf8("\n"
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
        tableWidget_products->setColumnCount(9);

        verticalLayout->addWidget(tableWidget_products);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setReadOnly(true);

        horizontalLayout_16->addWidget(dateTimeEdit);

        horizontalSpacer_2 = new QSpacerItem(500, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_16);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        pushButton_updateproduct = new QPushButton(layoutWidget);
        pushButton_updateproduct->setObjectName("pushButton_updateproduct");
        pushButton_updateproduct->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #28a745;  /* Bootstrap Green */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #218838;  /* Darker green on hover */\n"
"}\n"
""));
        pushButton_updateproduct->setCheckable(false);
        pushButton_updateproduct->setAutoDefault(false);
        pushButton_updateproduct->setFlat(false);

        horizontalLayout_14->addWidget(pushButton_updateproduct);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName("pushButton_delete");
        pushButton_delete->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E74C3C;  /* Bright red */\n"
"    color: white;\n"
" font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C0392B;  /* Darker red on hover */\n"
"}\n"
""));

        horizontalLayout_14->addWidget(pushButton_delete);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #3498DB;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding:  10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_6);

        lineEdit_searchproduct = new QLineEdit(layoutWidget);
        lineEdit_searchproduct->setObjectName("lineEdit_searchproduct");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
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

        horizontalLayout->addWidget(lineEdit_searchproduct);


        horizontalLayout_15->addLayout(horizontalLayout);

        pushButton_refresh = new QPushButton(layoutWidget);
        pushButton_refresh->setObjectName("pushButton_refresh");
        pushButton_refresh->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #28a745;  /* Bootstrap Green */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #218838;  /* Darker green on hover */\n"
"}\n"
""));

        horizontalLayout_15->addWidget(pushButton_refresh);


        horizontalLayout_14->addLayout(horizontalLayout_15);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:#5D6D7E;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 12px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_10->addWidget(label_8);

        horizontalSpacer_3 = new QSpacerItem(400, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label);

        lineEdit_productid = new QLineEdit(layoutWidget);
        lineEdit_productid->setObjectName("lineEdit_productid");
        lineEdit_productid->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_productid);


        horizontalLayout_12->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(label_2);

        lineEdit_productname = new QLineEdit(layoutWidget);
        lineEdit_productname->setObjectName("lineEdit_productname");
        lineEdit_productname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_3->addWidget(lineEdit_productname);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(label_7);

        comboBox_category = new QComboBox(layoutWidget);
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->addItem(QString());
        comboBox_category->setObjectName("comboBox_category");
        comboBox_category->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #f0f0f0;         /* Light gray background */\n"
"    border: 1px solid #ccc;            /* Soft border */\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"    color: #333;                       /* Dark text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: #e2e6ea;         /* Slightly darker on hover */\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #ccc;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/arrow-down.png);  /* Optional: Add a custom arrow icon */\n"
"}\n"
""));

        horizontalLayout_4->addWidget(comboBox_category);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        horizontalLayout_12->addLayout(horizontalLayout_3);


        verticalLayout_2->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_7->addWidget(label_4);

        lineEdit_productquantity = new QLineEdit(layoutWidget);
        lineEdit_productquantity->setObjectName("lineEdit_productquantity");
        lineEdit_productquantity->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_7->addWidget(lineEdit_productquantity);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_6->addWidget(label_3);

        lineEdit_productprice = new QLineEdit(layoutWidget);
        lineEdit_productprice->setObjectName("lineEdit_productprice");
        lineEdit_productprice->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_6->addWidget(lineEdit_productprice);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        horizontalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_17->addWidget(label_9);

        comboBox_size = new QComboBox(layoutWidget);
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->addItem(QString());
        comboBox_size->setObjectName("comboBox_size");
        comboBox_size->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #f0f0f0;         /* Light gray background */\n"
"    border: 1px solid #ccc;            /* Soft border */\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"    color: #333;                       /* Dark text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: #e2e6ea;         /* Slightly darker on hover */\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #ccc;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/arrow-down.png);  /* Optional: Add a custom arrow icon */\n"
"}\n"
""));

        horizontalLayout_17->addWidget(comboBox_size);


        horizontalLayout_5->addLayout(horizontalLayout_17);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(label_5);

        comboBox_unit = new QComboBox(layoutWidget);
        comboBox_unit->addItem(QString());
        comboBox_unit->addItem(QString());
        comboBox_unit->addItem(QString());
        comboBox_unit->addItem(QString());
        comboBox_unit->setObjectName("comboBox_unit");
        comboBox_unit->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background-color: #f0f0f0;         /* Light gray background */\n"
"    border: 1px solid #ccc;            /* Soft border */\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"    font-weight: bold;\n"
"    color: #333;                       /* Dark text */\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    background-color: #e2e6ea;         /* Slightly darker on hover */\n"
"    border: 1px solid #888;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"    width: 20px;\n"
"    border-left: 1px solid #ccc;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:/icons/arrow-down.png);  /* Optional: Add a custom arrow icon */\n"
"}\n"
""));
        comboBox_unit->setEditable(true);

        horizontalLayout_5->addWidget(comboBox_unit);


        horizontalLayout_13->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(horizontalLayout_13);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");

        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        comboBox_barcodeoption = new QComboBox(layoutWidget);
        comboBox_barcodeoption->addItem(QString());
        comboBox_barcodeoption->addItem(QString());
        comboBox_barcodeoption->setObjectName("comboBox_barcodeoption");

        horizontalLayout_8->addWidget(comboBox_barcodeoption);

        label_barcode = new QLabel(layoutWidget);
        label_barcode->setObjectName("label_barcode");
        label_barcode->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #FFF9DB;  /* Light yellow */\n"
"    color: #2C3E50;             /* Dark gray text for contrast */\n"
"    font-weight: bold;\n"
"    font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_8->addWidget(label_barcode);

        horizontalSpacer = new QSpacerItem(400, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer);

        pushButton_add = new QPushButton(layoutWidget);
        pushButton_add->setObjectName("pushButton_add");
        pushButton_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #28a745;  /* Bootstrap Green */\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"QPushButton:hover {\n"
"    background-color: #218838;  /* Darker green on hover */\n"
"}\n"
""));

        horizontalLayout_8->addWidget(pushButton_add);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");

        horizontalLayout_9->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_9);


        retranslateUi(admineditableinv);

        pushButton_updateproduct->setDefault(false);


        QMetaObject::connectSlotsByName(admineditableinv);
    } // setupUi

    void retranslateUi(QWidget *admineditableinv)
    {
        admineditableinv->setWindowTitle(QCoreApplication::translate("admineditableinv", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_products->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("admineditableinv", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_products->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("admineditableinv", "Product_ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_products->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("admineditableinv", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_products->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("admineditableinv", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_products->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("admineditableinv", "Price", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_products->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("admineditableinv", "Quantity", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_products->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("admineditableinv", "Size", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_products->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("admineditableinv", "Unit", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_products->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("admineditableinv", "Barcode", nullptr));
        pushButton_updateproduct->setText(QCoreApplication::translate("admineditableinv", "Update Product", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("admineditableinv", "Delete Product", nullptr));
        label_6->setText(QCoreApplication::translate("admineditableinv", "Search Product:", nullptr));
        pushButton_refresh->setText(QCoreApplication::translate("admineditableinv", "Refresh", nullptr));
        label_8->setText(QCoreApplication::translate("admineditableinv", "ADD Product by Filling Form:", nullptr));
        label->setText(QCoreApplication::translate("admineditableinv", "Product Id:", nullptr));
        label_2->setText(QCoreApplication::translate("admineditableinv", "Name:", nullptr));
        label_7->setText(QCoreApplication::translate("admineditableinv", "Category:", nullptr));
        comboBox_category->setItemText(0, QCoreApplication::translate("admineditableinv", "Bevarage", nullptr));
        comboBox_category->setItemText(1, QCoreApplication::translate("admineditableinv", "Grocery", nullptr));
        comboBox_category->setItemText(2, QCoreApplication::translate("admineditableinv", "Dairy", nullptr));
        comboBox_category->setItemText(3, QCoreApplication::translate("admineditableinv", "Fruit", nullptr));
        comboBox_category->setItemText(4, QCoreApplication::translate("admineditableinv", "Vegetable", nullptr));
        comboBox_category->setItemText(5, QCoreApplication::translate("admineditableinv", "Cosmetics", nullptr));
        comboBox_category->setItemText(6, QCoreApplication::translate("admineditableinv", "Miscellaneous", nullptr));

        label_4->setText(QCoreApplication::translate("admineditableinv", "Quantity:", nullptr));
        label_3->setText(QCoreApplication::translate("admineditableinv", "Price:", nullptr));
        label_9->setText(QCoreApplication::translate("admineditableinv", "Size:", nullptr));
        comboBox_size->setItemText(0, QCoreApplication::translate("admineditableinv", "N/A", nullptr));
        comboBox_size->setItemText(1, QCoreApplication::translate("admineditableinv", "XS", nullptr));
        comboBox_size->setItemText(2, QCoreApplication::translate("admineditableinv", "S", nullptr));
        comboBox_size->setItemText(3, QCoreApplication::translate("admineditableinv", "M", nullptr));
        comboBox_size->setItemText(4, QCoreApplication::translate("admineditableinv", "L", nullptr));
        comboBox_size->setItemText(5, QCoreApplication::translate("admineditableinv", "XL", nullptr));
        comboBox_size->setItemText(6, QCoreApplication::translate("admineditableinv", "XXL", nullptr));
        comboBox_size->setItemText(7, QCoreApplication::translate("admineditableinv", "XXXL", nullptr));

        label_5->setText(QCoreApplication::translate("admineditableinv", "Unit:", nullptr));
        comboBox_unit->setItemText(0, QCoreApplication::translate("admineditableinv", "Kg", nullptr));
        comboBox_unit->setItemText(1, QCoreApplication::translate("admineditableinv", "pcs", nullptr));
        comboBox_unit->setItemText(2, QCoreApplication::translate("admineditableinv", "Liter", nullptr));
        comboBox_unit->setItemText(3, QCoreApplication::translate("admineditableinv", "Miscellaneous", nullptr));

        comboBox_barcodeoption->setItemText(0, QCoreApplication::translate("admineditableinv", "Scan Barcode", nullptr));
        comboBox_barcodeoption->setItemText(1, QCoreApplication::translate("admineditableinv", "Generate Barcode", nullptr));

        label_barcode->setText(QString());
        pushButton_add->setText(QCoreApplication::translate("admineditableinv", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admineditableinv: public Ui_admineditableinv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINEDITABLEINV_H
