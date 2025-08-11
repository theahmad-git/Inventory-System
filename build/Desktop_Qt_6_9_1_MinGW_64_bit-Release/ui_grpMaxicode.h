/********************************************************************************
** Form generated from reading UI file 'grpMaxicode.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPMAXICODE_H
#define UI_GRPMAXICODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpMaxicode
{
public:
    QVBoxLayout *vLayoutMaxi;
    QGridLayout *gLayoutMaxi;
    QLabel *lblMaxiMode;
    QComboBox *cmbMaxiMode;
    QGroupBox *groupBoxMaxiSCM;
    QGridLayout *gLayoutMaxiSCM;
    QLabel *lblMaxiSCMPostcode;
    QLineEdit *txtMaxiSCMPostcode;
    QLabel *lblMaxiSCMCountry;
    QSpinBox *spnMaxiSCMCountry;
    QSpacerItem *spacerMaxiSCM12;
    QLabel *lblMaxiSCMService;
    QSpinBox *spnMaxiSCMService;
    QCheckBox *chkMaxiSCMVV;
    QSpacerItem *spacerMaxiSCM22;
    QLabel *lblMaxiSCMVV;
    QSpinBox *spnMaxiSCMVV;
    QGroupBox *groupBoxMaxiStructApp;
    QGridLayout *gLayoutMaxiStructApp;
    QLabel *lblMaxiStructAppCount;
    QComboBox *cmbMaxiStructAppCount;
    QSpacerItem *spacerMaxiStructApp2;
    QLabel *lblMaxiStructAppIndex;
    QComboBox *cmbMaxiStructAppIndex;
    QSpacerItem *spacerMaxiStructApp5;
    QLabel *lblMaxiStructAppIDDisabled;
    QLineEdit *txtMaxiStructAppIDDisabled;
    QSpacerItem *vSpacerMaxi;

    void setupUi(QWidget *grpMaxicode)
    {
        if (grpMaxicode->objectName().isEmpty())
            grpMaxicode->setObjectName("grpMaxicode");
        grpMaxicode->resize(532, 251);
        grpMaxicode->setMaximumSize(QSize(600, 16777215));
        vLayoutMaxi = new QVBoxLayout(grpMaxicode);
        vLayoutMaxi->setObjectName("vLayoutMaxi");
        gLayoutMaxi = new QGridLayout();
        gLayoutMaxi->setObjectName("gLayoutMaxi");
        lblMaxiMode = new QLabel(grpMaxicode);
        lblMaxiMode->setObjectName("lblMaxiMode");
        lblMaxiMode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gLayoutMaxi->addWidget(lblMaxiMode, 0, 0, 1, 1);

        cmbMaxiMode = new QComboBox(grpMaxicode);
        cmbMaxiMode->addItem(QString());
        cmbMaxiMode->addItem(QString());
        cmbMaxiMode->addItem(QString());
        cmbMaxiMode->addItem(QString());
        cmbMaxiMode->setObjectName("cmbMaxiMode");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbMaxiMode->sizePolicy().hasHeightForWidth());
        cmbMaxiMode->setSizePolicy(sizePolicy);

        gLayoutMaxi->addWidget(cmbMaxiMode, 0, 1, 1, 1);


        vLayoutMaxi->addLayout(gLayoutMaxi);

        groupBoxMaxiSCM = new QGroupBox(grpMaxicode);
        groupBoxMaxiSCM->setObjectName("groupBoxMaxiSCM");
        gLayoutMaxiSCM = new QGridLayout(groupBoxMaxiSCM);
        gLayoutMaxiSCM->setObjectName("gLayoutMaxiSCM");
        lblMaxiSCMPostcode = new QLabel(groupBoxMaxiSCM);
        lblMaxiSCMPostcode->setObjectName("lblMaxiSCMPostcode");
        lblMaxiSCMPostcode->setEnabled(false);
        lblMaxiSCMPostcode->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gLayoutMaxiSCM->addWidget(lblMaxiSCMPostcode, 0, 0, 1, 1);

        txtMaxiSCMPostcode = new QLineEdit(groupBoxMaxiSCM);
        txtMaxiSCMPostcode->setObjectName("txtMaxiSCMPostcode");
        txtMaxiSCMPostcode->setEnabled(false);
        sizePolicy.setHeightForWidth(txtMaxiSCMPostcode->sizePolicy().hasHeightForWidth());
        txtMaxiSCMPostcode->setSizePolicy(sizePolicy);
        txtMaxiSCMPostcode->setMaxLength(9);

        gLayoutMaxiSCM->addWidget(txtMaxiSCMPostcode, 0, 1, 1, 4);

        lblMaxiSCMCountry = new QLabel(groupBoxMaxiSCM);
        lblMaxiSCMCountry->setObjectName("lblMaxiSCMCountry");
        lblMaxiSCMCountry->setEnabled(false);
        lblMaxiSCMCountry->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gLayoutMaxiSCM->addWidget(lblMaxiSCMCountry, 1, 0, 1, 1);

        spnMaxiSCMCountry = new QSpinBox(groupBoxMaxiSCM);
        spnMaxiSCMCountry->setObjectName("spnMaxiSCMCountry");
        spnMaxiSCMCountry->setEnabled(false);
        spnMaxiSCMCountry->setMinimum(0);
        spnMaxiSCMCountry->setMaximum(999);
        spnMaxiSCMCountry->setValue(0);

        gLayoutMaxiSCM->addWidget(spnMaxiSCMCountry, 1, 1, 1, 1);

        spacerMaxiSCM12 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutMaxiSCM->addItem(spacerMaxiSCM12, 1, 2, 1, 1);

        lblMaxiSCMService = new QLabel(groupBoxMaxiSCM);
        lblMaxiSCMService->setObjectName("lblMaxiSCMService");
        lblMaxiSCMService->setEnabled(false);
        lblMaxiSCMService->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gLayoutMaxiSCM->addWidget(lblMaxiSCMService, 1, 3, 1, 1);

        spnMaxiSCMService = new QSpinBox(groupBoxMaxiSCM);
        spnMaxiSCMService->setObjectName("spnMaxiSCMService");
        spnMaxiSCMService->setEnabled(false);
        spnMaxiSCMService->setMinimum(0);
        spnMaxiSCMService->setMaximum(999);
        spnMaxiSCMService->setValue(0);

        gLayoutMaxiSCM->addWidget(spnMaxiSCMService, 1, 4, 1, 1);

        chkMaxiSCMVV = new QCheckBox(groupBoxMaxiSCM);
        chkMaxiSCMVV->setObjectName("chkMaxiSCMVV");
        chkMaxiSCMVV->setEnabled(false);

        gLayoutMaxiSCM->addWidget(chkMaxiSCMVV, 2, 0, 1, 2);

        spacerMaxiSCM22 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutMaxiSCM->addItem(spacerMaxiSCM22, 2, 2, 1, 1);

        lblMaxiSCMVV = new QLabel(groupBoxMaxiSCM);
        lblMaxiSCMVV->setObjectName("lblMaxiSCMVV");
        lblMaxiSCMVV->setEnabled(false);
        lblMaxiSCMVV->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gLayoutMaxiSCM->addWidget(lblMaxiSCMVV, 2, 3, 1, 1);

        spnMaxiSCMVV = new QSpinBox(groupBoxMaxiSCM);
        spnMaxiSCMVV->setObjectName("spnMaxiSCMVV");
        spnMaxiSCMVV->setEnabled(false);
        spnMaxiSCMVV->setMinimum(0);
        spnMaxiSCMVV->setMaximum(99);
        spnMaxiSCMVV->setValue(96);

        gLayoutMaxiSCM->addWidget(spnMaxiSCMVV, 2, 4, 1, 1);


        vLayoutMaxi->addWidget(groupBoxMaxiSCM);

        groupBoxMaxiStructApp = new QGroupBox(grpMaxicode);
        groupBoxMaxiStructApp->setObjectName("groupBoxMaxiStructApp");
        gLayoutMaxiStructApp = new QGridLayout(groupBoxMaxiStructApp);
        gLayoutMaxiStructApp->setObjectName("gLayoutMaxiStructApp");
        lblMaxiStructAppCount = new QLabel(groupBoxMaxiStructApp);
        lblMaxiStructAppCount->setObjectName("lblMaxiStructAppCount");
        lblMaxiStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutMaxiStructApp->addWidget(lblMaxiStructAppCount, 0, 0, 1, 1);

        cmbMaxiStructAppCount = new QComboBox(groupBoxMaxiStructApp);
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->addItem(QString());
        cmbMaxiStructAppCount->setObjectName("cmbMaxiStructAppCount");
        sizePolicy.setHeightForWidth(cmbMaxiStructAppCount->sizePolicy().hasHeightForWidth());
        cmbMaxiStructAppCount->setSizePolicy(sizePolicy);

        gLayoutMaxiStructApp->addWidget(cmbMaxiStructAppCount, 0, 1, 1, 1);

        spacerMaxiStructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutMaxiStructApp->addItem(spacerMaxiStructApp2, 0, 2, 1, 1);

        lblMaxiStructAppIndex = new QLabel(groupBoxMaxiStructApp);
        lblMaxiStructAppIndex->setObjectName("lblMaxiStructAppIndex");
        lblMaxiStructAppIndex->setEnabled(false);
        lblMaxiStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutMaxiStructApp->addWidget(lblMaxiStructAppIndex, 0, 3, 1, 1);

        cmbMaxiStructAppIndex = new QComboBox(groupBoxMaxiStructApp);
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->addItem(QString());
        cmbMaxiStructAppIndex->setObjectName("cmbMaxiStructAppIndex");
        cmbMaxiStructAppIndex->setEnabled(false);
        sizePolicy.setHeightForWidth(cmbMaxiStructAppIndex->sizePolicy().hasHeightForWidth());
        cmbMaxiStructAppIndex->setSizePolicy(sizePolicy);

        gLayoutMaxiStructApp->addWidget(cmbMaxiStructAppIndex, 0, 4, 1, 1);

        spacerMaxiStructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutMaxiStructApp->addItem(spacerMaxiStructApp5, 0, 5, 1, 1);

        lblMaxiStructAppIDDisabled = new QLabel(groupBoxMaxiStructApp);
        lblMaxiStructAppIDDisabled->setObjectName("lblMaxiStructAppIDDisabled");
        lblMaxiStructAppIDDisabled->setEnabled(false);
        lblMaxiStructAppIDDisabled->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutMaxiStructApp->addWidget(lblMaxiStructAppIDDisabled, 0, 6, 1, 1);

        txtMaxiStructAppIDDisabled = new QLineEdit(groupBoxMaxiStructApp);
        txtMaxiStructAppIDDisabled->setObjectName("txtMaxiStructAppIDDisabled");
        txtMaxiStructAppIDDisabled->setEnabled(false);
        sizePolicy.setHeightForWidth(txtMaxiStructAppIDDisabled->sizePolicy().hasHeightForWidth());
        txtMaxiStructAppIDDisabled->setSizePolicy(sizePolicy);

        gLayoutMaxiStructApp->addWidget(txtMaxiStructAppIDDisabled, 0, 7, 1, 1);


        vLayoutMaxi->addWidget(groupBoxMaxiStructApp);

        vSpacerMaxi = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vLayoutMaxi->addItem(vSpacerMaxi);

#if QT_CONFIG(shortcut)
        lblMaxiMode->setBuddy(cmbMaxiMode);
        lblMaxiSCMPostcode->setBuddy(txtMaxiSCMPostcode);
        lblMaxiSCMCountry->setBuddy(spnMaxiSCMCountry);
        lblMaxiSCMService->setBuddy(spnMaxiSCMService);
        lblMaxiSCMVV->setBuddy(spnMaxiSCMVV);
        lblMaxiStructAppCount->setBuddy(cmbMaxiStructAppCount);
        lblMaxiStructAppIndex->setBuddy(cmbMaxiStructAppIndex);
        lblMaxiStructAppIDDisabled->setBuddy(txtMaxiStructAppIDDisabled);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpMaxicode);

        cmbMaxiMode->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(grpMaxicode);
    } // setupUi

    void retranslateUi(QWidget *grpMaxicode)
    {
        grpMaxicode->setWindowTitle(QCoreApplication::translate("grpMaxicode", "Form", nullptr));
        lblMaxiMode->setText(QCoreApplication::translate("grpMaxicode", "Encoding &Mode:", nullptr));
#if QT_CONFIG(tooltip)
        lblMaxiMode->setToolTip(QCoreApplication::translate("grpMaxicode", "Mode 2 (numeric postcode) and Mode 3 (alphanumeric postcode)\n"
"use a Structured Carrier Message (SCM) of 3 fields:\n"
"Postcode, Country Code, Service Class\n"
"Mode 4 uses enhanced ECC for the primary part of the message\n"
"Mode 5 uses enhanced ECC for all of the message\n"
"Mode 6 sets the scanner (Reader Initialisation/Programming)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMaxiMode->setItemText(0, QCoreApplication::translate("grpMaxicode", "Structured Carrier Message (Mode 2 or 3)", nullptr));
        cmbMaxiMode->setItemText(1, QCoreApplication::translate("grpMaxicode", "Standard Symbol, SEC (Mode 4)", nullptr));
        cmbMaxiMode->setItemText(2, QCoreApplication::translate("grpMaxicode", "Full ECC Symbol (Mode 5)", nullptr));
        cmbMaxiMode->setItemText(3, QCoreApplication::translate("grpMaxicode", "Reader Program, SEC (Mode 6)", nullptr));

#if QT_CONFIG(tooltip)
        cmbMaxiMode->setToolTip(QCoreApplication::translate("grpMaxicode", "Mode 2 (numeric postcode) and Mode 3 (alphanumeric postcode)\n"
"use a Structured Carrier Message (SCM) of 3 fields:\n"
"Postcode, Country Code, Service Class\n"
"Mode 4 uses enhanced ECC for the primary part of the message\n"
"Mode 5 uses enhanced ECC for all of the message\n"
"Mode 6 sets the scanner (Reader Initialisation/Programming)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxMaxiSCM->setTitle(QCoreApplication::translate("grpMaxicode", "Structured Carrier Message", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxMaxiSCM->setToolTip(QCoreApplication::translate("grpMaxicode", "For Modes 2 and 3 only", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMaxiSCMPostcode->setToolTip(QCoreApplication::translate("grpMaxicode", "Postcode of up to 9 digits for Mode 2 or\n"
"6 alphanumerics for Mode 3 (will truncate)\n"
"Mode 3 postcodes less than maximum\n"
"length will be padded with spaces\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiSCMPostcode->setText(QCoreApplication::translate("grpMaxicode", "Pos&tcode:", nullptr));
#if QT_CONFIG(tooltip)
        txtMaxiSCMPostcode->setToolTip(QCoreApplication::translate("grpMaxicode", "Postcode of up to 9 digits for Mode 2 or\n"
"6 alphanumerics for Mode 3 (will truncate)\n"
"Mode 3 postcodes less than maximum\n"
"length will be padded with spaces\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMaxiSCMCountry->setToolTip(QCoreApplication::translate("grpMaxicode", "ISO 3166-1 numeric country code\n"
"Value ranges from 000 to 999\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiSCMCountry->setText(QCoreApplication::translate("grpMaxicode", "Cou&ntry code:", nullptr));
#if QT_CONFIG(tooltip)
        spnMaxiSCMCountry->setToolTip(QCoreApplication::translate("grpMaxicode", "ISO 3166-1 numeric country code\n"
"Value ranges from 000 to 999\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnMaxiSCMCountry->setSuffix(QString());
        spnMaxiSCMCountry->setPrefix(QString());
#if QT_CONFIG(tooltip)
        lblMaxiSCMService->setToolTip(QCoreApplication::translate("grpMaxicode", "Class of service, assigned by carrier\n"
"Value ranges from 000 to 999\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiSCMService->setText(QCoreApplication::translate("grpMaxicode", "Se&rvice Class:", nullptr));
#if QT_CONFIG(tooltip)
        spnMaxiSCMService->setToolTip(QCoreApplication::translate("grpMaxicode", "Class of service, assigned by carrier\n"
"Value ranges from 000 to 999\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnMaxiSCMService->setSuffix(QString());
        spnMaxiSCMService->setPrefix(QString());
#if QT_CONFIG(tooltip)
        chkMaxiSCMVV->setToolTip(QCoreApplication::translate("grpMaxicode", "Prefix Structured Carrier Message with \"[)>\\R01\\Gvv\"\n"
"(ANS MH10.8.2 Format 01) where \"vv\" is version\n"
"specified as follows\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkMaxiSCMVV->setText(QCoreApplication::translate("grpMaxicode", "Enable S&CM Prefix", nullptr));
#if QT_CONFIG(tooltip)
        lblMaxiSCMVV->setToolTip(QCoreApplication::translate("grpMaxicode", "Version \"vv\" to place at end of SCM prefix (default 96)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiSCMVV->setText(QCoreApplication::translate("grpMaxicode", "SCM Pre&fix Version:", nullptr));
#if QT_CONFIG(tooltip)
        spnMaxiSCMVV->setToolTip(QCoreApplication::translate("grpMaxicode", "Version \"vv\" to place at end of SCM prefix (default 96)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnMaxiSCMVV->setSuffix(QString());
        spnMaxiSCMVV->setPrefix(QString());
        groupBoxMaxiStructApp->setTitle(QCoreApplication::translate("grpMaxicode", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxMaxiStructApp->setToolTip(QCoreApplication::translate("grpMaxicode", "MaxiCode supports Structured Append of up to\n"
"8 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMaxiStructAppCount->setToolTip(QCoreApplication::translate("grpMaxicode", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 8", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiStructAppCount->setText(QCoreApplication::translate("grpMaxicode", "C&ount:", nullptr));
        cmbMaxiStructAppCount->setItemText(0, QCoreApplication::translate("grpMaxicode", "Disabled", nullptr));
        cmbMaxiStructAppCount->setItemText(1, QCoreApplication::translate("grpMaxicode", "2", nullptr));
        cmbMaxiStructAppCount->setItemText(2, QCoreApplication::translate("grpMaxicode", "3", nullptr));
        cmbMaxiStructAppCount->setItemText(3, QCoreApplication::translate("grpMaxicode", "4", nullptr));
        cmbMaxiStructAppCount->setItemText(4, QCoreApplication::translate("grpMaxicode", "5", nullptr));
        cmbMaxiStructAppCount->setItemText(5, QCoreApplication::translate("grpMaxicode", "6", nullptr));
        cmbMaxiStructAppCount->setItemText(6, QCoreApplication::translate("grpMaxicode", "7", nullptr));
        cmbMaxiStructAppCount->setItemText(7, QCoreApplication::translate("grpMaxicode", "8", nullptr));

#if QT_CONFIG(tooltip)
        cmbMaxiStructAppCount->setToolTip(QCoreApplication::translate("grpMaxicode", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 8", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMaxiStructAppIndex->setToolTip(QCoreApplication::translate("grpMaxicode", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiStructAppIndex->setText(QCoreApplication::translate("grpMaxicode", "Inde&x:", nullptr));
        cmbMaxiStructAppIndex->setItemText(0, QCoreApplication::translate("grpMaxicode", "1", nullptr));
        cmbMaxiStructAppIndex->setItemText(1, QCoreApplication::translate("grpMaxicode", "2", nullptr));
        cmbMaxiStructAppIndex->setItemText(2, QCoreApplication::translate("grpMaxicode", "3", nullptr));
        cmbMaxiStructAppIndex->setItemText(3, QCoreApplication::translate("grpMaxicode", "4", nullptr));
        cmbMaxiStructAppIndex->setItemText(4, QCoreApplication::translate("grpMaxicode", "5", nullptr));
        cmbMaxiStructAppIndex->setItemText(5, QCoreApplication::translate("grpMaxicode", "6", nullptr));
        cmbMaxiStructAppIndex->setItemText(6, QCoreApplication::translate("grpMaxicode", "7", nullptr));
        cmbMaxiStructAppIndex->setItemText(7, QCoreApplication::translate("grpMaxicode", "8", nullptr));

#if QT_CONFIG(tooltip)
        cmbMaxiStructAppIndex->setToolTip(QCoreApplication::translate("grpMaxicode", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMaxiStructAppIDDisabled->setToolTip(QCoreApplication::translate("grpMaxicode", "Structured Append ID not available for MaxiCode", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMaxiStructAppIDDisabled->setText(QCoreApplication::translate("grpMaxicode", "ID:", nullptr));
#if QT_CONFIG(tooltip)
        txtMaxiStructAppIDDisabled->setToolTip(QCoreApplication::translate("grpMaxicode", "Structured Append ID not available for MaxiCode", nullptr));
#endif // QT_CONFIG(tooltip)
        txtMaxiStructAppIDDisabled->setText(QCoreApplication::translate("grpMaxicode", "N/A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grpMaxicode: public Ui_grpMaxicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPMAXICODE_H
