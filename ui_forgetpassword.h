/********************************************************************************
** Form generated from reading UI file 'forgetpassword.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORGETPASSWORD_H
#define UI_FORGETPASSWORD_H

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

class Ui_forgetpassword
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Qno1;
    QLineEdit *lineEdit_ansno1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_Qno2;
    QLineEdit *lineEdit_ansno2;
    QVBoxLayout *verticalLayout;
    QLabel *label_Qno3;
    QLineEdit *lineEdit_ansno3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_backtoadminlogin;
    QPushButton *pushButton_submittocheck;

    void setupUi(QDialog *forgetpassword)
    {
        if (forgetpassword->objectName().isEmpty())
            forgetpassword->setObjectName("forgetpassword");
        forgetpassword->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(forgetpassword->sizePolicy().hasHeightForWidth());
        forgetpassword->setSizePolicy(sizePolicy);
        forgetpassword->setMaximumSize(QSize(1920, 1080));
        forgetpassword->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(forgetpassword);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(430, 180, 451, 271));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
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

        verticalLayout_4->addWidget(label);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_Qno1 = new QLabel(layoutWidget);
        label_Qno1->setObjectName("label_Qno1");

        verticalLayout_3->addWidget(label_Qno1);

        lineEdit_ansno1 = new QLineEdit(layoutWidget);
        lineEdit_ansno1->setObjectName("lineEdit_ansno1");
        lineEdit_ansno1->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout_3->addWidget(lineEdit_ansno1);


        verticalLayout_4->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_Qno2 = new QLabel(layoutWidget);
        label_Qno2->setObjectName("label_Qno2");

        verticalLayout_2->addWidget(label_Qno2);

        lineEdit_ansno2 = new QLineEdit(layoutWidget);
        lineEdit_ansno2->setObjectName("lineEdit_ansno2");
        lineEdit_ansno2->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout_2->addWidget(lineEdit_ansno2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Qno3 = new QLabel(layoutWidget);
        label_Qno3->setObjectName("label_Qno3");

        verticalLayout->addWidget(label_Qno3);

        lineEdit_ansno3 = new QLineEdit(layoutWidget);
        lineEdit_ansno3->setObjectName("lineEdit_ansno3");
        lineEdit_ansno3->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
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

        verticalLayout->addWidget(lineEdit_ansno3);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        pushButton_backtoadminlogin = new QPushButton(layoutWidget);
        pushButton_backtoadminlogin->setObjectName("pushButton_backtoadminlogin");
        pushButton_backtoadminlogin->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_backtoadminlogin);

        pushButton_submittocheck = new QPushButton(layoutWidget);
        pushButton_submittocheck->setObjectName("pushButton_submittocheck");
        pushButton_submittocheck->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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

        horizontalLayout->addWidget(pushButton_submittocheck);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(forgetpassword);

        QMetaObject::connectSlotsByName(forgetpassword);
    } // setupUi

    void retranslateUi(QDialog *forgetpassword)
    {
        forgetpassword->setWindowTitle(QCoreApplication::translate("forgetpassword", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("forgetpassword", "Answer the following questions & get your password:", nullptr));
        label_Qno1->setText(QString());
        label_Qno2->setText(QString());
        label_Qno3->setText(QString());
        pushButton_backtoadminlogin->setText(QCoreApplication::translate("forgetpassword", "Back", nullptr));
        pushButton_submittocheck->setText(QCoreApplication::translate("forgetpassword", "Submit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class forgetpassword: public Ui_forgetpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORGETPASSWORD_H
