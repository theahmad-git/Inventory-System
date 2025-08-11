/********************************************************************************
** Form generated from reading UI file 'grpEANAddOn.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPEANADDON_H
#define UI_GRPEANADDON_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpEANAddOn
{
public:
    QVBoxLayout *verticalLayoutEANAddOn;
    QCheckBox *chkEANAddOnNoQuietZones;
    QCheckBox *chkEANAddOnGuardWhitespace;

    void setupUi(QWidget *grpEANAddOn)
    {
        if (grpEANAddOn->objectName().isEmpty())
            grpEANAddOn->setObjectName("grpEANAddOn");
        grpEANAddOn->resize(310, 78);
        grpEANAddOn->setMaximumSize(QSize(600, 16777215));
        verticalLayoutEANAddOn = new QVBoxLayout(grpEANAddOn);
        verticalLayoutEANAddOn->setObjectName("verticalLayoutEANAddOn");
        verticalLayoutEANAddOn->setContentMargins(0);
        verticalLayoutEANAddOn->setContentsMargins(0, 0, 0, 0);
        chkEANAddOnNoQuietZones = new QCheckBox(grpEANAddOn);
        chkEANAddOnNoQuietZones->setObjectName("chkEANAddOnNoQuietZones");
        chkEANAddOnNoQuietZones->setChecked(false);

        verticalLayoutEANAddOn->addWidget(chkEANAddOnNoQuietZones);

        chkEANAddOnGuardWhitespace = new QCheckBox(grpEANAddOn);
        chkEANAddOnGuardWhitespace->setObjectName("chkEANAddOnGuardWhitespace");
        chkEANAddOnGuardWhitespace->setChecked(false);

        verticalLayoutEANAddOn->addWidget(chkEANAddOnGuardWhitespace);


        retranslateUi(grpEANAddOn);

        QMetaObject::connectSlotsByName(grpEANAddOn);
    } // setupUi

    void retranslateUi(QWidget *grpEANAddOn)
    {
        grpEANAddOn->setWindowTitle(QCoreApplication::translate("grpEANAddOn", "Form", nullptr));
        chkEANAddOnNoQuietZones->setText(QCoreApplication::translate("grpEANAddOn", "No Quiet &Zones", nullptr));
#if QT_CONFIG(tooltip)
        chkEANAddOnNoQuietZones->setToolTip(QCoreApplication::translate("grpEANAddOn", "Do not add quiet zones to whitespace", nullptr));
#endif // QT_CONFIG(tooltip)
        chkEANAddOnGuardWhitespace->setText(QCoreApplication::translate("grpEANAddOn", "Guard &Whitespace", nullptr));
#if QT_CONFIG(tooltip)
        chkEANAddOnGuardWhitespace->setToolTip(QCoreApplication::translate("grpEANAddOn", "Add quiet zone indicators (\"<\", \">\") to Human Readable Text (HRT)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpEANAddOn: public Ui_grpEANAddOn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPEANADDON_H
