/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changepassword
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_oldpassword;
    QLineEdit *lineEdit_oldpassword;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_newpassword;
    QLineEdit *lineEdit_newpassword;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_confirmpassword;
    QLineEdit *lineEdit_confirmpassword;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_back;
    QPushButton *pushButton_savenewpassword;

    void setupUi(QDialog *changepassword)
    {
        if (changepassword->objectName().isEmpty())
            changepassword->setObjectName("changepassword");
        changepassword->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Ignored, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(changepassword->sizePolicy().hasHeightForWidth());
        changepassword->setSizePolicy(sizePolicy);
        changepassword->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(changepassword);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(480, 250, 341, 191));
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

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_oldpassword = new QLabel(layoutWidget);
        label_oldpassword->setObjectName("label_oldpassword");
        label_oldpassword->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout->addWidget(label_oldpassword);

        lineEdit_oldpassword = new QLineEdit(layoutWidget);
        lineEdit_oldpassword->setObjectName("lineEdit_oldpassword");
        lineEdit_oldpassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_oldpassword->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout->addWidget(lineEdit_oldpassword);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_newpassword = new QLabel(layoutWidget);
        label_newpassword->setObjectName("label_newpassword");
        label_newpassword->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_2->addWidget(label_newpassword);

        lineEdit_newpassword = new QLineEdit(layoutWidget);
        lineEdit_newpassword->setObjectName("lineEdit_newpassword");
        lineEdit_newpassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_newpassword->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_2->addWidget(lineEdit_newpassword);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_confirmpassword = new QLabel(layoutWidget);
        label_confirmpassword->setObjectName("label_confirmpassword");
        label_confirmpassword->setStyleSheet(QString::fromUtf8("\n"
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

        horizontalLayout_3->addWidget(label_confirmpassword);

        lineEdit_confirmpassword = new QLineEdit(layoutWidget);
        lineEdit_confirmpassword->setObjectName("lineEdit_confirmpassword");
        lineEdit_confirmpassword->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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
        lineEdit_confirmpassword->setEchoMode(QLineEdit::EchoMode::Password);

        horizontalLayout_3->addWidget(lineEdit_confirmpassword);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_back = new QPushButton(layoutWidget);
        pushButton_back->setObjectName("pushButton_back");
        pushButton_back->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(pushButton_back);

        pushButton_savenewpassword = new QPushButton(layoutWidget);
        pushButton_savenewpassword->setObjectName("pushButton_savenewpassword");
        pushButton_savenewpassword->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout_4->addWidget(pushButton_savenewpassword);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(changepassword);

        QMetaObject::connectSlotsByName(changepassword);
    } // setupUi

    void retranslateUi(QDialog *changepassword)
    {
        changepassword->setWindowTitle(QCoreApplication::translate("changepassword", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("changepassword", "Change Password:", nullptr));
        label_oldpassword->setText(QCoreApplication::translate("changepassword", "Old Password:", nullptr));
        label_newpassword->setText(QCoreApplication::translate("changepassword", "New Password:", nullptr));
        label_confirmpassword->setText(QCoreApplication::translate("changepassword", "Confirm Password:", nullptr));
        pushButton_back->setText(QCoreApplication::translate("changepassword", "Back", nullptr));
        pushButton_savenewpassword->setText(QCoreApplication::translate("changepassword", "Save Changes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class changepassword: public Ui_changepassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
