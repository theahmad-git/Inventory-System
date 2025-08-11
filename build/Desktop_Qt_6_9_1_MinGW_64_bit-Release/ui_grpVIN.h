/********************************************************************************
** Form generated from reading UI file 'grpVIN.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPVIN_H
#define UI_GRPVIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpVIN
{
public:
    QVBoxLayout *vLayoutVIN;
    QGridLayout *gLayoutVIN;
    QCheckBox *chkVINImportChar;

    void setupUi(QWidget *grpVIN)
    {
        if (grpVIN->objectName().isEmpty())
            grpVIN->setObjectName("grpVIN");
        grpVIN->resize(400, 131);
        grpVIN->setMaximumSize(QSize(600, 16777215));
        vLayoutVIN = new QVBoxLayout(grpVIN);
        vLayoutVIN->setObjectName("vLayoutVIN");
        vLayoutVIN->setContentMargins(0);
        vLayoutVIN->setContentsMargins(0, 0, 0, 0);
        gLayoutVIN = new QGridLayout();
        gLayoutVIN->setObjectName("gLayoutVIN");
        chkVINImportChar = new QCheckBox(grpVIN);
        chkVINImportChar->setObjectName("chkVINImportChar");
        chkVINImportChar->setChecked(false);

        gLayoutVIN->addWidget(chkVINImportChar, 0, 0, 1, 1);


        vLayoutVIN->addLayout(gLayoutVIN);


        retranslateUi(grpVIN);

        QMetaObject::connectSlotsByName(grpVIN);
    } // setupUi

    void retranslateUi(QWidget *grpVIN)
    {
        grpVIN->setWindowTitle(QCoreApplication::translate("grpVIN", "Form", nullptr));
        chkVINImportChar->setText(QCoreApplication::translate("grpVIN", "I&mport Character Prefix", nullptr));
#if QT_CONFIG(tooltip)
        chkVINImportChar->setToolTip(QCoreApplication::translate("grpVIN", "Preface data with import character 'I'\n"
"(not shown in Human Readable Text)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpVIN: public Ui_grpVIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPVIN_H
