/********************************************************************************
** Form generated from reading UI file 'grpUltra.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPULTRA_H
#define UI_GRPULTRA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpUltra
{
public:
    QVBoxLayout *vLayoutUltra;
    QGridLayout *gLayoutUltra;
    QRadioButton *radUltraAuto;
    QLineEdit *txtUltraAutoInfo;
    QRadioButton *radUltraEcc;
    QComboBox *cmbUltraEcc;
    QLabel *labelUltraRevision;
    QComboBox *cmbUltraRevision;
    QGroupBox *groupBoxUltraEncodingMode;
    QGridLayout *gLayoutUltraEncodingMode;
    QRadioButton *radUltraStand;
    QRadioButton *radUltraGS1;
    QGroupBox *groupBoxUltraStructApp;
    QGridLayout *gLayoutUltraStructApp;
    QLabel *lblUltraStructAppCount;
    QComboBox *cmbUltraStructAppCount;
    QSpacerItem *spacerUltraStructApp2;
    QLabel *lblUltraStructAppIndex;
    QComboBox *cmbUltraStructAppIndex;
    QSpacerItem *spacerUltraStructApp5;
    QLabel *lblUltraStructAppID;
    QSpinBox *spnUltraStructAppID;
    QSpacerItem *vSpacerUltra;
    QButtonGroup *buttonGroupUltraSizeECC;

    void setupUi(QWidget *grpUltra)
    {
        if (grpUltra->objectName().isEmpty())
            grpUltra->setObjectName("grpUltra");
        grpUltra->resize(461, 237);
        grpUltra->setMaximumSize(QSize(600, 16777215));
        vLayoutUltra = new QVBoxLayout(grpUltra);
        vLayoutUltra->setObjectName("vLayoutUltra");
        gLayoutUltra = new QGridLayout();
        gLayoutUltra->setObjectName("gLayoutUltra");
        radUltraAuto = new QRadioButton(grpUltra);
        buttonGroupUltraSizeECC = new QButtonGroup(grpUltra);
        buttonGroupUltraSizeECC->setObjectName("buttonGroupUltraSizeECC");
        buttonGroupUltraSizeECC->addButton(radUltraAuto);
        radUltraAuto->setObjectName("radUltraAuto");
        radUltraAuto->setChecked(true);

        gLayoutUltra->addWidget(radUltraAuto, 0, 0, 1, 1);

        txtUltraAutoInfo = new QLineEdit(grpUltra);
        txtUltraAutoInfo->setObjectName("txtUltraAutoInfo");
        txtUltraAutoInfo->setFrame(false);
        txtUltraAutoInfo->setReadonly(true);

        gLayoutUltra->addWidget(txtUltraAutoInfo, 0, 1, 1, 1);

        radUltraEcc = new QRadioButton(grpUltra);
        buttonGroupUltraSizeECC->addButton(radUltraEcc);
        radUltraEcc->setObjectName("radUltraEcc");

        gLayoutUltra->addWidget(radUltraEcc, 1, 0, 1, 1);

        cmbUltraEcc = new QComboBox(grpUltra);
        cmbUltraEcc->addItem(QString());
        cmbUltraEcc->addItem(QString());
        cmbUltraEcc->addItem(QString());
        cmbUltraEcc->addItem(QString());
        cmbUltraEcc->addItem(QString());
        cmbUltraEcc->addItem(QString());
        cmbUltraEcc->setObjectName("cmbUltraEcc");
        cmbUltraEcc->setEnabled(false);

        gLayoutUltra->addWidget(cmbUltraEcc, 1, 1, 1, 1);

        labelUltraRevision = new QLabel(grpUltra);
        labelUltraRevision->setObjectName("labelUltraRevision");

        gLayoutUltra->addWidget(labelUltraRevision, 2, 0, 1, 1);

        cmbUltraRevision = new QComboBox(grpUltra);
        cmbUltraRevision->addItem(QString());
        cmbUltraRevision->addItem(QString());
        cmbUltraRevision->setObjectName("cmbUltraRevision");

        gLayoutUltra->addWidget(cmbUltraRevision, 2, 1, 1, 1);


        vLayoutUltra->addLayout(gLayoutUltra);

        groupBoxUltraEncodingMode = new QGroupBox(grpUltra);
        groupBoxUltraEncodingMode->setObjectName("groupBoxUltraEncodingMode");
        gLayoutUltraEncodingMode = new QGridLayout(groupBoxUltraEncodingMode);
        gLayoutUltraEncodingMode->setObjectName("gLayoutUltraEncodingMode");
        gLayoutUltraEncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radUltraStand = new QRadioButton(groupBoxUltraEncodingMode);
        radUltraStand->setObjectName("radUltraStand");
        radUltraStand->setChecked(true);

        gLayoutUltraEncodingMode->addWidget(radUltraStand, 0, 0, 1, 1);

        radUltraGS1 = new QRadioButton(groupBoxUltraEncodingMode);
        radUltraGS1->setObjectName("radUltraGS1");

        gLayoutUltraEncodingMode->addWidget(radUltraGS1, 0, 1, 1, 1);


        vLayoutUltra->addWidget(groupBoxUltraEncodingMode);

        groupBoxUltraStructApp = new QGroupBox(grpUltra);
        groupBoxUltraStructApp->setObjectName("groupBoxUltraStructApp");
        gLayoutUltraStructApp = new QGridLayout(groupBoxUltraStructApp);
        gLayoutUltraStructApp->setObjectName("gLayoutUltraStructApp");
        lblUltraStructAppCount = new QLabel(groupBoxUltraStructApp);
        lblUltraStructAppCount->setObjectName("lblUltraStructAppCount");
        lblUltraStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutUltraStructApp->addWidget(lblUltraStructAppCount, 0, 0, 1, 1);

        cmbUltraStructAppCount = new QComboBox(groupBoxUltraStructApp);
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->addItem(QString());
        cmbUltraStructAppCount->setObjectName("cmbUltraStructAppCount");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbUltraStructAppCount->sizePolicy().hasHeightForWidth());
        cmbUltraStructAppCount->setSizePolicy(sizePolicy);

        gLayoutUltraStructApp->addWidget(cmbUltraStructAppCount, 0, 1, 1, 1);

        spacerUltraStructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutUltraStructApp->addItem(spacerUltraStructApp2, 0, 2, 1, 1);

        lblUltraStructAppIndex = new QLabel(groupBoxUltraStructApp);
        lblUltraStructAppIndex->setObjectName("lblUltraStructAppIndex");
        lblUltraStructAppIndex->setEnabled(false);
        lblUltraStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutUltraStructApp->addWidget(lblUltraStructAppIndex, 0, 3, 1, 1);

        cmbUltraStructAppIndex = new QComboBox(groupBoxUltraStructApp);
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->addItem(QString());
        cmbUltraStructAppIndex->setObjectName("cmbUltraStructAppIndex");
        cmbUltraStructAppIndex->setEnabled(false);
        sizePolicy.setHeightForWidth(cmbUltraStructAppIndex->sizePolicy().hasHeightForWidth());
        cmbUltraStructAppIndex->setSizePolicy(sizePolicy);

        gLayoutUltraStructApp->addWidget(cmbUltraStructAppIndex, 0, 4, 1, 1);

        spacerUltraStructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutUltraStructApp->addItem(spacerUltraStructApp5, 0, 5, 1, 1);

        lblUltraStructAppID = new QLabel(groupBoxUltraStructApp);
        lblUltraStructAppID->setObjectName("lblUltraStructAppID");
        lblUltraStructAppID->setEnabled(false);
        lblUltraStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutUltraStructApp->addWidget(lblUltraStructAppID, 0, 6, 1, 1);

        spnUltraStructAppID = new QSpinBox(groupBoxUltraStructApp);
        spnUltraStructAppID->setObjectName("spnUltraStructAppID");
        spnUltraStructAppID->setEnabled(false);
        spnUltraStructAppID->setMinimum(0);
        spnUltraStructAppID->setMaximum(80088);
        spnUltraStructAppID->setValue(0);

        gLayoutUltraStructApp->addWidget(spnUltraStructAppID, 0, 7, 1, 1);


        vLayoutUltra->addWidget(groupBoxUltraStructApp);

        vSpacerUltra = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        vLayoutUltra->addItem(vSpacerUltra);

#if QT_CONFIG(shortcut)
        labelUltraRevision->setBuddy(cmbUltraRevision);
        lblUltraStructAppCount->setBuddy(cmbUltraStructAppCount);
        lblUltraStructAppIndex->setBuddy(cmbUltraStructAppIndex);
        lblUltraStructAppID->setBuddy(spnUltraStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpUltra);
        QObject::connect(radUltraEcc, &QRadioButton::toggled, cmbUltraEcc, &QComboBox::setEnabled);

        cmbUltraEcc->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(grpUltra);
    } // setupUi

    void retranslateUi(QWidget *grpUltra)
    {
        grpUltra->setWindowTitle(QCoreApplication::translate("grpUltra", "Form", nullptr));
        radUltraAuto->setText(QCoreApplication::translate("grpUltra", "Auto&matic Resizing", nullptr));
#if QT_CONFIG(tooltip)
        radUltraAuto->setToolTip(QCoreApplication::translate("grpUltra", "Size and error correction level will be set\n"
"based on data", nullptr));
#endif // QT_CONFIG(tooltip)
        radUltraEcc->setText(QCoreApplication::translate("grpUltra", "E&rror Correction Level:", nullptr));
#if QT_CONFIG(tooltip)
        radUltraEcc->setToolTip(QCoreApplication::translate("grpUltra", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUltraEcc->setItemText(0, QCoreApplication::translate("grpUltra", "ECO - Error Detection Only", nullptr));
        cmbUltraEcc->setItemText(1, QCoreApplication::translate("grpUltra", "EC1 - Approx 5%", nullptr));
        cmbUltraEcc->setItemText(2, QCoreApplication::translate("grpUltra", "EC2 - Approx 9%", nullptr));
        cmbUltraEcc->setItemText(3, QCoreApplication::translate("grpUltra", "EC3 - Approx 17%", nullptr));
        cmbUltraEcc->setItemText(4, QCoreApplication::translate("grpUltra", "EC4 - Approx 25%", nullptr));
        cmbUltraEcc->setItemText(5, QCoreApplication::translate("grpUltra", "EC5 - Approx 33%", nullptr));

#if QT_CONFIG(tooltip)
        cmbUltraEcc->setToolTip(QCoreApplication::translate("grpUltra", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        labelUltraRevision->setText(QCoreApplication::translate("grpUltra", "Rev&ision:", nullptr));
#if QT_CONFIG(tooltip)
        labelUltraRevision->setToolTip(QCoreApplication::translate("grpUltra", "Set revision to use on output", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUltraRevision->setItemText(0, QCoreApplication::translate("grpUltra", "1 (default)", nullptr));
        cmbUltraRevision->setItemText(1, QCoreApplication::translate("grpUltra", "2", nullptr));

#if QT_CONFIG(tooltip)
        cmbUltraRevision->setToolTip(QCoreApplication::translate("grpUltra", "Set revision to use on output", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxUltraEncodingMode->setTitle(QCoreApplication::translate("grpUltra", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxUltraEncodingMode->setToolTip(QCoreApplication::translate("grpUltra", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radUltraStand->setText(QCoreApplication::translate("grpUltra", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radUltraStand->setToolTip(QCoreApplication::translate("grpUltra", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radUltraGS1->setText(QCoreApplication::translate("grpUltra", "GS&1 Data Mode", nullptr));
#if QT_CONFIG(tooltip)
        radUltraGS1->setToolTip(QCoreApplication::translate("grpUltra", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxUltraStructApp->setTitle(QCoreApplication::translate("grpUltra", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxUltraStructApp->setToolTip(QCoreApplication::translate("grpUltra", "Ultracode supports Structured Append of up to\n"
"8 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUltraStructAppCount->setText(QCoreApplication::translate("grpUltra", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblUltraStructAppCount->setToolTip(QCoreApplication::translate("grpUltra", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUltraStructAppCount->setItemText(0, QCoreApplication::translate("grpUltra", "Disabled", nullptr));
        cmbUltraStructAppCount->setItemText(1, QCoreApplication::translate("grpUltra", "2", nullptr));
        cmbUltraStructAppCount->setItemText(2, QCoreApplication::translate("grpUltra", "3", nullptr));
        cmbUltraStructAppCount->setItemText(3, QCoreApplication::translate("grpUltra", "4", nullptr));
        cmbUltraStructAppCount->setItemText(4, QCoreApplication::translate("grpUltra", "5", nullptr));
        cmbUltraStructAppCount->setItemText(5, QCoreApplication::translate("grpUltra", "6", nullptr));
        cmbUltraStructAppCount->setItemText(6, QCoreApplication::translate("grpUltra", "7", nullptr));
        cmbUltraStructAppCount->setItemText(7, QCoreApplication::translate("grpUltra", "8", nullptr));

#if QT_CONFIG(tooltip)
        cmbUltraStructAppCount->setToolTip(QCoreApplication::translate("grpUltra", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 8", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUltraStructAppIndex->setText(QCoreApplication::translate("grpUltra", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblUltraStructAppIndex->setToolTip(QCoreApplication::translate("grpUltra", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUltraStructAppIndex->setItemText(0, QCoreApplication::translate("grpUltra", "1", nullptr));
        cmbUltraStructAppIndex->setItemText(1, QCoreApplication::translate("grpUltra", "2", nullptr));
        cmbUltraStructAppIndex->setItemText(2, QCoreApplication::translate("grpUltra", "3", nullptr));
        cmbUltraStructAppIndex->setItemText(3, QCoreApplication::translate("grpUltra", "4", nullptr));
        cmbUltraStructAppIndex->setItemText(4, QCoreApplication::translate("grpUltra", "5", nullptr));
        cmbUltraStructAppIndex->setItemText(5, QCoreApplication::translate("grpUltra", "6", nullptr));
        cmbUltraStructAppIndex->setItemText(6, QCoreApplication::translate("grpUltra", "7", nullptr));
        cmbUltraStructAppIndex->setItemText(7, QCoreApplication::translate("grpUltra", "8", nullptr));

#if QT_CONFIG(tooltip)
        cmbUltraStructAppIndex->setToolTip(QCoreApplication::translate("grpUltra", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblUltraStructAppID->setToolTip(QCoreApplication::translate("grpUltra", "Optional ID (File Number) to indicate that symbols\n"
"belong to the same Structured Append sequence\n"
"Value ranges from 1 to 80088\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUltraStructAppID->setText(QCoreApplication::translate("grpUltra", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        spnUltraStructAppID->setToolTip(QCoreApplication::translate("grpUltra", "Optional ID (File Number) to indicate that symbols\n"
"belong to the same Structured Append sequence\n"
"Value ranges from 1 to 80088\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnUltraStructAppID->setSpecialValueText(QCoreApplication::translate("grpUltra", "None", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grpUltra: public Ui_grpUltra {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPULTRA_H
