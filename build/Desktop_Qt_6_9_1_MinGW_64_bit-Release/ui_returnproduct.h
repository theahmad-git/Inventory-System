/********************************************************************************
** Form generated from reading UI file 'returnproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNPRODUCT_H
#define UI_RETURNPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_returnproduct
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label;
    QLineEdit *lineEdit_billId;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_product_id;
    QLineEdit *lineEdit_product_id;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout;
    QLabel *label_defective;
    QComboBox *comboBox_defective;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_quantity;
    QSpinBox *spinBox_quantity;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_producttotalamount;
    QLineEdit *lineEdit_producttotalamount;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_discount;
    QLineEdit *lineEdit_discount;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_totalamountreturn;
    QLineEdit *lineEdit_totalamountreturn;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_2;
    QLineEdit *lineEdit_feedback;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_return;

    void setupUi(QWidget *returnproduct)
    {
        if (returnproduct->objectName().isEmpty())
            returnproduct->setObjectName("returnproduct");
        returnproduct->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(returnproduct->sizePolicy().hasHeightForWidth());
        returnproduct->setSizePolicy(sizePolicy);
        returnproduct->setMinimumSize(QSize(300, 300));
        returnproduct->setMaximumSize(QSize(1920, 1080));
        returnproduct->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(returnproduct);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 681, 471));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(dateTimeEdit);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
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

        horizontalLayout_9->addWidget(label);

        lineEdit_billId = new QLineEdit(layoutWidget);
        lineEdit_billId->setObjectName("lineEdit_billId");
        lineEdit_billId->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_9->addWidget(lineEdit_billId);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_product_id = new QLabel(layoutWidget);
        label_product_id->setObjectName("label_product_id");
        label_product_id->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #3498DB;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(label_product_id);

        lineEdit_product_id = new QLineEdit(layoutWidget);
        lineEdit_product_id->setObjectName("lineEdit_product_id");
        lineEdit_product_id->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_3->addWidget(lineEdit_product_id);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_defective = new QLabel(layoutWidget);
        label_defective->setObjectName("label_defective");
        label_defective->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #3498DB;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout->addWidget(label_defective);

        comboBox_defective = new QComboBox(layoutWidget);
        comboBox_defective->addItem(QString());
        comboBox_defective->addItem(QString());
        comboBox_defective->setObjectName("comboBox_defective");
        comboBox_defective->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout->addWidget(comboBox_defective);


        horizontalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_quantity = new QLabel(layoutWidget);
        label_quantity->setObjectName("label_quantity");
        label_quantity->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #3498DB;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label_quantity);

        spinBox_quantity = new QSpinBox(layoutWidget);
        spinBox_quantity->setObjectName("spinBox_quantity");

        horizontalLayout_2->addWidget(spinBox_quantity);


        horizontalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_producttotalamount = new QLabel(layoutWidget);
        label_producttotalamount->setObjectName("label_producttotalamount");
        label_producttotalamount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #D2B48C;  /* Light brown (tan) */\n"
"    color: black;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}"));

        horizontalLayout_4->addWidget(label_producttotalamount);

        lineEdit_producttotalamount = new QLineEdit(layoutWidget);
        lineEdit_producttotalamount->setObjectName("lineEdit_producttotalamount");
        lineEdit_producttotalamount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_4->addWidget(lineEdit_producttotalamount);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_discount = new QLabel(layoutWidget);
        label_discount->setObjectName("label_discount");
        label_discount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(label_discount);

        lineEdit_discount = new QLineEdit(layoutWidget);
        lineEdit_discount->setObjectName("lineEdit_discount");
        lineEdit_discount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_5->addWidget(lineEdit_discount);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_totalamountreturn = new QLabel(layoutWidget);
        label_totalamountreturn->setObjectName("label_totalamountreturn");
        label_totalamountreturn->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #D2B48C;  /* Light brown (tan) */\n"
"    color: black;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}"));

        horizontalLayout_6->addWidget(label_totalamountreturn);

        lineEdit_totalamountreturn = new QLineEdit(layoutWidget);
        lineEdit_totalamountreturn->setObjectName("lineEdit_totalamountreturn");
        lineEdit_totalamountreturn->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_6->addWidget(lineEdit_totalamountreturn);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"QLabel {\n"
"background-color: #3498DB;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_10->addWidget(label_2);

        lineEdit_feedback = new QLineEdit(layoutWidget);
        lineEdit_feedback->setObjectName("lineEdit_feedback");
        lineEdit_feedback->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_10->addWidget(lineEdit_feedback);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_return = new QPushButton(layoutWidget);
        pushButton_return->setObjectName("pushButton_return");
        pushButton_return->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: #27AE60;  /* Emerald green */\n"
"    background-color: #2ECC71;  /* Light green */\n"
";\n"
"font-weight: bold;\n"
"    color: white;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #1E8449;  /* Darker shade of emerald green */\n"
"\n"
"}\n"
""));
        pushButton_return->setAutoDefault(false);

        horizontalLayout_7->addWidget(pushButton_return);


        verticalLayout->addLayout(horizontalLayout_7);


        retranslateUi(returnproduct);

        QMetaObject::connectSlotsByName(returnproduct);
    } // setupUi

    void retranslateUi(QWidget *returnproduct)
    {
        returnproduct->setWindowTitle(QCoreApplication::translate("returnproduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("returnproduct", "Bill Id:", nullptr));
        label_product_id->setText(QCoreApplication::translate("returnproduct", "Product ID:", nullptr));
        label_defective->setText(QCoreApplication::translate("returnproduct", "Defective:", nullptr));
        comboBox_defective->setItemText(0, QCoreApplication::translate("returnproduct", "Yes", nullptr));
        comboBox_defective->setItemText(1, QCoreApplication::translate("returnproduct", "No", nullptr));

        label_quantity->setText(QCoreApplication::translate("returnproduct", "Quantity", nullptr));
        label_producttotalamount->setText(QCoreApplication::translate("returnproduct", "Product total amount", nullptr));
        label_discount->setText(QCoreApplication::translate("returnproduct", "Discount:", nullptr));
        label_totalamountreturn->setText(QCoreApplication::translate("returnproduct", "Total amount return", nullptr));
        label_2->setText(QCoreApplication::translate("returnproduct", "Feedback:", nullptr));
        pushButton_return->setText(QCoreApplication::translate("returnproduct", "Return", nullptr));
    } // retranslateUi

};

namespace Ui {
    class returnproduct: public Ui_returnproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNPRODUCT_H
