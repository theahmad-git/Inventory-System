/********************************************************************************
** Form generated from reading UI file 'grpC25.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC25_H
#define UI_GRPC25_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpC25
{
public:
    QVBoxLayout *vLayoutC25;
    QGroupBox *grpC25Check;
    QGridLayout *gridLayoutC25Check;
    QRadioButton *radC25Stand;
    QRadioButton *radC25Check;
    QRadioButton *radC25CheckHide;

    void setupUi(QWidget *grpC25)
    {
        if (grpC25->objectName().isEmpty())
            grpC25->setObjectName("grpC25");
        grpC25->resize(254, 131);
        grpC25->setMaximumSize(QSize(600, 16777215));
        vLayoutC25 = new QVBoxLayout(grpC25);
        vLayoutC25->setObjectName("vLayoutC25");
        vLayoutC25->setContentMargins(0);
        vLayoutC25->setContentsMargins(0, 0, 0, 0);
        grpC25Check = new QGroupBox(grpC25);
        grpC25Check->setObjectName("grpC25Check");
        gridLayoutC25Check = new QGridLayout(grpC25Check);
        gridLayoutC25Check->setObjectName("gridLayoutC25Check");
        radC25Stand = new QRadioButton(grpC25Check);
        radC25Stand->setObjectName("radC25Stand");
        radC25Stand->setChecked(true);

        gridLayoutC25Check->addWidget(radC25Stand, 0, 0, 1, 1);

        radC25Check = new QRadioButton(grpC25Check);
        radC25Check->setObjectName("radC25Check");

        gridLayoutC25Check->addWidget(radC25Check, 0, 1, 1, 1);

        radC25CheckHide = new QRadioButton(grpC25Check);
        radC25CheckHide->setObjectName("radC25CheckHide");

        gridLayoutC25Check->addWidget(radC25CheckHide, 1, 0, 1, 1);


        vLayoutC25->addWidget(grpC25Check);


        retranslateUi(grpC25);

        QMetaObject::connectSlotsByName(grpC25);
    } // setupUi

    void retranslateUi(QWidget *grpC25)
    {
        grpC25->setWindowTitle(QCoreApplication::translate("grpC25", "Form", nullptr));
        grpC25Check->setTitle(QCoreApplication::translate("grpC25", "Check Digit", nullptr));
#if QT_CONFIG(tooltip)
        grpC25Check->setToolTip(QCoreApplication::translate("grpC25", "Check digit options", nullptr));
#endif // QT_CONFIG(tooltip)
        radC25Stand->setText(QCoreApplication::translate("grpC25", "No Ch&eck Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC25Stand->setToolTip(QCoreApplication::translate("grpC25", "Do not add check digit", nullptr));
#endif // QT_CONFIG(tooltip)
        radC25Check->setText(QCoreApplication::translate("grpC25", "Chec&k Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC25Check->setToolTip(QCoreApplication::translate("grpC25", "Add standard GS1 mod-10 check digit", nullptr));
#endif // QT_CONFIG(tooltip)
        radC25CheckHide->setText(QCoreApplication::translate("grpC25", "&Hidden Check Digit", nullptr));
#if QT_CONFIG(tooltip)
        radC25CheckHide->setToolTip(QCoreApplication::translate("grpC25", "Add standard GS1 mod-10 check digit but\n"
"do not display in Human Readable Text", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpC25: public Ui_grpC25 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC25_H
