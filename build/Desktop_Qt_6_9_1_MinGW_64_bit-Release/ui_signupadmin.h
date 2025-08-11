/********************************************************************************
** Form generated from reading UI file 'signupadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPADMIN_H
#define UI_SIGNUPADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_signupadmin
{
public:

    void setupUi(QDialog *signupadmin)
    {
        if (signupadmin->objectName().isEmpty())
            signupadmin->setObjectName("signupadmin");
        signupadmin->resize(400, 300);

        retranslateUi(signupadmin);

        QMetaObject::connectSlotsByName(signupadmin);
    } // setupUi

    void retranslateUi(QDialog *signupadmin)
    {
        signupadmin->setWindowTitle(QCoreApplication::translate("signupadmin", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signupadmin: public Ui_signupadmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPADMIN_H
