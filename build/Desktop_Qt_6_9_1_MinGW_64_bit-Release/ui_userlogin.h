/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QDateTimeEdit *dateTimeEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2_loginuseremail;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3_loginuserpassword;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_signinback_2;
    QPushButton *pushButton;

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName("UserLogin");
        UserLogin->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(UserLogin->sizePolicy().hasHeightForWidth());
        UserLogin->setSizePolicy(sizePolicy);
        UserLogin->setMinimumSize(QSize(300, 300));
        UserLogin->setMaximumSize(QSize(1920, 1080));
        UserLogin->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(UserLogin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(480, 270, 331, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        verticalLayout->addWidget(label);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setEnabled(false);
        dateTimeEdit->setReadOnly(true);
        dateTimeEdit->setKeyboardTracking(true);

        verticalLayout->addWidget(dateTimeEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2_loginuseremail = new QLabel(layoutWidget);
        label_2_loginuseremail->setObjectName("label_2_loginuseremail");
        label_2_loginuseremail->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_3->addWidget(label_2_loginuseremail);

        lineEdit = new QLineEdit(layoutWidget);
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
        label_3_loginuserpassword = new QLabel(layoutWidget);
        label_3_loginuserpassword->setObjectName("label_3_loginuserpassword");
        label_3_loginuserpassword->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(label_3_loginuserpassword);

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
        lineEdit_2->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_signinback_2 = new QPushButton(layoutWidget);
        pushButton_signinback_2->setObjectName("pushButton_signinback_2");
        pushButton_signinback_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::GoPrevious));
        pushButton_signinback_2->setIcon(icon);
        pushButton_signinback_2->setIconSize(QSize(14, 14));
        pushButton_signinback_2->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_signinback_2);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditFind));
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(14, 14));
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QCoreApplication::translate("UserLogin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UserLogin", "User Login", nullptr));
        label_2_loginuseremail->setText(QCoreApplication::translate("UserLogin", "CashierEmail:", nullptr));
        label_3_loginuserpassword->setText(QCoreApplication::translate("UserLogin", "Password:", nullptr));
        pushButton_signinback_2->setText(QCoreApplication::translate("UserLogin", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("UserLogin", "Verify", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
