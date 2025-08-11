/********************************************************************************
** Form generated from reading UI file 'superadminpanel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPERADMINPANEL_H
#define UI_SUPERADMINPANEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_superadminpanel
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QDialog *superadminpanel)
    {
        if (superadminpanel->objectName().isEmpty())
            superadminpanel->setObjectName("superadminpanel");
        superadminpanel->resize(1920, 1080);
        layoutWidget = new QWidget(superadminpanel);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 1521, 741));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        treeWidget = new QTreeWidget(layoutWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Super  Admin Panel:"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(300, 300));
        treeWidget->setMaximumSize(QSize(200, 980));

        horizontalLayout->addWidget(treeWidget);

        stackedWidget = new QStackedWidget(layoutWidget);
        stackedWidget->setObjectName("stackedWidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(stackedWidget->sizePolicy().hasHeightForWidth());
        stackedWidget->setSizePolicy(sizePolicy);
        stackedWidget->setMinimumSize(QSize(300, 300));
        stackedWidget->setMaximumSize(QSize(1700, 980));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(superadminpanel);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(superadminpanel);
    } // setupUi

    void retranslateUi(QDialog *superadminpanel)
    {
        superadminpanel->setWindowTitle(QCoreApplication::translate("superadminpanel", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class superadminpanel: public Ui_superadminpanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPERADMINPANEL_H
