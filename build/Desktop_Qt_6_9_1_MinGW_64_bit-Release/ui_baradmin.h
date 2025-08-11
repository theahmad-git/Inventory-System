/********************************************************************************
** Form generated from reading UI file 'baradmin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BARADMIN_H
#define UI_BARADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_baradmin
{
public:
    QSplitter *splitter;
    QTreeWidget *treeWidget_sidebar;
    QStackedWidget *stackedWidget_pages;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *baradmin)
    {
        if (baradmin->objectName().isEmpty())
            baradmin->setObjectName("baradmin");
        baradmin->resize(627, 408);
        splitter = new QSplitter(baradmin);
        splitter->setObjectName("splitter");
        splitter->setGeometry(QRect(20, 41, 501, 331));
        splitter->setOrientation(Qt::Orientation::Horizontal);
        treeWidget_sidebar = new QTreeWidget(splitter);
        treeWidget_sidebar->setObjectName("treeWidget_sidebar");
        splitter->addWidget(treeWidget_sidebar);
        stackedWidget_pages = new QStackedWidget(splitter);
        stackedWidget_pages->setObjectName("stackedWidget_pages");
        page = new QWidget();
        page->setObjectName("page");
        stackedWidget_pages->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget_pages->addWidget(page_2);
        splitter->addWidget(stackedWidget_pages);

        retranslateUi(baradmin);

        stackedWidget_pages->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(baradmin);
    } // setupUi

    void retranslateUi(QWidget *baradmin)
    {
        baradmin->setWindowTitle(QCoreApplication::translate("baradmin", "Form", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget_sidebar->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("baradmin", "Sign Up new User", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("baradmin", "Edit", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("baradmin", "Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class baradmin: public Ui_baradmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BARADMIN_H
