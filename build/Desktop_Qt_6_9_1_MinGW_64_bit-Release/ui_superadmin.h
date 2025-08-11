/********************************************************************************
** Form generated from reading UI file 'superadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERADMIN_H
#define UI_SUPERADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_superadmin
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_backfromsuperadmin;
    QPushButton *pushButton_logout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_forgetpassword;
    QPushButton *pushButton_changepassword;
    QPushButton *pushButton_login;

    void setupUi(QDialog *superadmin)
    {
        if (superadmin->objectName().isEmpty())
            superadmin->setObjectName("superadmin");
        superadmin->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(superadmin->sizePolicy().hasHeightForWidth());
        superadmin->setSizePolicy(sizePolicy);
        superadmin->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
"\n"
""));
        layoutWidget = new QWidget(superadmin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 200, 421, 231));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
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

        horizontalLayout_3->addWidget(label_3);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setMouseTracking(true);
        lineEdit_password->setTabletTracking(false);
        lineEdit_password->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        lineEdit_password->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_password->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(lineEdit_password);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
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

        horizontalLayout_4->addWidget(label_2);

        lineEdit_username = new QLineEdit(layoutWidget);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setMouseTracking(true);
        lineEdit_username->setTabletTracking(false);
        lineEdit_username->setFocusPolicy(Qt::FocusPolicy::ClickFocus);
        lineEdit_username->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_4->addWidget(lineEdit_username);


        gridLayout->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_backfromsuperadmin = new QPushButton(layoutWidget);
        pushButton_backfromsuperadmin->setObjectName("pushButton_backfromsuperadmin");
        pushButton_backfromsuperadmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #7F8C8D;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background-color: #626567;  /* Darker gray */\n"
"\n"
"}\n"
""));
        pushButton_backfromsuperadmin->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_backfromsuperadmin);

        pushButton_logout = new QPushButton(layoutWidget);
        pushButton_logout->setObjectName("pushButton_logout");
        pushButton_logout->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_logout->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_logout);


        gridLayout->addLayout(horizontalLayout_2, 5, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_5->addWidget(label);


        gridLayout->addLayout(horizontalLayout_5, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_forgetpassword = new QPushButton(layoutWidget);
        pushButton_forgetpassword->setObjectName("pushButton_forgetpassword");
        pushButton_forgetpassword->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));
        pushButton_forgetpassword->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_forgetpassword);

        pushButton_changepassword = new QPushButton(layoutWidget);
        pushButton_changepassword->setObjectName("pushButton_changepassword");
        pushButton_changepassword->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: #E67E22;  /* Medium gray */\n"
"color: white;\n"
" font-weight: bold;\n"
"font-size: 10px;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
""));
        pushButton_changepassword->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_changepassword);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        pushButton_login = new QPushButton(layoutWidget);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton_login, 3, 0, 1, 1);


        retranslateUi(superadmin);

        QMetaObject::connectSlotsByName(superadmin);
    } // setupUi

    void retranslateUi(QDialog *superadmin)
    {
        superadmin->setWindowTitle(QCoreApplication::translate("superadmin", "Dialog", nullptr));
        label_3->setText(QCoreApplication::translate("superadmin", "Password:", nullptr));
        label_2->setText(QCoreApplication::translate("superadmin", "Username:", nullptr));
        pushButton_backfromsuperadmin->setText(QCoreApplication::translate("superadmin", "Back", nullptr));
        pushButton_logout->setText(QCoreApplication::translate("superadmin", "Log Out", nullptr));
        label->setText(QCoreApplication::translate("superadmin", "Login Super Admin", nullptr));
        pushButton_forgetpassword->setText(QCoreApplication::translate("superadmin", "Forget Password", nullptr));
        pushButton_changepassword->setText(QCoreApplication::translate("superadmin", "Change Password", nullptr));
        pushButton_login->setText(QCoreApplication::translate("superadmin", "Log In", nullptr));
    } // retranslateUi

};

namespace Ui {
    class superadmin: public Ui_superadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERADMIN_H
