/********************************************************************************
** Form generated from reading UI file 'grpQR.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPQR_H
#define UI_GRPQR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpQR
{
public:
    QVBoxLayout *verticalLayoutQR;
    QGridLayout *gridLayoutQR;
    QLabel *labelQRSize;
    QComboBox *cmbQRSize;
    QLabel *labelQRECC;
    QComboBox *cmbQRECC;
    QLabel *labelQRMask;
    QComboBox *cmbQRMask;
    QGroupBox *groupBoxQREncodingMode;
    QGridLayout *gridLayoutQREncodingMode;
    QRadioButton *radQRStand;
    QRadioButton *radQRGS1;
    QRadioButton *radQRHIBC;
    QCheckBox *chkQRFullMultibyte;
    QCheckBox *chkQRFast;
    QGroupBox *groupBoxQRStructApp;
    QGridLayout *gridLayoutQRStructApp;
    QLabel *lblQRStructAppCount;
    QComboBox *cmbQRStructAppCount;
    QSpacerItem *spacerQRStructApp2;
    QLabel *lblQRStructAppIndex;
    QComboBox *cmbQRStructAppIndex;
    QSpacerItem *spacerQRStructApp5;
    QLabel *lblQRStructAppID;
    QSpinBox *spnQRStructAppID;
    QSpacerItem *verticalSpacerQR;

    void setupUi(QWidget *grpQR)
    {
        if (grpQR->objectName().isEmpty())
            grpQR->setObjectName("grpQR");
        grpQR->resize(400, 227);
        grpQR->setMaximumSize(QSize(600, 16777215));
        verticalLayoutQR = new QVBoxLayout(grpQR);
        verticalLayoutQR->setObjectName("verticalLayoutQR");
        gridLayoutQR = new QGridLayout();
        gridLayoutQR->setObjectName("gridLayoutQR");
        labelQRSize = new QLabel(grpQR);
        labelQRSize->setObjectName("labelQRSize");

        gridLayoutQR->addWidget(labelQRSize, 0, 0, 1, 1);

        cmbQRSize = new QComboBox(grpQR);
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->addItem(QString());
        cmbQRSize->setObjectName("cmbQRSize");
        cmbQRSize->setMaxVisibleItems(21);

        gridLayoutQR->addWidget(cmbQRSize, 0, 1, 1, 1);

        labelQRECC = new QLabel(grpQR);
        labelQRECC->setObjectName("labelQRECC");

        gridLayoutQR->addWidget(labelQRECC, 1, 0, 1, 1);

        cmbQRECC = new QComboBox(grpQR);
        cmbQRECC->addItem(QString());
        cmbQRECC->addItem(QString());
        cmbQRECC->addItem(QString());
        cmbQRECC->addItem(QString());
        cmbQRECC->addItem(QString());
        cmbQRECC->setObjectName("cmbQRECC");

        gridLayoutQR->addWidget(cmbQRECC, 1, 1, 1, 1);

        labelQRMask = new QLabel(grpQR);
        labelQRMask->setObjectName("labelQRMask");

        gridLayoutQR->addWidget(labelQRMask, 2, 0, 1, 1);

        cmbQRMask = new QComboBox(grpQR);
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->addItem(QString());
        cmbQRMask->setObjectName("cmbQRMask");

        gridLayoutQR->addWidget(cmbQRMask, 2, 1, 1, 1);


        verticalLayoutQR->addLayout(gridLayoutQR);

        groupBoxQREncodingMode = new QGroupBox(grpQR);
        groupBoxQREncodingMode->setObjectName("groupBoxQREncodingMode");
        gridLayoutQREncodingMode = new QGridLayout(groupBoxQREncodingMode);
        gridLayoutQREncodingMode->setObjectName("gridLayoutQREncodingMode");
        gridLayoutQREncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radQRStand = new QRadioButton(groupBoxQREncodingMode);
        radQRStand->setObjectName("radQRStand");
        radQRStand->setChecked(true);

        gridLayoutQREncodingMode->addWidget(radQRStand, 0, 0, 1, 1);

        radQRGS1 = new QRadioButton(groupBoxQREncodingMode);
        radQRGS1->setObjectName("radQRGS1");

        gridLayoutQREncodingMode->addWidget(radQRGS1, 0, 1, 1, 1);

        radQRHIBC = new QRadioButton(groupBoxQREncodingMode);
        radQRHIBC->setObjectName("radQRHIBC");

        gridLayoutQREncodingMode->addWidget(radQRHIBC, 0, 2, 1, 1);


        verticalLayoutQR->addWidget(groupBoxQREncodingMode);

        chkQRFullMultibyte = new QCheckBox(grpQR);
        chkQRFullMultibyte->setObjectName("chkQRFullMultibyte");
        chkQRFullMultibyte->setChecked(false);

        verticalLayoutQR->addWidget(chkQRFullMultibyte);

        chkQRFast = new QCheckBox(grpQR);
        chkQRFast->setObjectName("chkQRFast");
        chkQRFast->setChecked(false);

        verticalLayoutQR->addWidget(chkQRFast);

        groupBoxQRStructApp = new QGroupBox(grpQR);
        groupBoxQRStructApp->setObjectName("groupBoxQRStructApp");
        gridLayoutQRStructApp = new QGridLayout(groupBoxQRStructApp);
        gridLayoutQRStructApp->setObjectName("gridLayoutQRStructApp");
        lblQRStructAppCount = new QLabel(groupBoxQRStructApp);
        lblQRStructAppCount->setObjectName("lblQRStructAppCount");
        lblQRStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutQRStructApp->addWidget(lblQRStructAppCount, 0, 0, 1, 1);

        cmbQRStructAppCount = new QComboBox(groupBoxQRStructApp);
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->addItem(QString());
        cmbQRStructAppCount->setObjectName("cmbQRStructAppCount");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbQRStructAppCount->sizePolicy().hasHeightForWidth());
        cmbQRStructAppCount->setSizePolicy(sizePolicy);

        gridLayoutQRStructApp->addWidget(cmbQRStructAppCount, 0, 1, 1, 1);

        spacerQRStructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutQRStructApp->addItem(spacerQRStructApp2, 0, 2, 1, 1);

        lblQRStructAppIndex = new QLabel(groupBoxQRStructApp);
        lblQRStructAppIndex->setObjectName("lblQRStructAppIndex");
        lblQRStructAppIndex->setEnabled(false);
        lblQRStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutQRStructApp->addWidget(lblQRStructAppIndex, 0, 3, 1, 1);

        cmbQRStructAppIndex = new QComboBox(groupBoxQRStructApp);
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->addItem(QString());
        cmbQRStructAppIndex->setObjectName("cmbQRStructAppIndex");
        cmbQRStructAppIndex->setEnabled(false);
        sizePolicy.setHeightForWidth(cmbQRStructAppIndex->sizePolicy().hasHeightForWidth());
        cmbQRStructAppIndex->setSizePolicy(sizePolicy);

        gridLayoutQRStructApp->addWidget(cmbQRStructAppIndex, 0, 4, 1, 1);

        spacerQRStructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutQRStructApp->addItem(spacerQRStructApp5, 0, 5, 1, 1);

        lblQRStructAppID = new QLabel(groupBoxQRStructApp);
        lblQRStructAppID->setObjectName("lblQRStructAppID");
        lblQRStructAppID->setEnabled(false);
        lblQRStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutQRStructApp->addWidget(lblQRStructAppID, 0, 6, 1, 1);

        spnQRStructAppID = new QSpinBox(groupBoxQRStructApp);
        spnQRStructAppID->setObjectName("spnQRStructAppID");
        spnQRStructAppID->setEnabled(false);
        spnQRStructAppID->setMinimum(0);
        spnQRStructAppID->setMaximum(255);
        spnQRStructAppID->setValue(0);

        gridLayoutQRStructApp->addWidget(spnQRStructAppID, 0, 7, 1, 1);


        verticalLayoutQR->addWidget(groupBoxQRStructApp);

        verticalSpacerQR = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayoutQR->addItem(verticalSpacerQR);

#if QT_CONFIG(shortcut)
        labelQRSize->setBuddy(cmbQRSize);
        labelQRECC->setBuddy(cmbQRECC);
        labelQRMask->setBuddy(cmbQRMask);
        lblQRStructAppCount->setBuddy(cmbQRStructAppCount);
        lblQRStructAppIndex->setBuddy(cmbQRStructAppIndex);
        lblQRStructAppID->setBuddy(spnQRStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpQR);

        QMetaObject::connectSlotsByName(grpQR);
    } // setupUi

    void retranslateUi(QWidget *grpQR)
    {
        grpQR->setWindowTitle(QCoreApplication::translate("grpQR", "Form", nullptr));
        labelQRSize->setText(QCoreApplication::translate("grpQR", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        labelQRSize->setToolTip(QCoreApplication::translate("grpQR", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbQRSize->setItemText(0, QCoreApplication::translate("grpQR", "Automatic", nullptr));
        cmbQRSize->setItemText(1, QCoreApplication::translate("grpQR", "21 x 21 (Version 1)", nullptr));
        cmbQRSize->setItemText(2, QCoreApplication::translate("grpQR", "25 x 25 (Version 2)", nullptr));
        cmbQRSize->setItemText(3, QCoreApplication::translate("grpQR", "29 x 29 (Version 3)", nullptr));
        cmbQRSize->setItemText(4, QCoreApplication::translate("grpQR", "33 x 33 (Version 4)", nullptr));
        cmbQRSize->setItemText(5, QCoreApplication::translate("grpQR", "37 x 37 (Version 5)", nullptr));
        cmbQRSize->setItemText(6, QCoreApplication::translate("grpQR", "41 x 41 (Version 6)", nullptr));
        cmbQRSize->setItemText(7, QCoreApplication::translate("grpQR", "45 x 45 (Version 7)", nullptr));
        cmbQRSize->setItemText(8, QCoreApplication::translate("grpQR", "49 x 49 (Version 8)", nullptr));
        cmbQRSize->setItemText(9, QCoreApplication::translate("grpQR", "53 x 53 (Version 9)", nullptr));
        cmbQRSize->setItemText(10, QCoreApplication::translate("grpQR", "57 x 57 (Version 10)", nullptr));
        cmbQRSize->setItemText(11, QCoreApplication::translate("grpQR", "61 x 61 (Version 11)", nullptr));
        cmbQRSize->setItemText(12, QCoreApplication::translate("grpQR", "65 x 65 (Version 12)", nullptr));
        cmbQRSize->setItemText(13, QCoreApplication::translate("grpQR", "69 x 69 (Version 13)", nullptr));
        cmbQRSize->setItemText(14, QCoreApplication::translate("grpQR", "73 x 73 (Version 14)", nullptr));
        cmbQRSize->setItemText(15, QCoreApplication::translate("grpQR", "77 x 77 (Version 15)", nullptr));
        cmbQRSize->setItemText(16, QCoreApplication::translate("grpQR", "81 x 81 (Version 16)", nullptr));
        cmbQRSize->setItemText(17, QCoreApplication::translate("grpQR", "85 x 85 (Version 17)", nullptr));
        cmbQRSize->setItemText(18, QCoreApplication::translate("grpQR", "89 x 89 (Version 18)", nullptr));
        cmbQRSize->setItemText(19, QCoreApplication::translate("grpQR", "93 x 93 (Version 19)", nullptr));
        cmbQRSize->setItemText(20, QCoreApplication::translate("grpQR", "97 x 97 (Version 20)", nullptr));
        cmbQRSize->setItemText(21, QCoreApplication::translate("grpQR", "101 x 101 (Version 21)", nullptr));
        cmbQRSize->setItemText(22, QCoreApplication::translate("grpQR", "105 x 105 (Version 22)", nullptr));
        cmbQRSize->setItemText(23, QCoreApplication::translate("grpQR", "109 x 109 (Version 23)", nullptr));
        cmbQRSize->setItemText(24, QCoreApplication::translate("grpQR", "113 x 113 (Version 24)", nullptr));
        cmbQRSize->setItemText(25, QCoreApplication::translate("grpQR", "117 x 117 (Version 25)", nullptr));
        cmbQRSize->setItemText(26, QCoreApplication::translate("grpQR", "121 x 121 (Version 26)", nullptr));
        cmbQRSize->setItemText(27, QCoreApplication::translate("grpQR", "125 x 125 (Version 27)", nullptr));
        cmbQRSize->setItemText(28, QCoreApplication::translate("grpQR", "129 x 129 (Version 28)", nullptr));
        cmbQRSize->setItemText(29, QCoreApplication::translate("grpQR", "133 x 133 (Version 29)", nullptr));
        cmbQRSize->setItemText(30, QCoreApplication::translate("grpQR", "137 x 137 (Version 30)", nullptr));
        cmbQRSize->setItemText(31, QCoreApplication::translate("grpQR", "141 x 141 (Version 31)", nullptr));
        cmbQRSize->setItemText(32, QCoreApplication::translate("grpQR", "145 x 145 (Version 32)", nullptr));
        cmbQRSize->setItemText(33, QCoreApplication::translate("grpQR", "149 x 149 (Version 33)", nullptr));
        cmbQRSize->setItemText(34, QCoreApplication::translate("grpQR", "153 x 153 (Version 34)", nullptr));
        cmbQRSize->setItemText(35, QCoreApplication::translate("grpQR", "157 x 157 (Version 35)", nullptr));
        cmbQRSize->setItemText(36, QCoreApplication::translate("grpQR", "161 x 161 (Version 36)", nullptr));
        cmbQRSize->setItemText(37, QCoreApplication::translate("grpQR", "165 x 165 (Version 37)", nullptr));
        cmbQRSize->setItemText(38, QCoreApplication::translate("grpQR", "169 x 169 (Version 38)", nullptr));
        cmbQRSize->setItemText(39, QCoreApplication::translate("grpQR", "173 x 173 (Version 39)", nullptr));
        cmbQRSize->setItemText(40, QCoreApplication::translate("grpQR", "177 x 177 (Version 40)", nullptr));

#if QT_CONFIG(tooltip)
        cmbQRSize->setToolTip(QCoreApplication::translate("grpQR", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        labelQRECC->setText(QCoreApplication::translate("grpQR", "E&rror Correction:", nullptr));
#if QT_CONFIG(tooltip)
        labelQRECC->setToolTip(QCoreApplication::translate("grpQR", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbQRECC->setItemText(0, QCoreApplication::translate("grpQR", "Automatic", nullptr));
        cmbQRECC->setItemText(1, QCoreApplication::translate("grpQR", "~20% (Level L)", nullptr));
        cmbQRECC->setItemText(2, QCoreApplication::translate("grpQR", "~37% (Level M)", nullptr));
        cmbQRECC->setItemText(3, QCoreApplication::translate("grpQR", "~55% (Level Q)", nullptr));
        cmbQRECC->setItemText(4, QCoreApplication::translate("grpQR", "~65% (Level H)", nullptr));

#if QT_CONFIG(tooltip)
        cmbQRECC->setToolTip(QCoreApplication::translate("grpQR", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        labelQRMask->setText(QCoreApplication::translate("grpQR", "&Mask:", nullptr));
#if QT_CONFIG(tooltip)
        labelQRMask->setToolTip(QCoreApplication::translate("grpQR", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbQRMask->setItemText(0, QCoreApplication::translate("grpQR", "Automatic", nullptr));
        cmbQRMask->setItemText(1, QCoreApplication::translate("grpQR", "0", nullptr));
        cmbQRMask->setItemText(2, QCoreApplication::translate("grpQR", "1", nullptr));
        cmbQRMask->setItemText(3, QCoreApplication::translate("grpQR", "2", nullptr));
        cmbQRMask->setItemText(4, QCoreApplication::translate("grpQR", "3", nullptr));
        cmbQRMask->setItemText(5, QCoreApplication::translate("grpQR", "4", nullptr));
        cmbQRMask->setItemText(6, QCoreApplication::translate("grpQR", "5", nullptr));
        cmbQRMask->setItemText(7, QCoreApplication::translate("grpQR", "6", nullptr));
        cmbQRMask->setItemText(8, QCoreApplication::translate("grpQR", "7", nullptr));

#if QT_CONFIG(tooltip)
        cmbQRMask->setToolTip(QCoreApplication::translate("grpQR", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxQREncodingMode->setTitle(QCoreApplication::translate("grpQR", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxQREncodingMode->setToolTip(QCoreApplication::translate("grpQR", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radQRStand->setText(QCoreApplication::translate("grpQR", "S&tandard", nullptr));
#if QT_CONFIG(tooltip)
        radQRStand->setToolTip(QCoreApplication::translate("grpQR", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radQRGS1->setText(QCoreApplication::translate("grpQR", "GS&1 Data", nullptr));
#if QT_CONFIG(tooltip)
        radQRGS1->setToolTip(QCoreApplication::translate("grpQR", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        radQRHIBC->setText(QCoreApplication::translate("grpQR", "H&IBC", nullptr));
#if QT_CONFIG(tooltip)
        radQRHIBC->setToolTip(QCoreApplication::translate("grpQR", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
        chkQRFullMultibyte->setText(QCoreApplication::translate("grpQR", "&Full Multibyte", nullptr));
#if QT_CONFIG(tooltip)
        chkQRFullMultibyte->setToolTip(QCoreApplication::translate("grpQR", "Use Kanji multibyte encoding for binary\n"
"and Latin data", nullptr));
#endif // QT_CONFIG(tooltip)
        chkQRFast->setText(QCoreApplication::translate("grpQR", "&Fast mode", nullptr));
#if QT_CONFIG(tooltip)
        chkQRFast->setToolTip(QCoreApplication::translate("grpQR", "Only try four masks (0, 2, 4, 7) not eight\n"
"when automatically selecting a mask", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxQRStructApp->setTitle(QCoreApplication::translate("grpQR", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxQRStructApp->setToolTip(QCoreApplication::translate("grpQR", "QR Code supports Structured Append of up to\n"
"16 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblQRStructAppCount->setText(QCoreApplication::translate("grpQR", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblQRStructAppCount->setToolTip(QCoreApplication::translate("grpQR", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbQRStructAppCount->setItemText(0, QCoreApplication::translate("grpQR", "Disabled", nullptr));
        cmbQRStructAppCount->setItemText(1, QCoreApplication::translate("grpQR", "2", nullptr));
        cmbQRStructAppCount->setItemText(2, QCoreApplication::translate("grpQR", "3", nullptr));
        cmbQRStructAppCount->setItemText(3, QCoreApplication::translate("grpQR", "4", nullptr));
        cmbQRStructAppCount->setItemText(4, QCoreApplication::translate("grpQR", "5", nullptr));
        cmbQRStructAppCount->setItemText(5, QCoreApplication::translate("grpQR", "6", nullptr));
        cmbQRStructAppCount->setItemText(6, QCoreApplication::translate("grpQR", "7", nullptr));
        cmbQRStructAppCount->setItemText(7, QCoreApplication::translate("grpQR", "8", nullptr));
        cmbQRStructAppCount->setItemText(8, QCoreApplication::translate("grpQR", "9", nullptr));
        cmbQRStructAppCount->setItemText(9, QCoreApplication::translate("grpQR", "10", nullptr));
        cmbQRStructAppCount->setItemText(10, QCoreApplication::translate("grpQR", "11", nullptr));
        cmbQRStructAppCount->setItemText(11, QCoreApplication::translate("grpQR", "12", nullptr));
        cmbQRStructAppCount->setItemText(12, QCoreApplication::translate("grpQR", "13", nullptr));
        cmbQRStructAppCount->setItemText(13, QCoreApplication::translate("grpQR", "14", nullptr));
        cmbQRStructAppCount->setItemText(14, QCoreApplication::translate("grpQR", "15", nullptr));
        cmbQRStructAppCount->setItemText(15, QCoreApplication::translate("grpQR", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbQRStructAppCount->setToolTip(QCoreApplication::translate("grpQR", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        lblQRStructAppIndex->setText(QCoreApplication::translate("grpQR", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblQRStructAppIndex->setToolTip(QCoreApplication::translate("grpQR", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbQRStructAppIndex->setItemText(0, QCoreApplication::translate("grpQR", "1", nullptr));
        cmbQRStructAppIndex->setItemText(1, QCoreApplication::translate("grpQR", "2", nullptr));
        cmbQRStructAppIndex->setItemText(2, QCoreApplication::translate("grpQR", "3", nullptr));
        cmbQRStructAppIndex->setItemText(3, QCoreApplication::translate("grpQR", "4", nullptr));
        cmbQRStructAppIndex->setItemText(4, QCoreApplication::translate("grpQR", "5", nullptr));
        cmbQRStructAppIndex->setItemText(5, QCoreApplication::translate("grpQR", "6", nullptr));
        cmbQRStructAppIndex->setItemText(6, QCoreApplication::translate("grpQR", "7", nullptr));
        cmbQRStructAppIndex->setItemText(7, QCoreApplication::translate("grpQR", "8", nullptr));
        cmbQRStructAppIndex->setItemText(8, QCoreApplication::translate("grpQR", "9", nullptr));
        cmbQRStructAppIndex->setItemText(9, QCoreApplication::translate("grpQR", "10", nullptr));
        cmbQRStructAppIndex->setItemText(10, QCoreApplication::translate("grpQR", "11", nullptr));
        cmbQRStructAppIndex->setItemText(11, QCoreApplication::translate("grpQR", "12", nullptr));
        cmbQRStructAppIndex->setItemText(12, QCoreApplication::translate("grpQR", "13", nullptr));
        cmbQRStructAppIndex->setItemText(13, QCoreApplication::translate("grpQR", "14", nullptr));
        cmbQRStructAppIndex->setItemText(14, QCoreApplication::translate("grpQR", "15", nullptr));
        cmbQRStructAppIndex->setItemText(15, QCoreApplication::translate("grpQR", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbQRStructAppIndex->setToolTip(QCoreApplication::translate("grpQR", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblQRStructAppID->setToolTip(QCoreApplication::translate("grpQR", "ID (parity) to indicate that symbols belong\n"
"to the same Structured Append sequence\n"
"Value ranges from 0 to 255\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblQRStructAppID->setText(QCoreApplication::translate("grpQR", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        spnQRStructAppID->setToolTip(QCoreApplication::translate("grpQR", "ID (parity) to indicate that symbols belong\n"
"to the same Structured Append sequence\n"
"Value ranges from 0 to 255\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpQR: public Ui_grpQR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPQR_H
