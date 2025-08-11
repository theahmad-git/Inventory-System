/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminlogin
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_adminverificationback;
    QPushButton *pushButton_admin_ui_login;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2_admin_password;
    QLineEdit *lineEdit_2_adminpassword;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_admin_name;
    QLineEdit *lineEdit_adminname;
    QLabel *label_3;
    QDateTimeEdit *dateTimeEdit;

    void setupUi(QWidget *adminlogin)
    {
        if (adminlogin->objectName().isEmpty())
            adminlogin->setObjectName("adminlogin");
        adminlogin->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminlogin->sizePolicy().hasHeightForWidth());
        adminlogin->setSizePolicy(sizePolicy);
        adminlogin->setMinimumSize(QSize(300, 300));
        adminlogin->setMaximumSize(QSize(1920, 1080));
        adminlogin->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(adminlogin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(390, 250, 501, 191));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_adminverificationback = new QPushButton(layoutWidget);
        pushButton_adminverificationback->setObjectName("pushButton_adminverificationback");
        pushButton_adminverificationback->setEnabled(true);
        pushButton_adminverificationback->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: #7F8C8D;  /* Medium gray */\n"
"color: white;\n"
"\n"
"font-weight: bold;\n"
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
        pushButton_adminverificationback->setIcon(icon);
        pushButton_adminverificationback->setIconSize(QSize(13, 12));
        pushButton_adminverificationback->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushButton_adminverificationback);

        pushButton_admin_ui_login = new QPushButton(layoutWidget);
        pushButton_admin_ui_login->setObjectName("pushButton_admin_ui_login");
        pushButton_admin_ui_login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_admin_ui_login->setAutoDefault(false);

        horizontalLayout_3->addWidget(pushButton_admin_ui_login);


        gridLayout->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2_admin_password = new QLabel(layoutWidget);
        label_2_admin_password->setObjectName("label_2_admin_password");
        label_2_admin_password->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(label_2_admin_password);

        lineEdit_2_adminpassword = new QLineEdit(layoutWidget);
        lineEdit_2_adminpassword->setObjectName("lineEdit_2_adminpassword");
        lineEdit_2_adminpassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_2_adminpassword->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout->addWidget(lineEdit_2_adminpassword);


        gridLayout->addLayout(horizontalLayout, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_admin_name = new QLabel(layoutWidget);
        label_admin_name->setObjectName("label_admin_name");
        label_admin_name->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(label_admin_name);

        lineEdit_adminname = new QLineEdit(layoutWidget);
        lineEdit_adminname->setObjectName("lineEdit_adminname");
        lineEdit_adminname->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        horizontalLayout_2->addWidget(lineEdit_adminname);


        gridLayout->addLayout(horizontalLayout_2, 2, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("\n"
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

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setEnabled(false);

        gridLayout->addWidget(dateTimeEdit, 1, 0, 1, 1);


        retranslateUi(adminlogin);
        QObject::connect(label_admin_name, &QLabel::linkHovered, lineEdit_adminname, qOverload<>(&QLineEdit::setFocus));
        QObject::connect(label_2_admin_password, &QLabel::linkHovered, lineEdit_2_adminpassword, qOverload<>(&QLineEdit::setFocus));

        QMetaObject::connectSlotsByName(adminlogin);
    } // setupUi

    void retranslateUi(QWidget *adminlogin)
    {
        adminlogin->setWindowTitle(QCoreApplication::translate("adminlogin", "Dialog", nullptr));
        pushButton_adminverificationback->setText(QCoreApplication::translate("adminlogin", "Back", nullptr));
        pushButton_admin_ui_login->setText(QCoreApplication::translate("adminlogin", "Login", nullptr));
        label_2_admin_password->setText(QCoreApplication::translate("adminlogin", "Passwrord:", nullptr));
        label_admin_name->setText(QCoreApplication::translate("adminlogin", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("adminlogin", "Admin Verification:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminlogin: public Ui_adminlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
