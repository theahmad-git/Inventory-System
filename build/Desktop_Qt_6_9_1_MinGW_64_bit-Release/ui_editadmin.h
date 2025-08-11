/********************************************************************************
** Form generated from reading UI file 'editadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITADMIN_H
#define UI_EDITADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_editadmin
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QTableWidget *tableWidget_admincheck;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton_searchadmin;
    QPushButton *pushButton_deleteadmin;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_addadmin;

    void setupUi(QWidget *editadmin)
    {
        if (editadmin->objectName().isEmpty())
            editadmin->setObjectName("editadmin");
        editadmin->resize(1920, 1080);
        editadmin->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(editadmin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 291, 601));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        tableWidget_admincheck = new QTableWidget(layoutWidget);
        tableWidget_admincheck->setObjectName("tableWidget_admincheck");
        tableWidget_admincheck->setStyleSheet(QString::fromUtf8("\n"
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

        verticalLayout_2->addWidget(tableWidget_admincheck);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_3->addWidget(label);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_3->addWidget(lineEdit_4);

        pushButton_searchadmin = new QPushButton(layoutWidget);
        pushButton_searchadmin->setObjectName("pushButton_searchadmin");
        pushButton_searchadmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_3->addWidget(pushButton_searchadmin);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton_deleteadmin = new QPushButton(layoutWidget);
        pushButton_deleteadmin->setObjectName("pushButton_deleteadmin");
        pushButton_deleteadmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_deleteadmin);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:#5D6D7E;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 12px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
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

        horizontalLayout_2->addWidget(label_3);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
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

        horizontalLayout->addWidget(label_4);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        pushButton_addadmin = new QPushButton(layoutWidget);
        pushButton_addadmin->setObjectName("pushButton_addadmin");
        pushButton_addadmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_addadmin);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(editadmin);

        QMetaObject::connectSlotsByName(editadmin);
    } // setupUi

    void retranslateUi(QWidget *editadmin)
    {
        editadmin->setWindowTitle(QCoreApplication::translate("editadmin", "Form", nullptr));
        label->setText(QCoreApplication::translate("editadmin", "Search Username:", nullptr));
        pushButton_searchadmin->setText(QCoreApplication::translate("editadmin", "Search", nullptr));
        pushButton_deleteadmin->setText(QCoreApplication::translate("editadmin", "Delete", nullptr));
        label_2->setText(QCoreApplication::translate("editadmin", "Add New Admin:", nullptr));
        label_3->setText(QCoreApplication::translate("editadmin", "UserEmail:", nullptr));
        label_4->setText(QCoreApplication::translate("editadmin", "Password:", nullptr));
        pushButton_addadmin->setText(QCoreApplication::translate("editadmin", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editadmin: public Ui_editadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITADMIN_H
