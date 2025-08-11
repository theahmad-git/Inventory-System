/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3_logi_user;
    QLabel *label_signIn_signUp;
    QPushButton *pushButton_loginAdmin;
    QPushButton *pushButton_superadmin;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(300, 300));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMaximumSize(QSize(769, 786));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(410, 310, 351, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3_logi_user = new QPushButton(layoutWidget);
        pushButton_3_logi_user->setObjectName("pushButton_3_logi_user");
        pushButton_3_logi_user->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"font-size: 10px;\n"
"font-weight:bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_3_logi_user, 3, 0, 1, 1);

        label_signIn_signUp = new QLabel(layoutWidget);
        label_signIn_signUp->setObjectName("label_signIn_signUp");
        label_signIn_signUp->setStyleSheet(QString::fromUtf8("\n"
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
        label_signIn_signUp->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(label_signIn_signUp, 0, 0, 1, 1);

        pushButton_loginAdmin = new QPushButton(layoutWidget);
        pushButton_loginAdmin->setObjectName("pushButton_loginAdmin");
        pushButton_loginAdmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"font-size: 10px;\n"
"font-weight:bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_loginAdmin, 2, 0, 1, 1);

        pushButton_superadmin = new QPushButton(layoutWidget);
        pushButton_superadmin->setObjectName("pushButton_superadmin");
        pushButton_superadmin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"font-size: 10px;\n"
"font-weight:bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
""));

        gridLayout->addWidget(pushButton_superadmin, 1, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1920, 18));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3_logi_user->setText(QCoreApplication::translate("MainWindow", "Log In as User", nullptr));
        label_signIn_signUp->setText(QCoreApplication::translate("MainWindow", "Sign In/Sign Up", nullptr));
        pushButton_loginAdmin->setText(QCoreApplication::translate("MainWindow", "Log In as Admin", nullptr));
        pushButton_superadmin->setText(QCoreApplication::translate("MainWindow", "Log In as super Admin", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
