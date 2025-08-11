/********************************************************************************
** Form generated from reading UI file 'grpPZN.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPPZN_H
#define UI_GRPPZN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpPZN
{
public:
    QVBoxLayout *vLayoutPZN;
    QCheckBox *chkPZN7;

    void setupUi(QWidget *grpPZN)
    {
        if (grpPZN->objectName().isEmpty())
            grpPZN->setObjectName("grpPZN");
        grpPZN->resize(186, 123);
        grpPZN->setMaximumSize(QSize(600, 16777215));
        vLayoutPZN = new QVBoxLayout(grpPZN);
        vLayoutPZN->setObjectName("vLayoutPZN");
        vLayoutPZN->setContentMargins(0);
        vLayoutPZN->setContentsMargins(0, 0, 0, 0);
        chkPZN7 = new QCheckBox(grpPZN);
        chkPZN7->setObjectName("chkPZN7");
        chkPZN7->setChecked(false);

        vLayoutPZN->addWidget(chkPZN7);


        retranslateUi(grpPZN);

        QMetaObject::connectSlotsByName(grpPZN);
    } // setupUi

    void retranslateUi(QWidget *grpPZN)
    {
        grpPZN->setWindowTitle(QCoreApplication::translate("grpPZN", "Form", nullptr));
        chkPZN7->setText(QCoreApplication::translate("grpPZN", "P&ZN7", nullptr));
#if QT_CONFIG(tooltip)
        chkPZN7->setToolTip(QCoreApplication::translate("grpPZN", "Encode 6-digit PZN7 instead of default 7-digit PZN8", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpPZN: public Ui_grpPZN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPPZN_H
