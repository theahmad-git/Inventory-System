/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_payment
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEdit_actualTotal;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QLineEdit *lineEdit_discountapplied;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_8;
    QLineEdit *lineEdit_discountAmount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_7;
    QLineEdit *lineEdit_final_total;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_9;
    QComboBox *comboBox_method;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit_cardnumber;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_3;
    QLineEdit *lineEdit_cashgiven;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_4;
    QLineEdit *lineEdit_returnAmount;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_paymeny;
    QTextEdit *textEdit_receipt;

    void setupUi(QWidget *payment)
    {
        if (payment->objectName().isEmpty())
            payment->setObjectName("payment");
        payment->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(payment->sizePolicy().hasHeightForWidth());
        payment->setSizePolicy(sizePolicy);
        payment->setMinimumSize(QSize(300, 300));
        payment->setMaximumSize(QSize(1920, 1080));
        payment->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(payment);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 2, 951, 641));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_6->addWidget(label_5);

        lineEdit_actualTotal = new QLineEdit(layoutWidget);
        lineEdit_actualTotal->setObjectName("lineEdit_actualTotal");
        lineEdit_actualTotal->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_6->addWidget(lineEdit_actualTotal);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(label_6);

        lineEdit_discountapplied = new QLineEdit(layoutWidget);
        lineEdit_discountapplied->setObjectName("lineEdit_discountapplied");
        lineEdit_discountapplied->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_4->addWidget(lineEdit_discountapplied);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_3->addWidget(label_8);

        lineEdit_discountAmount = new QLineEdit(layoutWidget);
        lineEdit_discountAmount->setObjectName("lineEdit_discountAmount");
        lineEdit_discountAmount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_discountAmount->setInputMethodHints(Qt::InputMethodHint::ImhNone);

        horizontalLayout_3->addWidget(lineEdit_discountAmount);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #D2B48C;  /* Light brown (tan) */\n"
"    color: black;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}"));

        horizontalLayout_2->addWidget(label_7);

        lineEdit_final_total = new QLineEdit(layoutWidget);
        lineEdit_final_total->setObjectName("lineEdit_final_total");
        lineEdit_final_total->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_final_total);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_5->addWidget(label_9);

        comboBox_method = new QComboBox(layoutWidget);
        comboBox_method->setObjectName("comboBox_method");
        comboBox_method->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_5->addWidget(comboBox_method);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
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

        horizontalLayout_7->addWidget(label);

        lineEdit_cardnumber = new QLineEdit(layoutWidget);
        lineEdit_cardnumber->setObjectName("lineEdit_cardnumber");
        lineEdit_cardnumber->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_7->addWidget(lineEdit_cardnumber);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_9->addWidget(label_3);

        lineEdit_cashgiven = new QLineEdit(layoutWidget);
        lineEdit_cashgiven->setObjectName("lineEdit_cashgiven");
        lineEdit_cashgiven->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_9->addWidget(lineEdit_cashgiven);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_10->addWidget(label_4);

        lineEdit_returnAmount = new QLineEdit(layoutWidget);
        lineEdit_returnAmount->setObjectName("lineEdit_returnAmount");
        lineEdit_returnAmount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_10->addWidget(lineEdit_returnAmount);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_paymeny = new QPushButton(layoutWidget);
        pushButton_paymeny->setObjectName("pushButton_paymeny");
        pushButton_paymeny->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_paymeny->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_paymeny);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_11->addLayout(verticalLayout);

        textEdit_receipt = new QTextEdit(layoutWidget);
        textEdit_receipt->setObjectName("textEdit_receipt");

        horizontalLayout_11->addWidget(textEdit_receipt);


        retranslateUi(payment);

        QMetaObject::connectSlotsByName(payment);
    } // setupUi

    void retranslateUi(QWidget *payment)
    {
        payment->setWindowTitle(QCoreApplication::translate("payment", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("payment", "Actual Total:", nullptr));
        label_6->setText(QCoreApplication::translate("payment", "Discount:", nullptr));
        label_8->setText(QCoreApplication::translate("payment", "Discount Amount:", nullptr));
        label_7->setText(QCoreApplication::translate("payment", "Final Total:", nullptr));
        label_9->setText(QCoreApplication::translate("payment", "Payment Method:", nullptr));
        label->setText(QCoreApplication::translate("payment", "Card No:", nullptr));
        label_3->setText(QCoreApplication::translate("payment", "Cash Given:", nullptr));
        label_4->setText(QCoreApplication::translate("payment", "Cash Return:", nullptr));
        pushButton_paymeny->setText(QCoreApplication::translate("payment", "Pay ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class payment: public Ui_payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
