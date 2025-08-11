/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

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

class Ui_signup
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget_usercheck;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_searchuser;
    QPushButton *pushButton_deleteuser;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2_signupuseremail;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3_signuppassword;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_adduser;

    void setupUi(QWidget *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(signup->sizePolicy().hasHeightForWidth());
        signup->setSizePolicy(sizePolicy);
        signup->setMinimumSize(QSize(300, 300));
        signup->setMaximumSize(QSize(1920, 1080));
        signup->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        widget = new QWidget(signup);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(2, 0, 301, 631));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableWidget_usercheck = new QTableWidget(widget);
        tableWidget_usercheck->setObjectName("tableWidget_usercheck");
        tableWidget_usercheck->setStyleSheet(QString::fromUtf8("\n"
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

        verticalLayout->addWidget(tableWidget_usercheck);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(widget);
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

        horizontalLayout_4->addWidget(label_2);

        lineEdit_3 = new QLineEdit(widget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_4->addWidget(lineEdit_3);

        pushButton_searchuser = new QPushButton(widget);
        pushButton_searchuser->setObjectName("pushButton_searchuser");
        pushButton_searchuser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(pushButton_searchuser);


        verticalLayout->addLayout(horizontalLayout_4);

        pushButton_deleteuser = new QPushButton(widget);
        pushButton_deleteuser->setObjectName("pushButton_deleteuser");
        pushButton_deleteuser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        verticalLayout->addWidget(pushButton_deleteuser);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"background-color:#5D6D7E;  /* Medium gray */\n"
"color: white;\n"
"\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"font-size: 12px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2_signupuseremail = new QLabel(widget);
        label_2_signupuseremail->setObjectName("label_2_signupuseremail");
        label_2_signupuseremail->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_3->addWidget(label_2_signupuseremail);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3_signuppassword = new QLabel(widget);
        label_3_signuppassword->setObjectName("label_3_signuppassword");
        label_3_signuppassword->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(label_3_signuppassword);

        lineEdit_2 = new QLineEdit(widget);
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
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_adduser = new QPushButton(widget);
        pushButton_adduser->setObjectName("pushButton_adduser");
        pushButton_adduser->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_adduser->setIconSize(QSize(14, 14));
        pushButton_adduser->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_adduser);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QWidget *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Search Username", nullptr));
        pushButton_searchuser->setText(QCoreApplication::translate("signup", "Search", nullptr));
        pushButton_deleteuser->setText(QCoreApplication::translate("signup", "Delete", nullptr));
        label->setText(QCoreApplication::translate("signup", "Add New User:", nullptr));
        label_2_signupuseremail->setText(QCoreApplication::translate("signup", "UserEmail", nullptr));
        label_3_signuppassword->setText(QCoreApplication::translate("signup", "Password", nullptr));
        pushButton_adduser->setText(QCoreApplication::translate("signup", "Add", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
