/********************************************************************************
** Form generated from reading UI file 'grpC39.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC39_H
#define UI_GRPC39_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpC39
{
public:
    QVBoxLayout *vLayoutC39;
    QGroupBox *grpC39Check;
    QGridLayout *gridLayoutC39Check;
    QRadioButton *radC39Stand;
    QRadioButton *radC39Check;
    QRadioButton *radC39CheckHide;
    QRadioButton *radC39HIBC;

    void setupUi(QWidget *grpC39)
    {
        if (grpC39->objectName().isEmpty())
            grpC39->setObjectName("grpC39");
        grpC39->resize(254, 131);
        grpC39->setMaximumSize(QSize(600, 16777215));
        vLayoutC39 = new QVBoxLayout(grpC39);
        vLayoutC39->setObjectName("vLayoutC39");
        vLayoutC39->setContentMargins(0);
        vLayoutC39->setContentsMargins(0, 0, 0, 0);
        grpC39Check = new QGroupBox(grpC39);
        grpC39Check->setObjectName("grpC39Check");
        gridLayoutC39Check = new QGridLayout(grpC39Check);
        gridLayoutC39Check->setObjectName("gridLayoutC39Check");
        radC39Stand = new QRadioButton(grpC39Check);
        radC39Stand->setObjectName("radC39Stand");
        radC39Stand->setChecked(true);

        gridLayoutC39Check->addWidget(radC39Stand, 0, 0, 1, 1);

        radC39Check = new QRadioButton(grpC39Check);
        radC39Check->setObjectName("radC39Check");

        gridLayoutC39Check->addWidget(radC39Check, 0, 1, 1, 1);

        radC39CheckHide = new QRadioButton(grpC39Check);
        radC39CheckHide->setObjectName("radC39CheckHide");

        gridLayoutC39Check->addWidget(radC39CheckHide, 1, 0, 1, 1);

        radC39HIBC = new QRadioButton(grpC39Check);
        radC39HIBC->setObjectName("radC39HIBC");

        gridLayoutC39Check->addWidget(radC39HIBC, 1, 1, 1, 1);


        vLayoutC39->addWidget(grpC39Check);


        retranslateUi(grpC39);

        QMetaObject::connectSlotsByName(grpC39);
    } // setupUi

    void retranslateUi(QWidget *grpC39)
    {
        grpC39->setWindowTitle(QCoreApplication::translate("grpC39", "Form", nullptr));
        grpC39Check->setTitle(QCoreApplication::translate("grpC39", "Check Digit", nullptr));
#if QT_CONFIG(tooltip)
        grpC39Check->setToolTip(QCoreApplication::translate("grpC39", "Check character options", nullptr));
#endif // QT_CONFIG(tooltip)
        radC39Stand->setText(QCoreApplication::translate("grpC39", "No Ch&eck Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC39Stand->setToolTip(QCoreApplication::translate("grpC39", "Do not add check character", nullptr));
#endif // QT_CONFIG(tooltip)
        radC39Check->setText(QCoreApplication::translate("grpC39", "Mod-43 Chec&k Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC39Check->setToolTip(QCoreApplication::translate("grpC39", "Add mod-43 check character", nullptr));
#endif // QT_CONFIG(tooltip)
        radC39CheckHide->setText(QCoreApplication::translate("grpC39", "&Hidden Mod-43 Check Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC39CheckHide->setToolTip(QCoreApplication::translate("grpC39", "Add mod-43 check character but\n"
"do not display in Human Readable Text", nullptr));
#endif // QT_CONFIG(tooltip)
        radC39HIBC->setText(QCoreApplication::translate("grpC39", "HIBC (&Mod-43 Check Digit added)", nullptr));
#if QT_CONFIG(tooltip)
        radC39HIBC->setToolTip(QCoreApplication::translate("grpC39", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpC39: public Ui_grpC39 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC39_H
