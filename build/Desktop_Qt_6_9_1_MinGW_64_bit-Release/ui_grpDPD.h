/********************************************************************************
** Form generated from reading UI file 'grpDPD.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPDPD_H
#define UI_GRPDPD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpDPD
{
public:
    QVBoxLayout *vLayoutDPD;
    QCheckBox *chkDPDRelabel;

    void setupUi(QWidget *grpDPD)
    {
        if (grpDPD->objectName().isEmpty())
            grpDPD->setObjectName("grpDPD");
        grpDPD->resize(254, 131);
        vLayoutDPD = new QVBoxLayout(grpDPD);
        vLayoutDPD->setObjectName("vLayoutDPD");
        vLayoutDPD->setContentMargins(0);
        vLayoutDPD->setContentsMargins(0, 0, 0, 0);
        chkDPDRelabel = new QCheckBox(grpDPD);
        chkDPDRelabel->setObjectName("chkDPDRelabel");
        chkDPDRelabel->setChecked(false);

        vLayoutDPD->addWidget(chkDPDRelabel);


        retranslateUi(grpDPD);

        QMetaObject::connectSlotsByName(grpDPD);
    } // setupUi

    void retranslateUi(QWidget *grpDPD)
    {
        grpDPD->setWindowTitle(QCoreApplication::translate("grpDPD", "Form", nullptr));
        chkDPDRelabel->setText(QCoreApplication::translate("grpDPD", "&Mark as Relabel", nullptr));
#if QT_CONFIG(tooltip)
        chkDPDRelabel->setToolTip(QCoreApplication::translate("grpDPD", "Omit the identification tag and\n"
"print at half-height;\n"
"Input is 27 characters", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpDPD: public Ui_grpDPD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPDPD_H
