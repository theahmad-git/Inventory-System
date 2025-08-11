/********************************************************************************
** Form generated from reading UI file 'grpMicroPDF.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPMICROPDF_H
#define UI_GRPMICROPDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpMicroPDF
{
public:
    QVBoxLayout *verticalLayoutMPDF;
    QGridLayout *gridLayoutMPDF;
    QLabel *lblMPDFCols;
    QComboBox *cmbMPDFCols;
    QLabel *lblMPDFHeightPerRow;
    QHBoxLayout *horzLayoutMPDFHeightPerRow;
    QDoubleSpinBox *spnMPDFHeightPerRow;
    QPushButton *btnMPDFHeightPerRowDisable;
    QPushButton *btnMPDFHeightPerRowDefault;
    QLabel *lblMPDFECC;
    QLabel *lblMPDFECCMsg;
    QGroupBox *groupBoxMPDFEncodingMode;
    QGridLayout *gridLayoutMPDFEncodingMode;
    QRadioButton *radMPDFStand;
    QRadioButton *radMPDFHIBC;
    QCheckBox *chkMPDFFast;
    QGroupBox *groupBoxMPDFStructApp;
    QGridLayout *gridLayoutMPDFStructApp;
    QLabel *lblMPDFStructAppCount;
    QSpinBox *spnMPDFStructAppCount;
    QSpacerItem *horizontalSpacerMPDFStructApp;
    QLabel *lblMPDFStructAppIndex;
    QSpinBox *spnMPDFStructAppIndex;
    QLabel *lblMPDFStructAppID;
    QLineEdit *txtMPDFStructAppID;
    QSpacerItem *verticalSpacerMPDF;

    void setupUi(QWidget *grpMicroPDF)
    {
        if (grpMicroPDF->objectName().isEmpty())
            grpMicroPDF->setObjectName("grpMicroPDF");
        grpMicroPDF->resize(763, 376);
        grpMicroPDF->setMaximumSize(QSize(600, 16777215));
        verticalLayoutMPDF = new QVBoxLayout(grpMicroPDF);
        verticalLayoutMPDF->setObjectName("verticalLayoutMPDF");
        gridLayoutMPDF = new QGridLayout();
        gridLayoutMPDF->setObjectName("gridLayoutMPDF");
        lblMPDFCols = new QLabel(grpMicroPDF);
        lblMPDFCols->setObjectName("lblMPDFCols");
        lblMPDFCols->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutMPDF->addWidget(lblMPDFCols, 0, 0, 1, 1);

        cmbMPDFCols = new QComboBox(grpMicroPDF);
        cmbMPDFCols->addItem(QString());
        cmbMPDFCols->addItem(QString());
        cmbMPDFCols->addItem(QString());
        cmbMPDFCols->addItem(QString());
        cmbMPDFCols->addItem(QString());
        cmbMPDFCols->setObjectName("cmbMPDFCols");

        gridLayoutMPDF->addWidget(cmbMPDFCols, 0, 1, 1, 1);

        lblMPDFHeightPerRow = new QLabel(grpMicroPDF);
        lblMPDFHeightPerRow->setObjectName("lblMPDFHeightPerRow");
        lblMPDFHeightPerRow->setEnabled(false);
        lblMPDFHeightPerRow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutMPDF->addWidget(lblMPDFHeightPerRow, 1, 0, 1, 1);

        horzLayoutMPDFHeightPerRow = new QHBoxLayout();
        horzLayoutMPDFHeightPerRow->setObjectName("horzLayoutMPDFHeightPerRow");
        spnMPDFHeightPerRow = new QDoubleSpinBox(grpMicroPDF);
        spnMPDFHeightPerRow->setObjectName("spnMPDFHeightPerRow");
        spnMPDFHeightPerRow->setEnabled(false);
        spnMPDFHeightPerRow->setAccelerated(true);
        spnMPDFHeightPerRow->setDecimals(3);
        spnMPDFHeightPerRow->setMinimum(0.000000000000000);
        spnMPDFHeightPerRow->setMaximum(2000.000000000000000);
        spnMPDFHeightPerRow->setSingleStep(0.100000000000000);
        spnMPDFHeightPerRow->setValue(0.000000000000000);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnMPDFHeightPerRow->sizePolicy().hasHeightForWidth());
        spnMPDFHeightPerRow->setSizePolicy(sizePolicy);

        horzLayoutMPDFHeightPerRow->addWidget(spnMPDFHeightPerRow);

        btnMPDFHeightPerRowDisable = new QPushButton(grpMicroPDF);
        btnMPDFHeightPerRowDisable->setObjectName("btnMPDFHeightPerRowDisable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnMPDFHeightPerRowDisable->sizePolicy().hasHeightForWidth());
        btnMPDFHeightPerRowDisable->setSizePolicy(sizePolicy1);
        btnMPDFHeightPerRowDisable->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutMPDFHeightPerRow->addWidget(btnMPDFHeightPerRowDisable);

        btnMPDFHeightPerRowDefault = new QPushButton(grpMicroPDF);
        btnMPDFHeightPerRowDefault->setObjectName("btnMPDFHeightPerRowDefault");
        sizePolicy1.setHeightForWidth(btnMPDFHeightPerRowDefault->sizePolicy().hasHeightForWidth());
        btnMPDFHeightPerRowDefault->setSizePolicy(sizePolicy1);
        btnMPDFHeightPerRowDefault->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutMPDFHeightPerRow->addWidget(btnMPDFHeightPerRowDefault);


        gridLayoutMPDF->addLayout(horzLayoutMPDFHeightPerRow, 1, 1, 1, 1);

        lblMPDFECC = new QLabel(grpMicroPDF);
        lblMPDFECC->setObjectName("lblMPDFECC");

        gridLayoutMPDF->addWidget(lblMPDFECC, 2, 0, 1, 1);

        lblMPDFECCMsg = new QLabel(grpMicroPDF);
        lblMPDFECCMsg->setObjectName("lblMPDFECCMsg");

        gridLayoutMPDF->addWidget(lblMPDFECCMsg, 2, 1, 1, 1);


        verticalLayoutMPDF->addLayout(gridLayoutMPDF);

        groupBoxMPDFEncodingMode = new QGroupBox(grpMicroPDF);
        groupBoxMPDFEncodingMode->setObjectName("groupBoxMPDFEncodingMode");
        gridLayoutMPDFEncodingMode = new QGridLayout(groupBoxMPDFEncodingMode);
        gridLayoutMPDFEncodingMode->setObjectName("gridLayoutMPDFEncodingMode");
        gridLayoutMPDFEncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radMPDFStand = new QRadioButton(groupBoxMPDFEncodingMode);
        radMPDFStand->setObjectName("radMPDFStand");
        radMPDFStand->setChecked(true);

        gridLayoutMPDFEncodingMode->addWidget(radMPDFStand, 0, 0, 1, 1);

        radMPDFHIBC = new QRadioButton(groupBoxMPDFEncodingMode);
        radMPDFHIBC->setObjectName("radMPDFHIBC");

        gridLayoutMPDFEncodingMode->addWidget(radMPDFHIBC, 0, 1, 1, 1);


        verticalLayoutMPDF->addWidget(groupBoxMPDFEncodingMode);

        chkMPDFFast = new QCheckBox(grpMicroPDF);
        chkMPDFFast->setObjectName("chkMPDFFast");
        chkMPDFFast->setChecked(false);

        verticalLayoutMPDF->addWidget(chkMPDFFast);

        groupBoxMPDFStructApp = new QGroupBox(grpMicroPDF);
        groupBoxMPDFStructApp->setObjectName("groupBoxMPDFStructApp");
        gridLayoutMPDFStructApp = new QGridLayout(groupBoxMPDFStructApp);
        gridLayoutMPDFStructApp->setObjectName("gridLayoutMPDFStructApp");
        lblMPDFStructAppCount = new QLabel(groupBoxMPDFStructApp);
        lblMPDFStructAppCount->setObjectName("lblMPDFStructAppCount");
        lblMPDFStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutMPDFStructApp->addWidget(lblMPDFStructAppCount, 0, 0, 1, 1);

        spnMPDFStructAppCount = new QSpinBox(groupBoxMPDFStructApp);
        spnMPDFStructAppCount->setObjectName("spnMPDFStructAppCount");
        spnMPDFStructAppCount->setMinimum(1);
        spnMPDFStructAppCount->setMaximum(99999);
        spnMPDFStructAppCount->setValue(1);

        gridLayoutMPDFStructApp->addWidget(spnMPDFStructAppCount, 0, 1, 1, 1);

        horizontalSpacerMPDFStructApp = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutMPDFStructApp->addItem(horizontalSpacerMPDFStructApp, 0, 2, 1, 1);

        lblMPDFStructAppIndex = new QLabel(groupBoxMPDFStructApp);
        lblMPDFStructAppIndex->setObjectName("lblMPDFStructAppIndex");
        lblMPDFStructAppIndex->setEnabled(false);
        lblMPDFStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutMPDFStructApp->addWidget(lblMPDFStructAppIndex, 0, 3, 1, 1);

        spnMPDFStructAppIndex = new QSpinBox(groupBoxMPDFStructApp);
        spnMPDFStructAppIndex->setObjectName("spnMPDFStructAppIndex");
        spnMPDFStructAppIndex->setEnabled(false);
        spnMPDFStructAppIndex->setMinimum(1);
        spnMPDFStructAppIndex->setMaximum(99999);
        spnMPDFStructAppIndex->setValue(1);

        gridLayoutMPDFStructApp->addWidget(spnMPDFStructAppIndex, 0, 4, 1, 1);

        lblMPDFStructAppID = new QLabel(groupBoxMPDFStructApp);
        lblMPDFStructAppID->setObjectName("lblMPDFStructAppID");
        lblMPDFStructAppID->setEnabled(false);
        lblMPDFStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutMPDFStructApp->addWidget(lblMPDFStructAppID, 1, 0, 1, 1);

        txtMPDFStructAppID = new QLineEdit(groupBoxMPDFStructApp);
        txtMPDFStructAppID->setObjectName("txtMPDFStructAppID");
        txtMPDFStructAppID->setEnabled(false);
        txtMPDFStructAppID->setMaxLength(30);

        gridLayoutMPDFStructApp->addWidget(txtMPDFStructAppID, 1, 1, 1, 4);


        verticalLayoutMPDF->addWidget(groupBoxMPDFStructApp);

        verticalSpacerMPDF = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutMPDF->addItem(verticalSpacerMPDF);

#if QT_CONFIG(shortcut)
        lblMPDFCols->setBuddy(cmbMPDFCols);
        lblMPDFHeightPerRow->setBuddy(spnMPDFHeightPerRow);
        lblMPDFStructAppCount->setBuddy(spnMPDFStructAppCount);
        lblMPDFStructAppIndex->setBuddy(spnMPDFStructAppIndex);
        lblMPDFStructAppID->setBuddy(txtMPDFStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpMicroPDF);

        QMetaObject::connectSlotsByName(grpMicroPDF);
    } // setupUi

    void retranslateUi(QWidget *grpMicroPDF)
    {
        grpMicroPDF->setWindowTitle(QCoreApplication::translate("grpMicroPDF", "Form", nullptr));
        lblMPDFCols->setText(QCoreApplication::translate("grpMicroPDF", "&Number of Data Columns:", nullptr));
#if QT_CONFIG(tooltip)
        lblMPDFCols->setToolTip(QCoreApplication::translate("grpMicroPDF", "Set number of data characters in a row", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMPDFCols->setItemText(0, QCoreApplication::translate("grpMicroPDF", "Automatic", nullptr));
        cmbMPDFCols->setItemText(1, QCoreApplication::translate("grpMicroPDF", "1", nullptr));
        cmbMPDFCols->setItemText(2, QCoreApplication::translate("grpMicroPDF", "2", nullptr));
        cmbMPDFCols->setItemText(3, QCoreApplication::translate("grpMicroPDF", "3", nullptr));
        cmbMPDFCols->setItemText(4, QCoreApplication::translate("grpMicroPDF", "4", nullptr));

#if QT_CONFIG(tooltip)
        cmbMPDFCols->setToolTip(QCoreApplication::translate("grpMicroPDF", "Set number of data characters in a row", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMPDFHeightPerRow->setToolTip(QCoreApplication::translate("grpMicroPDF", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMPDFHeightPerRow->setText(QCoreApplication::translate("grpMicroPDF", "Row &Height:", nullptr));
#if QT_CONFIG(tooltip)
        spnMPDFHeightPerRow->setToolTip(QCoreApplication::translate("grpMicroPDF", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnMPDFHeightPerRow->setPrefix(QString());
        spnMPDFHeightPerRow->setSuffix(QCoreApplication::translate("grpMicroPDF", " X", nullptr));
        spnMPDFHeightPerRow->setSpecialValueText(QCoreApplication::translate("grpMicroPDF", "0 (Disabled)", nullptr));
#if QT_CONFIG(tooltip)
        btnMPDFHeightPerRowDisable->setToolTip(QCoreApplication::translate("grpMicroPDF", "Set height per row to 0\n"
"(\"Height\" in the Appearance\n"
"tab will be re-enabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMPDFHeightPerRowDisable->setText(QCoreApplication::translate("grpMicroPDF", "Disabl&e", nullptr));
#if QT_CONFIG(tooltip)
        btnMPDFHeightPerRowDefault->setToolTip(QCoreApplication::translate("grpMicroPDF", "Set height per row to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        btnMPDFHeightPerRowDefault->setText(QCoreApplication::translate("grpMicroPDF", "De&fault", nullptr));
        lblMPDFECC->setText(QCoreApplication::translate("grpMicroPDF", "Error Correction Percentage:", nullptr));
#if QT_CONFIG(tooltip)
        lblMPDFECC->setToolTip(QCoreApplication::translate("grpMicroPDF", "Percentage of codewords for error correction", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMPDFECCMsg->setText(QString());
#if QT_CONFIG(tooltip)
        lblMPDFECCMsg->setToolTip(QCoreApplication::translate("grpMicroPDF", "Percentage of codewords for error correction", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxMPDFEncodingMode->setTitle(QCoreApplication::translate("grpMicroPDF", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxMPDFEncodingMode->setToolTip(QCoreApplication::translate("grpMicroPDF", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radMPDFStand->setText(QCoreApplication::translate("grpMicroPDF", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radMPDFStand->setToolTip(QCoreApplication::translate("grpMicroPDF", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radMPDFHIBC->setText(QCoreApplication::translate("grpMicroPDF", "H&IBC", nullptr));
#if QT_CONFIG(tooltip)
        radMPDFHIBC->setToolTip(QCoreApplication::translate("grpMicroPDF", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
        chkMPDFFast->setText(QCoreApplication::translate("grpMicroPDF", "&Fast encoding", nullptr));
#if QT_CONFIG(tooltip)
        chkMPDFFast->setToolTip(QCoreApplication::translate("grpMicroPDF", "Use a faster but less optimal algorithm\n"
"for encoding the data", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxMPDFStructApp->setTitle(QCoreApplication::translate("grpMicroPDF", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxMPDFStructApp->setToolTip(QCoreApplication::translate("grpMicroPDF", "MicroPDF417 supports Structured Append of up to\n"
"99,999 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMPDFStructAppCount->setText(QCoreApplication::translate("grpMicroPDF", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblMPDFStructAppCount->setToolTip(QCoreApplication::translate("grpMicroPDF", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 1 (Disabled) to 99999", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnMPDFStructAppCount->setToolTip(QCoreApplication::translate("grpMicroPDF", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 1 (Disabled) to 99999", nullptr));
#endif // QT_CONFIG(tooltip)
        spnMPDFStructAppCount->setSpecialValueText(QCoreApplication::translate("grpMicroPDF", " 1 (Disabled)", nullptr));
        lblMPDFStructAppIndex->setText(QCoreApplication::translate("grpMicroPDF", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblMPDFStructAppIndex->setToolTip(QCoreApplication::translate("grpMicroPDF", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnMPDFStructAppIndex->setToolTip(QCoreApplication::translate("grpMicroPDF", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblMPDFStructAppID->setToolTip(QCoreApplication::translate("grpMicroPDF", "Optional ID to indicate that symbols belong to the same\n"
"Structured Append sequence\n"
"Numbers only, in triplets, maximum length 30 (10 triplets)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMPDFStructAppID->setText(QCoreApplication::translate("grpMicroPDF", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        txtMPDFStructAppID->setToolTip(QCoreApplication::translate("grpMicroPDF", "Optional ID to indicate that symbols belong to the same\n"
"Structured Append sequence\n"
"Numbers only, in triplets, maximum length 30 (10 triplets)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpMicroPDF: public Ui_grpMicroPDF {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPMICROPDF_H
