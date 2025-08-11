/********************************************************************************
** Form generated from reading UI file 'grpITF14.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPITF14_H
#define UI_GRPITF14_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpITF14
{
public:
    QVBoxLayout *vLayoutITF14;
    QCheckBox *chkITF14NoQuietZones;

    void setupUi(QWidget *grpITF14)
    {
        if (grpITF14->objectName().isEmpty())
            grpITF14->setObjectName("grpITF14");
        grpITF14->resize(186, 123);
        grpITF14->setMaximumSize(QSize(600, 16777215));
        vLayoutITF14 = new QVBoxLayout(grpITF14);
        vLayoutITF14->setObjectName("vLayoutITF14");
        vLayoutITF14->setContentMargins(0);
        vLayoutITF14->setContentsMargins(0, 0, 0, 0);
        chkITF14NoQuietZones = new QCheckBox(grpITF14);
        chkITF14NoQuietZones->setObjectName("chkITF14NoQuietZones");
        chkITF14NoQuietZones->setChecked(false);

        vLayoutITF14->addWidget(chkITF14NoQuietZones);


        retranslateUi(grpITF14);

        QMetaObject::connectSlotsByName(grpITF14);
    } // setupUi

    void retranslateUi(QWidget *grpITF14)
    {
        grpITF14->setWindowTitle(QCoreApplication::translate("grpITF14", "Form", nullptr));
        chkITF14NoQuietZones->setText(QCoreApplication::translate("grpITF14", "No Quiet &Zones", nullptr));
#if QT_CONFIG(tooltip)
        chkITF14NoQuietZones->setToolTip(QCoreApplication::translate("grpITF14", "Do not add quiet zones to whitespace", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpITF14: public Ui_grpITF14 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPITF14_H
