/********************************************************************************
** Form generated from reading UI file 'grpDM.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPDM_H
#define UI_GRPDM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpDM
{
public:
    QVBoxLayout *verticalLayoutDM;
    QGridLayout *gridLayoutDM;
    QLabel *lblDM200Size;
    QComboBox *cmbDM200Size;
    QLabel *lblDMAutoSize;
    QHBoxLayout *horzLayoutDMAutoSizeChecks;
    QCheckBox *chkDMRectangle;
    QCheckBox *chkDMRE;
    QGroupBox *groupBoxDM200EncodingMode;
    QGridLayout *gridLayoutDM200EncodingMode;
    QRadioButton *radDM200Stand;
    QRadioButton *radDM200GS1;
    QRadioButton *radDM200HIBC;
    QCheckBox *chkDMGSSep;
    QCheckBox *chkDMISO144;
    QCheckBox *chkDMFast;
    QGroupBox *groupBoxDMStructApp;
    QGridLayout *gridLayoutDMStructApp;
    QLabel *lblDMStructAppCount;
    QComboBox *cmbDMStructAppCount;
    QSpacerItem *spacerDMStructApp2;
    QLabel *lblDMStructAppIndex;
    QComboBox *cmbDMStructAppIndex;
    QSpacerItem *spacerDMStructApp5;
    QLabel *lblDMStructAppID;
    QSpinBox *spnDMStructAppID;
    QSpinBox *spnDMStructAppID2;
    QSpacerItem *verticalSpacerDM;

    void setupUi(QWidget *grpDM)
    {
        if (grpDM->objectName().isEmpty())
            grpDM->setObjectName("grpDM");
        grpDM->resize(463, 339);
        grpDM->setMaximumSize(QSize(600, 16777215));
        verticalLayoutDM = new QVBoxLayout(grpDM);
        verticalLayoutDM->setObjectName("verticalLayoutDM");
        gridLayoutDM = new QGridLayout();
        gridLayoutDM->setObjectName("gridLayoutDM");
        lblDM200Size = new QLabel(grpDM);
        lblDM200Size->setObjectName("lblDM200Size");

        gridLayoutDM->addWidget(lblDM200Size, 0, 0, 1, 1);

        cmbDM200Size = new QComboBox(grpDM);
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->addItem(QString());
        cmbDM200Size->setObjectName("cmbDM200Size");
        cmbDM200Size->setMaxVisibleItems(21);

        gridLayoutDM->addWidget(cmbDM200Size, 0, 1, 1, 1);

        lblDMAutoSize = new QLabel(grpDM);
        lblDMAutoSize->setObjectName("lblDMAutoSize");

        gridLayoutDM->addWidget(lblDMAutoSize, 1, 0, 1, 1);

        horzLayoutDMAutoSizeChecks = new QHBoxLayout();
        horzLayoutDMAutoSizeChecks->setObjectName("horzLayoutDMAutoSizeChecks");
        chkDMRectangle = new QCheckBox(grpDM);
        chkDMRectangle->setObjectName("chkDMRectangle");
        chkDMRectangle->setChecked(true);

        horzLayoutDMAutoSizeChecks->addWidget(chkDMRectangle);

        chkDMRE = new QCheckBox(grpDM);
        chkDMRE->setObjectName("chkDMRE");
        chkDMRE->setChecked(false);

        horzLayoutDMAutoSizeChecks->addWidget(chkDMRE);


        gridLayoutDM->addLayout(horzLayoutDMAutoSizeChecks, 1, 1, 1, 1);


        verticalLayoutDM->addLayout(gridLayoutDM);

        groupBoxDM200EncodingMode = new QGroupBox(grpDM);
        groupBoxDM200EncodingMode->setObjectName("groupBoxDM200EncodingMode");
        gridLayoutDM200EncodingMode = new QGridLayout(groupBoxDM200EncodingMode);
        gridLayoutDM200EncodingMode->setObjectName("gridLayoutDM200EncodingMode");
        gridLayoutDM200EncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radDM200Stand = new QRadioButton(groupBoxDM200EncodingMode);
        radDM200Stand->setObjectName("radDM200Stand");
        radDM200Stand->setChecked(true);

        gridLayoutDM200EncodingMode->addWidget(radDM200Stand, 0, 0, 1, 1);

        radDM200GS1 = new QRadioButton(groupBoxDM200EncodingMode);
        radDM200GS1->setObjectName("radDM200GS1");

        gridLayoutDM200EncodingMode->addWidget(radDM200GS1, 0, 1, 1, 1);

        radDM200HIBC = new QRadioButton(groupBoxDM200EncodingMode);
        radDM200HIBC->setObjectName("radDM200HIBC");

        gridLayoutDM200EncodingMode->addWidget(radDM200HIBC, 0, 2, 1, 1);


        verticalLayoutDM->addWidget(groupBoxDM200EncodingMode);

        chkDMGSSep = new QCheckBox(grpDM);
        chkDMGSSep->setObjectName("chkDMGSSep");
        chkDMGSSep->setChecked(false);

        verticalLayoutDM->addWidget(chkDMGSSep);

        chkDMISO144 = new QCheckBox(grpDM);
        chkDMISO144->setObjectName("chkDMISO144");
        chkDMISO144->setChecked(false);

        verticalLayoutDM->addWidget(chkDMISO144);

        chkDMFast = new QCheckBox(grpDM);
        chkDMFast->setObjectName("chkDMFast");
        chkDMFast->setChecked(false);

        verticalLayoutDM->addWidget(chkDMFast);

        groupBoxDMStructApp = new QGroupBox(grpDM);
        groupBoxDMStructApp->setObjectName("groupBoxDMStructApp");
        gridLayoutDMStructApp = new QGridLayout(groupBoxDMStructApp);
        gridLayoutDMStructApp->setObjectName("gridLayoutDMStructApp");
        lblDMStructAppCount = new QLabel(groupBoxDMStructApp);
        lblDMStructAppCount->setObjectName("lblDMStructAppCount");
        lblDMStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutDMStructApp->addWidget(lblDMStructAppCount, 0, 0, 1, 1);

        cmbDMStructAppCount = new QComboBox(groupBoxDMStructApp);
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->addItem(QString());
        cmbDMStructAppCount->setObjectName("cmbDMStructAppCount");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cmbDMStructAppCount->sizePolicy().hasHeightForWidth());
        cmbDMStructAppCount->setSizePolicy(sizePolicy);

        gridLayoutDMStructApp->addWidget(cmbDMStructAppCount, 0, 1, 1, 1);

        spacerDMStructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutDMStructApp->addItem(spacerDMStructApp2, 0, 2, 1, 1);

        lblDMStructAppIndex = new QLabel(groupBoxDMStructApp);
        lblDMStructAppIndex->setObjectName("lblDMStructAppIndex");
        lblDMStructAppIndex->setEnabled(false);
        lblDMStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutDMStructApp->addWidget(lblDMStructAppIndex, 0, 3, 1, 1);

        cmbDMStructAppIndex = new QComboBox(groupBoxDMStructApp);
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->addItem(QString());
        cmbDMStructAppIndex->setObjectName("cmbDMStructAppIndex");
        cmbDMStructAppIndex->setEnabled(false);
        sizePolicy.setHeightForWidth(cmbDMStructAppIndex->sizePolicy().hasHeightForWidth());
        cmbDMStructAppIndex->setSizePolicy(sizePolicy);

        gridLayoutDMStructApp->addWidget(cmbDMStructAppIndex, 0, 4, 1, 1);

        spacerDMStructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutDMStructApp->addItem(spacerDMStructApp5, 0, 5, 1, 1);

        lblDMStructAppID = new QLabel(groupBoxDMStructApp);
        lblDMStructAppID->setObjectName("lblDMStructAppID");
        lblDMStructAppID->setEnabled(false);
        lblDMStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutDMStructApp->addWidget(lblDMStructAppID, 0, 6, 1, 1);

        spnDMStructAppID = new QSpinBox(groupBoxDMStructApp);
        spnDMStructAppID->setObjectName("spnDMStructAppID");
        spnDMStructAppID->setEnabled(false);
        spnDMStructAppID->setMinimum(1);
        spnDMStructAppID->setMaximum(254);
        spnDMStructAppID->setValue(1);

        gridLayoutDMStructApp->addWidget(spnDMStructAppID, 0, 7, 1, 1);

        spnDMStructAppID2 = new QSpinBox(groupBoxDMStructApp);
        spnDMStructAppID2->setObjectName("spnDMStructAppID2");
        spnDMStructAppID2->setEnabled(false);
        spnDMStructAppID2->setMinimum(1);
        spnDMStructAppID2->setMaximum(254);
        spnDMStructAppID2->setValue(1);

        gridLayoutDMStructApp->addWidget(spnDMStructAppID2, 0, 8, 1, 1);


        verticalLayoutDM->addWidget(groupBoxDMStructApp);

        verticalSpacerDM = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutDM->addItem(verticalSpacerDM);

#if QT_CONFIG(shortcut)
        lblDM200Size->setBuddy(cmbDM200Size);
        lblDMStructAppCount->setBuddy(cmbDMStructAppCount);
        lblDMStructAppIndex->setBuddy(cmbDMStructAppIndex);
        lblDMStructAppID->setBuddy(spnDMStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpDM);

        QMetaObject::connectSlotsByName(grpDM);
    } // setupUi

    void retranslateUi(QWidget *grpDM)
    {
        grpDM->setWindowTitle(QCoreApplication::translate("grpDM", "Form", nullptr));
        lblDM200Size->setText(QCoreApplication::translate("grpDM", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        lblDM200Size->setToolTip(QCoreApplication::translate("grpDM", "Set height and width (H x W) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbDM200Size->setItemText(0, QCoreApplication::translate("grpDM", "Automatic", nullptr));
        cmbDM200Size->setItemText(1, QCoreApplication::translate("grpDM", "10 x 10 (Zint 1)", nullptr));
        cmbDM200Size->setItemText(2, QCoreApplication::translate("grpDM", "12 x 12 (Zint 2)", nullptr));
        cmbDM200Size->setItemText(3, QCoreApplication::translate("grpDM", "14 x 14 (Zint 3)", nullptr));
        cmbDM200Size->setItemText(4, QCoreApplication::translate("grpDM", "16 x 16 (Zint 4)", nullptr));
        cmbDM200Size->setItemText(5, QCoreApplication::translate("grpDM", "18 x 18 (Zint 5)", nullptr));
        cmbDM200Size->setItemText(6, QCoreApplication::translate("grpDM", "20 x 20 (Zint 6)", nullptr));
        cmbDM200Size->setItemText(7, QCoreApplication::translate("grpDM", "22 x 22 (Zint 7)", nullptr));
        cmbDM200Size->setItemText(8, QCoreApplication::translate("grpDM", "24 x 24 (Zint 8)", nullptr));
        cmbDM200Size->setItemText(9, QCoreApplication::translate("grpDM", "26 x 26 (Zint 9)", nullptr));
        cmbDM200Size->setItemText(10, QCoreApplication::translate("grpDM", "32 x 32 (Zint 10)", nullptr));
        cmbDM200Size->setItemText(11, QCoreApplication::translate("grpDM", "36 x 36 (Zint 11)", nullptr));
        cmbDM200Size->setItemText(12, QCoreApplication::translate("grpDM", "40 x 40 (Zint 12)", nullptr));
        cmbDM200Size->setItemText(13, QCoreApplication::translate("grpDM", "44 x 44 (Zint 13)", nullptr));
        cmbDM200Size->setItemText(14, QCoreApplication::translate("grpDM", "48 x 48 (Zint 14)", nullptr));
        cmbDM200Size->setItemText(15, QCoreApplication::translate("grpDM", "52 x 52 (Zint 15)", nullptr));
        cmbDM200Size->setItemText(16, QCoreApplication::translate("grpDM", "64 x 64 (Zint 16)", nullptr));
        cmbDM200Size->setItemText(17, QCoreApplication::translate("grpDM", "72 x 72 (Zint 17)", nullptr));
        cmbDM200Size->setItemText(18, QCoreApplication::translate("grpDM", "80 x 80 (Zint 18)", nullptr));
        cmbDM200Size->setItemText(19, QCoreApplication::translate("grpDM", "88 x 88 (Zint 19)", nullptr));
        cmbDM200Size->setItemText(20, QCoreApplication::translate("grpDM", "96 x 96 (Zint 20)", nullptr));
        cmbDM200Size->setItemText(21, QCoreApplication::translate("grpDM", "104 x 104 (Zint 21)", nullptr));
        cmbDM200Size->setItemText(22, QCoreApplication::translate("grpDM", "120 x 120 (Zint 22)", nullptr));
        cmbDM200Size->setItemText(23, QCoreApplication::translate("grpDM", "132 x 132 (Zint 23)", nullptr));
        cmbDM200Size->setItemText(24, QCoreApplication::translate("grpDM", "144 x 144 (Zint 24)", nullptr));
        cmbDM200Size->setItemText(25, QCoreApplication::translate("grpDM", "8 x 18 (Zint 25)", nullptr));
        cmbDM200Size->setItemText(26, QCoreApplication::translate("grpDM", "8 x 32 (Zint 26)", nullptr));
        cmbDM200Size->setItemText(27, QCoreApplication::translate("grpDM", "12 x 26 (Zint 27)", nullptr));
        cmbDM200Size->setItemText(28, QCoreApplication::translate("grpDM", "12 x 36 (Zint 28)", nullptr));
        cmbDM200Size->setItemText(29, QCoreApplication::translate("grpDM", "16 x 36 (Zint 29)", nullptr));
        cmbDM200Size->setItemText(30, QCoreApplication::translate("grpDM", "16 x 48 (Zint 30)", nullptr));
        cmbDM200Size->setItemText(31, QCoreApplication::translate("grpDM", "8 x 48 (DMRE) (Zint 31)", nullptr));
        cmbDM200Size->setItemText(32, QCoreApplication::translate("grpDM", "8 x 64 (DMRE) (Zint 32)", nullptr));
        cmbDM200Size->setItemText(33, QCoreApplication::translate("grpDM", "8 x 80 (DMRE) (Zint 33)", nullptr));
        cmbDM200Size->setItemText(34, QCoreApplication::translate("grpDM", "8 x 96 (DMRE) (Zint 34)", nullptr));
        cmbDM200Size->setItemText(35, QCoreApplication::translate("grpDM", "8 x 120 (DMRE) (Zint 35)", nullptr));
        cmbDM200Size->setItemText(36, QCoreApplication::translate("grpDM", "8 x 144 (DMRE) (Zint 36)", nullptr));
        cmbDM200Size->setItemText(37, QCoreApplication::translate("grpDM", "12 x 64 (DMRE) (Zint 37)", nullptr));
        cmbDM200Size->setItemText(38, QCoreApplication::translate("grpDM", "12 x 88 (DMRE) (Zint 38)", nullptr));
        cmbDM200Size->setItemText(39, QCoreApplication::translate("grpDM", "16 x 64 (DMRE) (Zint 39)", nullptr));
        cmbDM200Size->setItemText(40, QCoreApplication::translate("grpDM", "20 x 36 (DMRE) (Zint 40)", nullptr));
        cmbDM200Size->setItemText(41, QCoreApplication::translate("grpDM", "20 x 44 (DMRE) (Zint 41)", nullptr));
        cmbDM200Size->setItemText(42, QCoreApplication::translate("grpDM", "20 x 64 (DMRE) (Zint 42)", nullptr));
        cmbDM200Size->setItemText(43, QCoreApplication::translate("grpDM", "22 x 48 (DMRE) (Zint 43)", nullptr));
        cmbDM200Size->setItemText(44, QCoreApplication::translate("grpDM", "24 x 48 (DMRE) (Zint 44)", nullptr));
        cmbDM200Size->setItemText(45, QCoreApplication::translate("grpDM", "24 x 64 (DMRE) (Zint 45)", nullptr));
        cmbDM200Size->setItemText(46, QCoreApplication::translate("grpDM", "26 x 40 (DMRE) (Zint 46)", nullptr));
        cmbDM200Size->setItemText(47, QCoreApplication::translate("grpDM", "26 x 48 (DMRE) (Zint 47)", nullptr));
        cmbDM200Size->setItemText(48, QCoreApplication::translate("grpDM", "26 x 64 (DMRE) (Zint 48)", nullptr));

#if QT_CONFIG(tooltip)
        cmbDM200Size->setToolTip(QCoreApplication::translate("grpDM", "Set height and width (H x W) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        lblDMAutoSize->setText(QCoreApplication::translate("grpDM", "Automatic Size:", nullptr));
#if QT_CONFIG(tooltip)
        lblDMAutoSize->setToolTip(QCoreApplication::translate("grpDM", "Selection criteria when considering\n"
"automatic sizes\n"
"Normally DMRE sizes are not considered,\n"
"but other rectangular versions are\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkDMRectangle->setText(QCoreApplication::translate("grpDM", "Only Squa&re", nullptr));
#if QT_CONFIG(tooltip)
        chkDMRectangle->setToolTip(QCoreApplication::translate("grpDM", "Only consider square versions on automatic symbol\n"
"size selection, suppressing rectangular versions\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkDMRE->setText(QCoreApplication::translate("grpDM", "Allo&w DMRE", nullptr));
#if QT_CONFIG(tooltip)
        chkDMRE->setToolTip(QCoreApplication::translate("grpDM", "Consider Data Matrix Rectangular Extension (DMRE)\n"
"versions on automatic symbol size selection\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxDM200EncodingMode->setTitle(QCoreApplication::translate("grpDM", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxDM200EncodingMode->setToolTip(QCoreApplication::translate("grpDM", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radDM200Stand->setText(QCoreApplication::translate("grpDM", "S&tandard", nullptr));
#if QT_CONFIG(tooltip)
        radDM200Stand->setToolTip(QCoreApplication::translate("grpDM", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radDM200GS1->setText(QCoreApplication::translate("grpDM", "GS&1 Data", nullptr));
#if QT_CONFIG(tooltip)
        radDM200GS1->setToolTip(QCoreApplication::translate("grpDM", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        radDM200HIBC->setText(QCoreApplication::translate("grpDM", "H&IBC", nullptr));
#if QT_CONFIG(tooltip)
        radDM200HIBC->setToolTip(QCoreApplication::translate("grpDM", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
        chkDMGSSep->setText(QCoreApplication::translate("grpDM", "Use separator GS &for GS1", nullptr));
#if QT_CONFIG(tooltip)
        chkDMGSSep->setToolTip(QCoreApplication::translate("grpDM", "Use Group Separator (ASCII 0x1D) to separate GS1 AIs\n"
"instead of the preferred FNC1\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkDMISO144->setText(QCoreApplication::translate("grpDM", "Use ISO format for size 1&44 x 144", nullptr));
#if QT_CONFIG(tooltip)
        chkDMISO144->setToolTip(QCoreApplication::translate("grpDM", "Do not rotate ECC placement for 144 x 144\n"
"(Zint 24) sized symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        chkDMFast->setText(QCoreApplication::translate("grpDM", "&Fast encoding", nullptr));
#if QT_CONFIG(tooltip)
        chkDMFast->setToolTip(QCoreApplication::translate("grpDM", "Use a faster but less optimal algorithm\n"
"for encoding the data", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxDMStructApp->setTitle(QCoreApplication::translate("grpDM", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxDMStructApp->setToolTip(QCoreApplication::translate("grpDM", "Data Matrix supports Structured Append of up to\n"
"16 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblDMStructAppCount->setText(QCoreApplication::translate("grpDM", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblDMStructAppCount->setToolTip(QCoreApplication::translate("grpDM", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbDMStructAppCount->setItemText(0, QCoreApplication::translate("grpDM", "Disabled", nullptr));
        cmbDMStructAppCount->setItemText(1, QCoreApplication::translate("grpDM", "2", nullptr));
        cmbDMStructAppCount->setItemText(2, QCoreApplication::translate("grpDM", "3", nullptr));
        cmbDMStructAppCount->setItemText(3, QCoreApplication::translate("grpDM", "4", nullptr));
        cmbDMStructAppCount->setItemText(4, QCoreApplication::translate("grpDM", "5", nullptr));
        cmbDMStructAppCount->setItemText(5, QCoreApplication::translate("grpDM", "6", nullptr));
        cmbDMStructAppCount->setItemText(6, QCoreApplication::translate("grpDM", "7", nullptr));
        cmbDMStructAppCount->setItemText(7, QCoreApplication::translate("grpDM", "8", nullptr));
        cmbDMStructAppCount->setItemText(8, QCoreApplication::translate("grpDM", "9", nullptr));
        cmbDMStructAppCount->setItemText(9, QCoreApplication::translate("grpDM", "10", nullptr));
        cmbDMStructAppCount->setItemText(10, QCoreApplication::translate("grpDM", "11", nullptr));
        cmbDMStructAppCount->setItemText(11, QCoreApplication::translate("grpDM", "12", nullptr));
        cmbDMStructAppCount->setItemText(12, QCoreApplication::translate("grpDM", "13", nullptr));
        cmbDMStructAppCount->setItemText(13, QCoreApplication::translate("grpDM", "14", nullptr));
        cmbDMStructAppCount->setItemText(14, QCoreApplication::translate("grpDM", "15", nullptr));
        cmbDMStructAppCount->setItemText(15, QCoreApplication::translate("grpDM", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbDMStructAppCount->setToolTip(QCoreApplication::translate("grpDM", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        lblDMStructAppIndex->setText(QCoreApplication::translate("grpDM", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblDMStructAppIndex->setToolTip(QCoreApplication::translate("grpDM", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbDMStructAppIndex->setItemText(0, QCoreApplication::translate("grpDM", "1", nullptr));
        cmbDMStructAppIndex->setItemText(1, QCoreApplication::translate("grpDM", "2", nullptr));
        cmbDMStructAppIndex->setItemText(2, QCoreApplication::translate("grpDM", "3", nullptr));
        cmbDMStructAppIndex->setItemText(3, QCoreApplication::translate("grpDM", "4", nullptr));
        cmbDMStructAppIndex->setItemText(4, QCoreApplication::translate("grpDM", "5", nullptr));
        cmbDMStructAppIndex->setItemText(5, QCoreApplication::translate("grpDM", "6", nullptr));
        cmbDMStructAppIndex->setItemText(6, QCoreApplication::translate("grpDM", "7", nullptr));
        cmbDMStructAppIndex->setItemText(7, QCoreApplication::translate("grpDM", "8", nullptr));
        cmbDMStructAppIndex->setItemText(8, QCoreApplication::translate("grpDM", "9", nullptr));
        cmbDMStructAppIndex->setItemText(9, QCoreApplication::translate("grpDM", "10", nullptr));
        cmbDMStructAppIndex->setItemText(10, QCoreApplication::translate("grpDM", "11", nullptr));
        cmbDMStructAppIndex->setItemText(11, QCoreApplication::translate("grpDM", "12", nullptr));
        cmbDMStructAppIndex->setItemText(12, QCoreApplication::translate("grpDM", "13", nullptr));
        cmbDMStructAppIndex->setItemText(13, QCoreApplication::translate("grpDM", "14", nullptr));
        cmbDMStructAppIndex->setItemText(14, QCoreApplication::translate("grpDM", "15", nullptr));
        cmbDMStructAppIndex->setItemText(15, QCoreApplication::translate("grpDM", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbDMStructAppIndex->setToolTip(QCoreApplication::translate("grpDM", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblDMStructAppID->setToolTip(QCoreApplication::translate("grpDM", "File IDs to indicate that symbols belong to\n"
"the same Structured Append sequence\n"
"Value of each ID ranges from 1 to 254\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblDMStructAppID->setText(QCoreApplication::translate("grpDM", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        spnDMStructAppID->setToolTip(QCoreApplication::translate("grpDM", "File ID1 to indicate that symbols belong to\n"
"the same Structured Append sequence\n"
"Value ranges from 1 to 254\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnDMStructAppID2->setToolTip(QCoreApplication::translate("grpDM", "File ID2 to indicate that symbols belong to\n"
"the same Structured Append sequence\n"
"Value ranges from 1 to 254\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpDM: public Ui_grpDM {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPDM_H
