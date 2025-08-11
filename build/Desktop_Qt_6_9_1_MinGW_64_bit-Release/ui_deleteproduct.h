/********************************************************************************
** Form generated from reading UI file 'deleteproduct.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEPRODUCT_H
#define UI_DELETEPRODUCT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_deleteproduct
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2_deletename;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_deleteproductback;
    QPushButton *pushButton;

    void setupUi(QDialog *deleteproduct)
    {
        if (deleteproduct->objectName().isEmpty())
            deleteproduct->setObjectName("deleteproduct");
        deleteproduct->resize(382, 244);
        deleteproduct->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(deleteproduct);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(60, 40, 251, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2C3E50; /* dark blue-gray text */\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2_deletename = new QLabel(layoutWidget);
        label_2_deletename->setObjectName("label_2_deletename");
        label_2_deletename->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color: #2C3E50; /* dark blue-gray text */\n"
"    font-size: 10px;\n"
"    font-weight: bold;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label_2_deletename);

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

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_deleteproductback = new QPushButton(layoutWidget);
        pushButton_deleteproductback->setObjectName("pushButton_deleteproductback");
        pushButton_deleteproductback->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_deleteproductback->setIcon(icon);
        pushButton_deleteproductback->setIconSize(QSize(14, 14));
        pushButton_deleteproductback->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_deleteproductback);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::EditDelete));
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(14, 14));
        pushButton->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(deleteproduct);

        QMetaObject::connectSlotsByName(deleteproduct);
    } // setupUi

    void retranslateUi(QDialog *deleteproduct)
    {
        deleteproduct->setWindowTitle(QCoreApplication::translate("deleteproduct", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("deleteproduct", "Delete Product By Name:", nullptr));
        label_2_deletename->setText(QCoreApplication::translate("deleteproduct", "Name", nullptr));
        pushButton_deleteproductback->setText(QCoreApplication::translate("deleteproduct", "Back", nullptr));
        pushButton->setText(QCoreApplication::translate("deleteproduct", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteproduct: public Ui_deleteproduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEPRODUCT_H
