/********************************************************************************
** Form generated from reading UI file 'grpMSICheck.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPMSICHECK_H
#define UI_GRPMSICHECK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpMSICheck
{
public:
    QVBoxLayout *vLayoutMSI;
    QHBoxLayout *hLayoutMSI;
    QLabel *lblMSICheck;
    QComboBox *cmbMSICheck;
    QCheckBox *chkMSICheckText;

    void setupUi(QWidget *grpMSICheck)
    {
        if (grpMSICheck->objectName().isEmpty())
            grpMSICheck->setObjectName("grpMSICheck");
        grpMSICheck->resize(295, 79);
        grpMSICheck->setMaximumSize(QSize(600, 16777215));
        vLayoutMSI = new QVBoxLayout(grpMSICheck);
        vLayoutMSI->setObjectName("vLayoutMSI");
        vLayoutMSI->setContentMargins(0);
        vLayoutMSI->setContentsMargins(0, 0, 0, 0);
        hLayoutMSI = new QHBoxLayout();
        hLayoutMSI->setObjectName("hLayoutMSI");
        lblMSICheck = new QLabel(grpMSICheck);
        lblMSICheck->setObjectName("lblMSICheck");
        lblMSICheck->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hLayoutMSI->addWidget(lblMSICheck);

        cmbMSICheck = new QComboBox(grpMSICheck);
        cmbMSICheck->addItem(QString());
        cmbMSICheck->addItem(QString());
        cmbMSICheck->addItem(QString());
        cmbMSICheck->addItem(QString());
        cmbMSICheck->addItem(QString());
        cmbMSICheck->addItem(QString());
        cmbMSICheck->addItem(QString());
        cmbMSICheck->setObjectName("cmbMSICheck");

        hLayoutMSI->addWidget(cmbMSICheck);


        vLayoutMSI->addLayout(hLayoutMSI);

        chkMSICheckText = new QCheckBox(grpMSICheck);
        chkMSICheckText->setObjectName("chkMSICheckText");
        chkMSICheckText->setChecked(false);

        vLayoutMSI->addWidget(chkMSICheckText);

#if QT_CONFIG(shortcut)
        lblMSICheck->setBuddy(cmbMSICheck);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpMSICheck);

        QMetaObject::connectSlotsByName(grpMSICheck);
    } // setupUi

    void retranslateUi(QWidget *grpMSICheck)
    {
        grpMSICheck->setWindowTitle(QCoreApplication::translate("grpMSICheck", "Form", nullptr));
        lblMSICheck->setText(QCoreApplication::translate("grpMSICheck", "Chec&k Digit:", nullptr));
#if QT_CONFIG(tooltip)
        lblMSICheck->setToolTip(QCoreApplication::translate("grpMSICheck", "Mod-10 uses Luhn algorithm\n"
"Mod-11 (IBM) uses IBM weightings\n"
"Mod-11 (NCR) uses NCR weightings", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMSICheck->setItemText(0, QCoreApplication::translate("grpMSICheck", "None", nullptr));
        cmbMSICheck->setItemText(1, QCoreApplication::translate("grpMSICheck", "Mod-10", nullptr));
        cmbMSICheck->setItemText(2, QCoreApplication::translate("grpMSICheck", "Mod-10 & Mod-10", nullptr));
        cmbMSICheck->setItemText(3, QCoreApplication::translate("grpMSICheck", "Mod-11 (IBM)", nullptr));
        cmbMSICheck->setItemText(4, QCoreApplication::translate("grpMSICheck", "Mod-11 (IBM) & Mod-10", nullptr));
        cmbMSICheck->setItemText(5, QCoreApplication::translate("grpMSICheck", "Mod-11 (NCR)", nullptr));
        cmbMSICheck->setItemText(6, QCoreApplication::translate("grpMSICheck", "Mod-11 (NCR) & Mod-10", nullptr));

#if QT_CONFIG(tooltip)
        cmbMSICheck->setToolTip(QCoreApplication::translate("grpMSICheck", "Mod-10 uses Luhn algorithm\n"
"Mod-11 (IBM) uses IBM weightings\n"
"Mod-11 (NCR) uses NCR weightings", nullptr));
#endif // QT_CONFIG(tooltip)
        chkMSICheckText->setText(QCoreApplication::translate("grpMSICheck", "Do not show check digit(s) in &Text", nullptr));
#if QT_CONFIG(tooltip)
        chkMSICheckText->setToolTip(QCoreApplication::translate("grpMSICheck", "Add check digit(s) but do not display\n"
"in Human Readable Text", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpMSICheck: public Ui_grpMSICheck {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPMSICHECK_H
