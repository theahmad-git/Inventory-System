/********************************************************************************
** Form generated from reading UI file 'userchoice.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCHOICE_H
#define UI_USERCHOICE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userchoice
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidgetchoice;
    QStackedWidget *stackedWidget_form;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QDialog *userchoice)
    {
        if (userchoice->objectName().isEmpty())
            userchoice->setObjectName("userchoice");
        userchoice->resize(1920, 1080);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(userchoice->sizePolicy().hasHeightForWidth());
        userchoice->setSizePolicy(sizePolicy);
        userchoice->setMinimumSize(QSize(300, 300));
        userchoice->setMaximumSize(QSize(1920, 1080));
        userchoice->setStyleSheet(QString::fromUtf8("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1,\n"
"                            stop:0 #e3f2fd, stop:1 #bbdefb);\n"
""));
        layoutWidget = new QWidget(userchoice);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(0, 0, 1871, 981));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        treeWidgetchoice = new QTreeWidget(layoutWidget);
        treeWidgetchoice->setObjectName("treeWidgetchoice");
        treeWidgetchoice->setMinimumSize(QSize(300, 300));
        treeWidgetchoice->setMaximumSize(QSize(200, 980));

        horizontalLayout_2->addWidget(treeWidgetchoice);

        stackedWidget_form = new QStackedWidget(layoutWidget);
        stackedWidget_form->setObjectName("stackedWidget_form");
        stackedWidget_form->setMinimumSize(QSize(300, 300));
        stackedWidget_form->setMaximumSize(QSize(1700, 980));
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget_form->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget_form->addWidget(page_2);

        horizontalLayout_2->addWidget(stackedWidget_form);


        retranslateUi(userchoice);

        QMetaObject::connectSlotsByName(userchoice);
    } // setupUi

    void retranslateUi(QDialog *userchoice)
    {
        userchoice->setWindowTitle(QCoreApplication::translate("userchoice", "Dialog", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidgetchoice->headerItem();
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("userchoice", "User Choice", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userchoice: public Ui_userchoice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCHOICE_H
