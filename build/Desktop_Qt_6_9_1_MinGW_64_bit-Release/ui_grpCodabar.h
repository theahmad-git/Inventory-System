/********************************************************************************
** Form generated from reading UI file 'grpCodabar.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPCODABAR_H
#define UI_GRPCODABAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpCodabar
{
public:
    QVBoxLayout *vLayoutCodabar;
    QGroupBox *grpCodabarCheck;
    QGridLayout *gridLayoutCodabarCheck;
    QRadioButton *radCodabarStand;
    QRadioButton *radCodabarCheck;
    QRadioButton *radCodabarCheckHide;

    void setupUi(QWidget *grpCodabar)
    {
        if (grpCodabar->objectName().isEmpty())
            grpCodabar->setObjectName("grpCodabar");
        grpCodabar->resize(254, 131);
        vLayoutCodabar = new QVBoxLayout(grpCodabar);
        vLayoutCodabar->setObjectName("vLayoutCodabar");
        vLayoutCodabar->setContentMargins(0);
        vLayoutCodabar->setContentsMargins(0, 0, 0, 0);
        grpCodabarCheck = new QGroupBox(grpCodabar);
        grpCodabarCheck->setObjectName("grpCodabarCheck");
        gridLayoutCodabarCheck = new QGridLayout(grpCodabarCheck);
        gridLayoutCodabarCheck->setObjectName("gridLayoutCodabarCheck");
        radCodabarStand = new QRadioButton(grpCodabarCheck);
        radCodabarStand->setObjectName("radCodabarStand");
        radCodabarStand->setChecked(true);

        gridLayoutCodabarCheck->addWidget(radCodabarStand, 0, 0, 1, 1);

        radCodabarCheck = new QRadioButton(grpCodabarCheck);
        radCodabarCheck->setObjectName("radCodabarCheck");

        gridLayoutCodabarCheck->addWidget(radCodabarCheck, 0, 1, 1, 1);

        radCodabarCheckHide = new QRadioButton(grpCodabarCheck);
        radCodabarCheckHide->setObjectName("radCodabarCheckHide");

        gridLayoutCodabarCheck->addWidget(radCodabarCheckHide, 1, 0, 1, 1);


        vLayoutCodabar->addWidget(grpCodabarCheck);


        retranslateUi(grpCodabar);

        QMetaObject::connectSlotsByName(grpCodabar);
    } // setupUi

    void retranslateUi(QWidget *grpCodabar)
    {
        grpCodabar->setWindowTitle(QCoreApplication::translate("grpCodabar", "Form", nullptr));
        grpCodabarCheck->setTitle(QCoreApplication::translate("grpCodabar", "Check Digit", nullptr));
#if QT_CONFIG(tooltip)
        grpCodabarCheck->setToolTip(QCoreApplication::translate("grpCodabar", "Check character options", nullptr));
#endif // QT_CONFIG(tooltip)
        radCodabarStand->setText(QCoreApplication::translate("grpCodabar", "No Ch&eck Digit", nullptr));
#if QT_CONFIG(tooltip)
        radCodabarStand->setToolTip(QCoreApplication::translate("grpCodabar", "Do not add check character", nullptr));
#endif // QT_CONFIG(tooltip)
        radCodabarCheck->setText(QCoreApplication::translate("grpCodabar", "Chec&k Digit", nullptr));
#if QT_CONFIG(tooltip)
        radCodabarCheck->setToolTip(QCoreApplication::translate("grpCodabar", "Add mod-16 check character", nullptr));
#endif // QT_CONFIG(tooltip)
        radCodabarCheckHide->setText(QCoreApplication::translate("grpCodabar", "&Hidden Check Digit", nullptr));
#if QT_CONFIG(tooltip)
        radCodabarCheckHide->setToolTip(QCoreApplication::translate("grpCodabar", "Add mod-16 check character but do\n"
"not display in Human Readable Text", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpCodabar: public Ui_grpCodabar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPCODABAR_H
