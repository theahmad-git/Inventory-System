/********************************************************************************
** Form generated from reading UI file 'checkoutform.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTFORM_H
#define UI_CHECKOUTFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Checkoutform
{
public:
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *lastScanLabel;
    QLabel *barcodeLineEdit;
    QTableWidget *tablewidgetproduct;
    QHBoxLayout *horizontalLayout_3;
    QSpinBox *quantitybox;
    QPushButton *pushButton_addtocart;
    QPushButton *pushButton_remove;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_2;
    QLineEdit *lineEdit_searchproduct;
    QTableWidget *tablewidgetcart;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *pushButton_clearform;
    QDateTimeEdit *dateTimeEdit;
    QTextEdit *textEdit_receipt;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_discount;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_totalafterdiscount;
    QLineEdit *lineEdit_totalafterdiscount;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_generatebill;
    QPushButton *pushButton_paynow;

    void setupUi(QWidget *Checkoutform)
    {
        if (Checkoutform->objectName().isEmpty())
            Checkoutform->setObjectName("Checkoutform");
        Checkoutform->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Checkoutform->sizePolicy().hasHeightForWidth());
        Checkoutform->setSizePolicy(sizePolicy);
        Checkoutform->setMinimumSize(QSize(300, 300));
        Checkoutform->setMaximumSize(QSize(1920, 1080));
        Checkoutform->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        splitter = new QSplitter(Checkoutform);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(0, 0, 941, 641));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName("layoutWidget");
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lastScanLabel = new QLabel(layoutWidget);
        lastScanLabel->setObjectName("lastScanLabel");

        verticalLayout->addWidget(lastScanLabel);

        barcodeLineEdit = new QLabel(layoutWidget);
        barcodeLineEdit->setObjectName("barcodeLineEdit");

        verticalLayout->addWidget(barcodeLineEdit);

        tablewidgetproduct = new QTableWidget(layoutWidget);
        tablewidgetproduct->setObjectName("tablewidgetproduct");
        tablewidgetproduct->setStyleSheet(QString::fromUtf8("\n"
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
        tablewidgetproduct->setInputMethodHints(Qt::InputMethodHint::ImhMultiLine);

        verticalLayout->addWidget(tablewidgetproduct);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        quantitybox = new QSpinBox(layoutWidget);
        quantitybox->setObjectName("quantitybox");
        quantitybox->setStyleSheet(QString::fromUtf8("QSpinBox {\n"
"    background-color: #ECF0F1;\n"
"    color: #2C3E50;\n"
"    border: 1px solid #BDC3C7;\n"
"    border-radius: 4px;\n"
"    padding: 2px 5px;\n"
"    font-size: 12px;\n"
"}\n"
"\n"
"QSpinBox:focus {\n"
"    border: 1px solid #3498DB;\n"
"    background-color: white;\n"
"}\n"
""));

        horizontalLayout_3->addWidget(quantitybox);

        pushButton_addtocart = new QPushButton(layoutWidget);
        pushButton_addtocart->setObjectName("pushButton_addtocart");
        pushButton_addtocart->setStyleSheet(QString::fromUtf8("QPushButton {\n"
" background-color: #27AE60;  /* Emerald green */\n"
"    background-color: #2ECC71;  /* Light green */\n"
"    color: white;\n"
"font-size: 10px;\n"
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
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::ListAdd));
        pushButton_addtocart->setIcon(icon);
        pushButton_addtocart->setIconSize(QSize(12, 12));

        horizontalLayout_3->addWidget(pushButton_addtocart);

        pushButton_remove = new QPushButton(layoutWidget);
        pushButton_remove->setObjectName("pushButton_remove");
        pushButton_remove->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #E74C3C;  /* Bright red */\n"
