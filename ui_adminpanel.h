/********************************************************************************
** Form generated from reading UI file 'adminpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINPANEL_H
#define UI_ADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adminpanel
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidgetItem;
    QStackedWidget *stackedWidget_pages;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *adminpanel)
    {
        if (adminpanel->objectName().isEmpty())
            adminpanel->setObjectName("adminpanel");
        adminpanel->resize(1920, 1023);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(adminpanel->sizePolicy().hasHeightForWidth());
        adminpanel->setSizePolicy(sizePolicy);
        adminpanel->setMinimumSize(QSize(300, 300));
        adminpanel->setMaximumSize(QSize(1920, 1080));
        adminpanel->setBaseSize(QSize(1920, 1080));
        adminpanel->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(adminpanel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, -40, 1871, 1061));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidgetItem = new QTreeWidget(layoutWidget);
        treeWidgetItem->setObjectName("treeWidgetItem");
        treeWidgetItem->setMinimumSize(QSize(300, 300));
        treeWidgetItem->setMaximumSize(QSize(200, 980));

        horizontalLayout->addWidget(treeWidgetItem);

        stackedWidget_pages = new QStackedWidget(layoutWidget);
        stackedWidget_pages->setObjectName("stackedWidget_pages");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(stackedWidget_pages->sizePolicy().hasHeightForWidth());
        stackedWidget_pages->setSizePolicy(sizePolicy1);
        stackedWidget_pages->setMinimumSize(QSize(300, 300));
        stackedWidget_pages->setMaximumSize(QSize(1700, 980));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget_pages->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget_pages->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget_pages);


        retranslateUi(adminpanel);

        QMetaObject::connectSlotsByName(adminpanel);
    } // setupUi

    void retranslateUi(QWidget *adminpanel)
    {
        adminpanel->setWindowTitle(QCoreApplication::translate("adminpanel", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetItem->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("adminpanel", "Admin Panel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adminpanel: public Ui_adminpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINPANEL_H
