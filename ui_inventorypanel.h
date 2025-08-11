/********************************************************************************
** Form generated from reading UI file 'inventorypanel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVENTORYPANEL_H
#define UI_INVENTORYPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_inventorypanel
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *showstock;
    QPushButton *pushButton_4_salesreport;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_inventoryback;
    QPushButton *pushButton_2;

    void setupUi(QWidget *inventorypanel)
    {
        if (inventorypanel->objectName().isEmpty())
            inventorypanel->setObjectName("inventorypanel");
        inventorypanel->resize(631, 244);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inventorypanel->sizePolicy().hasHeightForWidth());
        inventorypanel->setSizePolicy(sizePolicy);
        inventorypanel->setMaximumSize(QSize(1920, 1080));
        inventorypanel->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(inventorypanel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 30, 291, 141));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
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

        horizontalLayout_2->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_2);

        showstock = new QPushButton(layoutWidget);
        showstock->setObjectName("showstock");
        showstock->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"font-size: 10px;\n"
"font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
""));

        verticalLayout->addWidget(showstock);

        pushButton_4_salesreport = new QPushButton(layoutWidget);
        pushButton_4_salesreport->setObjectName("pushButton_4_salesreport");
        pushButton_4_salesreport->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"font-size: 10px;\n"
"font-weight: bold;\n"
"    border-radius: 5px;\n"
"    padding: 5px 10px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"}\n"
""));

        verticalLayout->addWidget(pushButton_4_salesreport);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton_inventoryback = new QPushButton(layoutWidget);
        pushButton_inventoryback->setObjectName("pushButton_inventoryback");
        pushButton_inventoryback->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        pushButton_inventoryback->setIcon(icon);
        pushButton_inventoryback->setIconSize(QSize(15, 14));

        horizontalLayout_3->addWidget(pushButton_inventoryback);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::SystemLogOut));
        pushButton_2->setIcon(icon1);
        pushButton_2->setIconSize(QSize(14, 14));

        horizontalLayout_3->addWidget(pushButton_2);


        horizontalLayout->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(inventorypanel);

        QMetaObject::connectSlotsByName(inventorypanel);
    } // setupUi

    void retranslateUi(QWidget *inventorypanel)
    {
        inventorypanel->setWindowTitle(QCoreApplication::translate("inventorypanel", "Form", nullptr));
        label->setText(QCoreApplication::translate("inventorypanel", "          Inventory Record", nullptr));
        showstock->setText(QCoreApplication::translate("inventorypanel", "Stock Availibility", nullptr));
        pushButton_4_salesreport->setText(QCoreApplication::translate("inventorypanel", "Sales Report", nullptr));
        pushButton_inventoryback->setText(QCoreApplication::translate("inventorypanel", "Back", nullptr));
        pushButton_2->setText(QCoreApplication::translate("inventorypanel", "Log Out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class inventorypanel: public Ui_inventorypanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVENTORYPANEL_H