"    color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #C0392B;  /* Darker red on hover */\n"
"}\n"
""));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        pushButton_remove->setIcon(icon1);
        pushButton_remove->setIconSize(QSize(15, 15));

        horizontalLayout_3->addWidget(pushButton_remove);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
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

        horizontalLayout_11->addWidget(label_2);

        lineEdit_searchproduct = new QLineEdit(layoutWidget);
        lineEdit_searchproduct->setObjectName("lineEdit_searchproduct");
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
        lineEdit_searchproduct->setInputMethodHints(Qt::InputMethodHint::ImhMultiLine);

        horizontalLayout_11->addWidget(lineEdit_searchproduct);


        verticalLayout->addLayout(horizontalLayout_11);

        tablewidgetcart = new QTableWidget(layoutWidget);
        tablewidgetcart->setObjectName("tablewidgetcart");
        tablewidgetcart->setStyleSheet(QString::fromUtf8("\n"
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

        verticalLayout->addWidget(tablewidgetcart);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName("layoutWidget1");
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        pushButton_clearform = new QPushButton(layoutWidget1);
        pushButton_clearform->setObjectName("pushButton_clearform");
        pushButton_clearform->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_10->addWidget(pushButton_clearform);


        verticalLayout_2->addLayout(horizontalLayout_10);

        dateTimeEdit = new QDateTimeEdit(layoutWidget1);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setStyleSheet(QString::fromUtf8("QDateEdit, QTimeEdit {\n"
"    background-color: #ECF0F1;\n"
"    color: #2C3E50;\n"
"    border: 1px solid #BDC3C7;\n"
"    border-radius: 4px;\n"
"    padding: 3px 5px;\n"
"}\n"
"\n"
"QDateEdit:focus, QTimeEdit:focus {\n"
"    border: 1px solid #3498DB;\n"
"    background-color: white;\n"
"}\n"
""));

        verticalLayout_2->addWidget(dateTimeEdit);

        textEdit_receipt = new QTextEdit(layoutWidget1);
        textEdit_receipt->setObjectName("textEdit_receipt");
        textEdit_receipt->setStyleSheet(QString::fromUtf8("QTextEdit {\n"
"    background-color: #FDFEFE;\n"
"    color: #2C3E50;\n"
"    border: 1px solid #BDC3C7;\n"
"    border-radius: 5px;\n"
"    padding: 8px;\n"
"    font-family: Consolas, monospace;\n"
"    font-size: 13px;\n"
"}\n"
""));

        verticalLayout_2->addWidget(textEdit_receipt);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(layoutWidget1);
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

        horizontalLayout->addWidget(label);

        lineEdit_discount = new QLineEdit(layoutWidget1);
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

        horizontalLayout->addWidget(lineEdit_discount);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_totalafterdiscount = new QLabel(layoutWidget1);
        label_totalafterdiscount->setObjectName("label_totalafterdiscount");
        label_totalafterdiscount->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: #D2B48C;  /* Light brown (tan) */\n"
"    color: black;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}"));

        horizontalLayout_2->addWidget(label_totalafterdiscount);

        lineEdit_totalafterdiscount = new QLineEdit(layoutWidget1);
        lineEdit_totalafterdiscount->setObjectName("lineEdit_totalafterdiscount");
        lineEdit_totalafterdiscount->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_totalafterdiscount);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        pushButton_generatebill = new QPushButton(layoutWidget1);
        pushButton_generatebill->setObjectName("pushButton_generatebill");
        pushButton_generatebill->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #7F8C8D;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #626567;  /* Darker gray */\n"
"\n"
"}\n"
""));
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::Printer));
        pushButton_generatebill->setIcon(icon2);
        pushButton_generatebill->setIconSize(QSize(15, 15));

        horizontalLayout_7->addWidget(pushButton_generatebill);

        pushButton_paynow = new QPushButton(layoutWidget1);
        pushButton_paynow->setObjectName("pushButton_paynow");
        pushButton_paynow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_7->addWidget(pushButton_paynow);


        verticalLayout_2->addLayout(horizontalLayout_7);

        splitter->addWidget(layoutWidget1);

        retranslateUi(Checkoutform);

        QMetaObject::connectSlotsByName(Checkoutform);
    } // setupUi

    void retranslateUi(QWidget *Checkoutform)
    {
        Checkoutform->setWindowTitle(QCoreApplication::translate("Checkoutform", "Dialog", nullptr));
        lastScanLabel->setText(QString());
        barcodeLineEdit->setText(QString());
        pushButton_addtocart->setText(QCoreApplication::translate("Checkoutform", "Add", nullptr));
        pushButton_remove->setText(QCoreApplication::translate("Checkoutform", "Remove", nullptr));
        label_2->setText(QCoreApplication::translate("Checkoutform", "Search by ID", nullptr));
        pushButton_clearform->setText(QCoreApplication::translate("Checkoutform", "Clear Form", nullptr));
        label->setText(QCoreApplication::translate("Checkoutform", "Discount:", nullptr));
        label_totalafterdiscount->setText(QCoreApplication::translate("Checkoutform", "Total Amount:", nullptr));
        pushButton_generatebill->setText(QCoreApplication::translate("Checkoutform", "Generate Bill", nullptr));
        pushButton_paynow->setText(QCoreApplication::translate("Checkoutform", "Pay Now", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Checkoutform: public Ui_Checkoutform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTFORM_H
