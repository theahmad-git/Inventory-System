/********************************************************************************
** Form generated from reading UI file 'grpC93.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC93_H
#define UI_GRPC93_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpC93
{
public:
    QVBoxLayout *vLayoutC93;
    QCheckBox *chkC93ShowChecks;

    void setupUi(QWidget *grpC93)
    {
        if (grpC93->objectName().isEmpty())
            grpC93->setObjectName("grpC93");
        grpC93->resize(254, 131);
        vLayoutC93 = new QVBoxLayout(grpC93);
        vLayoutC93->setObjectName("vLayoutC93");
        vLayoutC93->setContentMargins(0);
        vLayoutC93->setContentsMargins(0, 0, 0, 0);
        chkC93ShowChecks = new QCheckBox(grpC93);
        chkC93ShowChecks->setObjectName("chkC93ShowChecks");
        chkC93ShowChecks->setChecked(false);

        vLayoutC93->addWidget(chkC93ShowChecks);


        retranslateUi(grpC93);

        QMetaObject::connectSlotsByName(grpC93);
    } // setupUi

    void retranslateUi(QWidget *grpC93)
    {
        grpC93->setWindowTitle(QCoreApplication::translate("grpC93", "Form", nullptr));
        chkC93ShowChecks->setText(QCoreApplication::translate("grpC93", "Show Chec&k Characters in Text", nullptr));
#if QT_CONFIG(tooltip)
        chkC93ShowChecks->setToolTip(QCoreApplication::translate("grpC93", "Display the 2 check characters in\n"
"the Human Readable Text", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpC93: public Ui_grpC93 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC93_H
