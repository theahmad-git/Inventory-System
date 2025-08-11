/********************************************************************************
** Form generated from reading UI file 'grpRMQR.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPRMQR_H
#define UI_GRPRMQR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpRMQR
{
public:
    QVBoxLayout *vLayoutRMQR;
    QGridLayout *grpRMQROptions;
    QLabel *labelRMQRSize;
    QComboBox *cmbRMQRSize;
    QLabel *labelRMQRECC;
    QComboBox *cmbRMQRECC;
    QGroupBox *groupBoxRMQREncodingMode;
    QGridLayout *gLayoutRMQREncodingMode;
    QRadioButton *radRMQRStand;
    QRadioButton *radRMQRGS1;
    QCheckBox *chkRMQRFullMultibyte;
    QSpacerItem *vSpacerRMQR;

    void setupUi(QWidget *grpRMQR)
    {
        if (grpRMQR->objectName().isEmpty())
            grpRMQR->setObjectName("grpRMQR");
        grpRMQR->resize(400, 227);
        grpRMQR->setMaximumSize(QSize(600, 16777215));
        vLayoutRMQR = new QVBoxLayout(grpRMQR);
        vLayoutRMQR->setObjectName("vLayoutRMQR");
        grpRMQROptions = new QGridLayout();
        grpRMQROptions->setObjectName("grpRMQROptions");
        labelRMQRSize = new QLabel(grpRMQR);
        labelRMQRSize->setObjectName("labelRMQRSize");

        grpRMQROptions->addWidget(labelRMQRSize, 0, 0, 1, 1);

        cmbRMQRSize = new QComboBox(grpRMQR);
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->addItem(QString());
        cmbRMQRSize->setObjectName("cmbRMQRSize");
        cmbRMQRSize->setMaxVisibleItems(21);

        grpRMQROptions->addWidget(cmbRMQRSize, 0, 1, 1, 1);

        labelRMQRECC = new QLabel(grpRMQR);
        labelRMQRECC->setObjectName("labelRMQRECC");

        grpRMQROptions->addWidget(labelRMQRECC, 1, 0, 1, 1);

        cmbRMQRECC = new QComboBox(grpRMQR);
        cmbRMQRECC->addItem(QString());
        cmbRMQRECC->addItem(QString());
        cmbRMQRECC->addItem(QString());
        cmbRMQRECC->setObjectName("cmbRMQRECC");

        grpRMQROptions->addWidget(cmbRMQRECC, 1, 1, 1, 1);


        vLayoutRMQR->addLayout(grpRMQROptions);

        groupBoxRMQREncodingMode = new QGroupBox(grpRMQR);
        groupBoxRMQREncodingMode->setObjectName("groupBoxRMQREncodingMode");
        gLayoutRMQREncodingMode = new QGridLayout(groupBoxRMQREncodingMode);
        gLayoutRMQREncodingMode->setObjectName("gLayoutRMQREncodingMode");
        gLayoutRMQREncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radRMQRStand = new QRadioButton(groupBoxRMQREncodingMode);
        radRMQRStand->setObjectName("radRMQRStand");
        radRMQRStand->setChecked(true);

        gLayoutRMQREncodingMode->addWidget(radRMQRStand, 0, 0, 1, 1);

        radRMQRGS1 = new QRadioButton(groupBoxRMQREncodingMode);
        radRMQRGS1->setObjectName("radRMQRGS1");

        gLayoutRMQREncodingMode->addWidget(radRMQRGS1, 0, 1, 1, 1);


        vLayoutRMQR->addWidget(groupBoxRMQREncodingMode);

        chkRMQRFullMultibyte = new QCheckBox(grpRMQR);
        chkRMQRFullMultibyte->setObjectName("chkRMQRFullMultibyte");
        chkRMQRFullMultibyte->setChecked(false);

        vLayoutRMQR->addWidget(chkRMQRFullMultibyte);

        vSpacerRMQR = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        vLayoutRMQR->addItem(vSpacerRMQR);

#if QT_CONFIG(shortcut)
        labelRMQRSize->setBuddy(cmbRMQRSize);
        labelRMQRECC->setBuddy(cmbRMQRECC);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpRMQR);

        QMetaObject::connectSlotsByName(grpRMQR);
    } // setupUi

    void retranslateUi(QWidget *grpRMQR)
    {
        grpRMQR->setWindowTitle(QCoreApplication::translate("grpRMQR", "Form", nullptr));
        labelRMQRSize->setText(QCoreApplication::translate("grpRMQR", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        labelRMQRSize->setToolTip(QCoreApplication::translate("grpRMQR", "Set height and width (H x W) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbRMQRSize->setItemText(0, QCoreApplication::translate("grpRMQR", "Automatic", nullptr));
        cmbRMQRSize->setItemText(1, QCoreApplication::translate("grpRMQR", "R7x43 (Zint 1)", nullptr));
        cmbRMQRSize->setItemText(2, QCoreApplication::translate("grpRMQR", "R7x59 (Zint 2)", nullptr));
        cmbRMQRSize->setItemText(3, QCoreApplication::translate("grpRMQR", "R7x77 (Zint 3)", nullptr));
        cmbRMQRSize->setItemText(4, QCoreApplication::translate("grpRMQR", "R7x99 (Zint 4)", nullptr));
        cmbRMQRSize->setItemText(5, QCoreApplication::translate("grpRMQR", "R7x139 (Zint 5)", nullptr));
        cmbRMQRSize->setItemText(6, QCoreApplication::translate("grpRMQR", "R9x43 (Zint 6)", nullptr));
        cmbRMQRSize->setItemText(7, QCoreApplication::translate("grpRMQR", "R9x59 (Zint 7)", nullptr));
        cmbRMQRSize->setItemText(8, QCoreApplication::translate("grpRMQR", "R9x77 (Zint 8)", nullptr));
        cmbRMQRSize->setItemText(9, QCoreApplication::translate("grpRMQR", "R9x99 (Zint 9)", nullptr));
        cmbRMQRSize->setItemText(10, QCoreApplication::translate("grpRMQR", "R9x139 (Zint 10)", nullptr));
        cmbRMQRSize->setItemText(11, QCoreApplication::translate("grpRMQR", "R11x27 (Zint 11)", nullptr));
        cmbRMQRSize->setItemText(12, QCoreApplication::translate("grpRMQR", "R11x43 (Zint 12)", nullptr));
        cmbRMQRSize->setItemText(13, QCoreApplication::translate("grpRMQR", "R11x59 (Zint 13)", nullptr));
        cmbRMQRSize->setItemText(14, QCoreApplication::translate("grpRMQR", "R11x77 (Zint 14)", nullptr));
        cmbRMQRSize->setItemText(15, QCoreApplication::translate("grpRMQR", "R11x99 (Zint 15)", nullptr));
        cmbRMQRSize->setItemText(16, QCoreApplication::translate("grpRMQR", "R11x139 (Zint 16)", nullptr));
        cmbRMQRSize->setItemText(17, QCoreApplication::translate("grpRMQR", "R13x27 (Zint 17)", nullptr));
        cmbRMQRSize->setItemText(18, QCoreApplication::translate("grpRMQR", "R13x43 (Zint 18)", nullptr));
        cmbRMQRSize->setItemText(19, QCoreApplication::translate("grpRMQR", "R13x59 (Zint 19)", nullptr));
        cmbRMQRSize->setItemText(20, QCoreApplication::translate("grpRMQR", "R13x77 (Zint 20)", nullptr));
        cmbRMQRSize->setItemText(21, QCoreApplication::translate("grpRMQR", "R13x99 (Zint 21)", nullptr));
        cmbRMQRSize->setItemText(22, QCoreApplication::translate("grpRMQR", "R13x139 (Zint 22)", nullptr));
        cmbRMQRSize->setItemText(23, QCoreApplication::translate("grpRMQR", "R15x43 (Zint 23)", nullptr));
        cmbRMQRSize->setItemText(24, QCoreApplication::translate("grpRMQR", "R15x59 (Zint 24)", nullptr));
        cmbRMQRSize->setItemText(25, QCoreApplication::translate("grpRMQR", "R15x77 (Zint 25)", nullptr));
        cmbRMQRSize->setItemText(26, QCoreApplication::translate("grpRMQR", "R15x99 (Zint 26)", nullptr));
        cmbRMQRSize->setItemText(27, QCoreApplication::translate("grpRMQR", "R15x139 (Zint 27)", nullptr));
        cmbRMQRSize->setItemText(28, QCoreApplication::translate("grpRMQR", "R17x43 (Zint 28)", nullptr));
        cmbRMQRSize->setItemText(29, QCoreApplication::translate("grpRMQR", "R17x59 (Zint 29)", nullptr));
        cmbRMQRSize->setItemText(30, QCoreApplication::translate("grpRMQR", "R17x77 (Zint 30)", nullptr));
        cmbRMQRSize->setItemText(31, QCoreApplication::translate("grpRMQR", "R17x99 (Zint 31)", nullptr));
        cmbRMQRSize->setItemText(32, QCoreApplication::translate("grpRMQR", "R17x139 (Zint 32)", nullptr));
        cmbRMQRSize->setItemText(33, QCoreApplication::translate("grpRMQR", "R7 x Automatic Width (Zint 33)", nullptr));
        cmbRMQRSize->setItemText(34, QCoreApplication::translate("grpRMQR", "R9 x Automatic Width (Zint 34)", nullptr));
        cmbRMQRSize->setItemText(35, QCoreApplication::translate("grpRMQR", "R11 x Automatic Width (Zint 35)", nullptr));
        cmbRMQRSize->setItemText(36, QCoreApplication::translate("grpRMQR", "R13 x Automatic Width (Zint 36)", nullptr));
        cmbRMQRSize->setItemText(37, QCoreApplication::translate("grpRMQR", "R15 x Automatic Width (Zint 37)", nullptr));
        cmbRMQRSize->setItemText(38, QCoreApplication::translate("grpRMQR", "R17 x Automatic Width (Zint 38)", nullptr));

#if QT_CONFIG(tooltip)
        cmbRMQRSize->setToolTip(QCoreApplication::translate("grpRMQR", "Set height and width (H x W) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        labelRMQRECC->setText(QCoreApplication::translate("grpRMQR", "E&rror Correction:", nullptr));
#if QT_CONFIG(tooltip)
        labelRMQRECC->setToolTip(QCoreApplication::translate("grpRMQR", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbRMQRECC->setItemText(0, QCoreApplication::translate("grpRMQR", "Automatic", nullptr));
        cmbRMQRECC->setItemText(1, QCoreApplication::translate("grpRMQR", "~37% (Level M)", nullptr));
        cmbRMQRECC->setItemText(2, QCoreApplication::translate("grpRMQR", "~65% (Level H)", nullptr));

#if QT_CONFIG(tooltip)
        cmbRMQRECC->setToolTip(QCoreApplication::translate("grpRMQR", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxRMQREncodingMode->setTitle(QCoreApplication::translate("grpRMQR", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxRMQREncodingMode->setToolTip(QCoreApplication::translate("grpRMQR", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radRMQRStand->setText(QCoreApplication::translate("grpRMQR", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radRMQRStand->setToolTip(QCoreApplication::translate("grpRMQR", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radRMQRGS1->setText(QCoreApplication::translate("grpRMQR", "GS&1 Data Mode", nullptr));
#if QT_CONFIG(tooltip)
        radRMQRGS1->setToolTip(QCoreApplication::translate("grpRMQR", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkRMQRFullMultibyte->setText(QCoreApplication::translate("grpRMQR", "&Full Multibyte", nullptr));
#if QT_CONFIG(tooltip)
        chkRMQRFullMultibyte->setToolTip(QCoreApplication::translate("grpRMQR", "Use Kanji multibyte encoding for binary\n"
"and Latin data", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpRMQR: public Ui_grpRMQR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPRMQR_H
