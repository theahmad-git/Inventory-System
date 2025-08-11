/********************************************************************************
** Form generated from reading UI file 'grpC11.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC11_H
#define UI_GRPC11_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpC11
{
public:
    QVBoxLayout *vLayoutC11;
    QGroupBox *grpC11CheckDigits;
    QGridLayout *gridLayoutC11CheckDigits;
    QRadioButton *radC11TwoCheckDigits;
    QRadioButton *radC11OneCheckDigit;
    QRadioButton *radC11NoCheckDigits;

    void setupUi(QWidget *grpC11)
    {
        if (grpC11->objectName().isEmpty())
            grpC11->setObjectName("grpC11");
        grpC11->resize(400, 227);
        grpC11->setMaximumSize(QSize(600, 16777215));
        vLayoutC11 = new QVBoxLayout(grpC11);
        vLayoutC11->setObjectName("vLayoutC11");
        vLayoutC11->setContentMargins(0);
        vLayoutC11->setContentsMargins(0, 0, 0, 0);
        grpC11CheckDigits = new QGroupBox(grpC11);
        grpC11CheckDigits->setObjectName("grpC11CheckDigits");
        gridLayoutC11CheckDigits = new QGridLayout(grpC11CheckDigits);
        gridLayoutC11CheckDigits->setObjectName("gridLayoutC11CheckDigits");
        radC11TwoCheckDigits = new QRadioButton(grpC11CheckDigits);
        radC11TwoCheckDigits->setObjectName("radC11TwoCheckDigits");
        radC11TwoCheckDigits->setChecked(true);

        gridLayoutC11CheckDigits->addWidget(radC11TwoCheckDigits, 0, 0, 1, 1);

        radC11OneCheckDigit = new QRadioButton(grpC11CheckDigits);
        radC11OneCheckDigit->setObjectName("radC11OneCheckDigit");

        gridLayoutC11CheckDigits->addWidget(radC11OneCheckDigit, 0, 1, 1, 1);

        radC11NoCheckDigits = new QRadioButton(grpC11CheckDigits);
        radC11NoCheckDigits->setObjectName("radC11NoCheckDigits");

        gridLayoutC11CheckDigits->addWidget(radC11NoCheckDigits, 1, 0, 1, 1);


        vLayoutC11->addWidget(grpC11CheckDigits);


        retranslateUi(grpC11);

        QMetaObject::connectSlotsByName(grpC11);
    } // setupUi

    void retranslateUi(QWidget *grpC11)
    {
        grpC11->setWindowTitle(QCoreApplication::translate("grpC11", "Form", nullptr));
        grpC11CheckDigits->setTitle(QCoreApplication::translate("grpC11", "Check Digits", nullptr));
#if QT_CONFIG(tooltip)
        grpC11CheckDigits->setToolTip(QCoreApplication::translate("grpC11", "Check digits options", nullptr));
#endif // QT_CONFIG(tooltip)
        radC11TwoCheckDigits->setText(QCoreApplication::translate("grpC11", "&Two (Mod-11)", nullptr));
#if QT_CONFIG(tooltip)
        radC11TwoCheckDigits->setToolTip(QCoreApplication::translate("grpC11", "Add 2 mod-11 check digits", nullptr));
#endif // QT_CONFIG(tooltip)
        radC11OneCheckDigit->setText(QCoreApplication::translate("grpC11", "One (&Mod-11)", nullptr));
#if QT_CONFIG(tooltip)
        radC11OneCheckDigit->setToolTip(QCoreApplication::translate("grpC11", "Add 1 mod-11 check digit", nullptr));
#endif // QT_CONFIG(tooltip)
        radC11NoCheckDigits->setText(QCoreApplication::translate("grpC11", "No Ch&eck Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC11NoCheckDigits->setToolTip(QCoreApplication::translate("grpC11", "Do not add any check digits", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpC11: public Ui_grpC11 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC11_H
