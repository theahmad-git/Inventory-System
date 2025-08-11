/********************************************************************************
** Form generated from reading UI file 'grpAztec.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPAZTEC_H
#define UI_GRPAZTEC_H

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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpAztec
{
public:
    QVBoxLayout *verticalLayoutAztec;
    QGridLayout *gridLayoutAztec;
    QRadioButton *radAztecAuto;
    QLineEdit *txtAztecAutoInfo;
    QRadioButton *radAztecSize;
    QComboBox *cmbAztecSize;
    QRadioButton *radAztecECC;
    QComboBox *cmbAztecECC;
    QGroupBox *groupBoxAztecEncodingMode;
    QGridLayout *gridLayoutAztecEncodingMode;
    QRadioButton *radAztecStand;
    QRadioButton *radAztecGS1;
    QRadioButton *radAztecHIBC;
    QGroupBox *groupBoxAztecStructApp;
    QGridLayout *gridLayoutAztecStructApp;
    QLabel *lblAztecStructAppCount;
    QComboBox *cmbAztecStructAppCount;
    QSpacerItem *spacerAztecStructApp2;
    QLabel *lblAztecStructAppIndex;
    QComboBox *cmbAztecStructAppIndex;
    QLabel *lblAztecStructAppID;
    QLineEdit *txtAztecStructAppID;
    QSpacerItem *verticalSpacerAztec;
    QButtonGroup *buttonGroupAztecSizeECC;

    void setupUi(QWidget *grpAztec)
    {
        if (grpAztec->objectName().isEmpty())
            grpAztec->setObjectName("grpAztec");
        grpAztec->resize(461, 256);
        grpAztec->setMaximumSize(QSize(600, 16777215));
        verticalLayoutAztec = new QVBoxLayout(grpAztec);
        verticalLayoutAztec->setObjectName("verticalLayoutAztec");
        gridLayoutAztec = new QGridLayout();
        gridLayoutAztec->setObjectName("gridLayoutAztec");
        radAztecAuto = new QRadioButton(grpAztec);
        buttonGroupAztecSizeECC = new QButtonGroup(grpAztec);
        buttonGroupAztecSizeECC->setObjectName("buttonGroupAztecSizeECC");
        buttonGroupAztecSizeECC->addButton(radAztecAuto);
        radAztecAuto->setObjectName("radAztecAuto");
        radAztecAuto->setChecked(true);

        gridLayoutAztec->addWidget(radAztecAuto, 0, 0, 1, 1);

        txtAztecAutoInfo = new QLineEdit(grpAztec);
        txtAztecAutoInfo->setObjectName("txtAztecAutoInfo");
        txtAztecAutoInfo->setFrame(false);
        txtAztecAutoInfo->setReadonly(true);

        gridLayoutAztec->addWidget(txtAztecAutoInfo, 0, 1, 1, 1);

        radAztecSize = new QRadioButton(grpAztec);
        buttonGroupAztecSizeECC->addButton(radAztecSize);
        radAztecSize->setObjectName("radAztecSize");

        gridLayoutAztec->addWidget(radAztecSize, 1, 0, 1, 1);

        cmbAztecSize = new QComboBox(grpAztec);
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->addItem(QString());
        cmbAztecSize->setObjectName("cmbAztecSize");
        cmbAztecSize->setMaxVisibleItems(21);
        cmbAztecSize->setEnabled(false);

        gridLayoutAztec->addWidget(cmbAztecSize, 1, 1, 1, 1);

        radAztecECC = new QRadioButton(grpAztec);
        buttonGroupAztecSizeECC->addButton(radAztecECC);
        radAztecECC->setObjectName("radAztecECC");

        gridLayoutAztec->addWidget(radAztecECC, 2, 0, 1, 1);

        cmbAztecECC = new QComboBox(grpAztec);
        cmbAztecECC->addItem(QString());
        cmbAztecECC->addItem(QString());
        cmbAztecECC->addItem(QString());
        cmbAztecECC->addItem(QString());
        cmbAztecECC->setObjectName("cmbAztecECC");
        cmbAztecECC->setEnabled(false);

        gridLayoutAztec->addWidget(cmbAztecECC, 2, 1, 1, 1);


        verticalLayoutAztec->addLayout(gridLayoutAztec);

        groupBoxAztecEncodingMode = new QGroupBox(grpAztec);
        groupBoxAztecEncodingMode->setObjectName("groupBoxAztecEncodingMode");
        gridLayoutAztecEncodingMode = new QGridLayout(groupBoxAztecEncodingMode);
        gridLayoutAztecEncodingMode->setObjectName("gridLayoutAztecEncodingMode");
        gridLayoutAztecEncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radAztecStand = new QRadioButton(groupBoxAztecEncodingMode);
        radAztecStand->setObjectName("radAztecStand");
        radAztecStand->setChecked(true);

        gridLayoutAztecEncodingMode->addWidget(radAztecStand, 0, 0, 1, 1);

        radAztecGS1 = new QRadioButton(groupBoxAztecEncodingMode);
        radAztecGS1->setObjectName("radAztecGS1");

        gridLayoutAztecEncodingMode->addWidget(radAztecGS1, 0, 1, 1, 1);

        radAztecHIBC = new QRadioButton(groupBoxAztecEncodingMode);
        radAztecHIBC->setObjectName("radAztecHIBC");

        gridLayoutAztecEncodingMode->addWidget(radAztecHIBC, 0, 2, 1, 1);


        verticalLayoutAztec->addWidget(groupBoxAztecEncodingMode);

        groupBoxAztecStructApp = new QGroupBox(grpAztec);
        groupBoxAztecStructApp->setObjectName("groupBoxAztecStructApp");
        gridLayoutAztecStructApp = new QGridLayout(groupBoxAztecStructApp);
        gridLayoutAztecStructApp->setObjectName("gridLayoutAztecStructApp");
        lblAztecStructAppCount = new QLabel(groupBoxAztecStructApp);
        lblAztecStructAppCount->setObjectName("lblAztecStructAppCount");
        lblAztecStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutAztecStructApp->addWidget(lblAztecStructAppCount, 0, 0, 1, 1);

        cmbAztecStructAppCount = new QComboBox(groupBoxAztecStructApp);
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->addItem(QString());
        cmbAztecStructAppCount->setObjectName("cmbAztecStructAppCount");

        gridLayoutAztecStructApp->addWidget(cmbAztecStructAppCount, 0, 1, 1, 1);

        spacerAztecStructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutAztecStructApp->addItem(spacerAztecStructApp2, 0, 2, 1, 1);

        lblAztecStructAppIndex = new QLabel(groupBoxAztecStructApp);
        lblAztecStructAppIndex->setObjectName("lblAztecStructAppIndex");
        lblAztecStructAppIndex->setEnabled(false);
        lblAztecStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutAztecStructApp->addWidget(lblAztecStructAppIndex, 0, 3, 1, 1);

        cmbAztecStructAppIndex = new QComboBox(groupBoxAztecStructApp);
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->addItem(QString());
        cmbAztecStructAppIndex->setObjectName("cmbAztecStructAppIndex");
        cmbAztecStructAppIndex->setEnabled(false);

        gridLayoutAztecStructApp->addWidget(cmbAztecStructAppIndex, 0, 4, 1, 1);

        lblAztecStructAppID = new QLabel(groupBoxAztecStructApp);
        lblAztecStructAppID->setObjectName("lblAztecStructAppID");
        lblAztecStructAppID->setEnabled(false);
        lblAztecStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutAztecStructApp->addWidget(lblAztecStructAppID, 1, 0, 1, 1);

        txtAztecStructAppID = new QLineEdit(groupBoxAztecStructApp);
        txtAztecStructAppID->setObjectName("txtAztecStructAppID");
        txtAztecStructAppID->setEnabled(false);
        txtAztecStructAppID->setMaxLength(32);

        gridLayoutAztecStructApp->addWidget(txtAztecStructAppID, 1, 1, 1, 4);


        verticalLayoutAztec->addWidget(groupBoxAztecStructApp);

        verticalSpacerAztec = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        verticalLayoutAztec->addItem(verticalSpacerAztec);

#if QT_CONFIG(shortcut)
        lblAztecStructAppCount->setBuddy(cmbAztecStructAppCount);
        lblAztecStructAppIndex->setBuddy(cmbAztecStructAppIndex);
        lblAztecStructAppID->setBuddy(txtAztecStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpAztec);
        QObject::connect(radAztecSize, &QRadioButton::toggled, cmbAztecSize, &QComboBox::setEnabled);
        QObject::connect(radAztecECC, &QRadioButton::toggled, cmbAztecECC, &QComboBox::setEnabled);

        QMetaObject::connectSlotsByName(grpAztec);
    } // setupUi

    void retranslateUi(QWidget *grpAztec)
    {
        grpAztec->setWindowTitle(QCoreApplication::translate("grpAztec", "Form", nullptr));
        radAztecAuto->setText(QCoreApplication::translate("grpAztec", "Auto&matic Resizing", nullptr));
#if QT_CONFIG(tooltip)
        radAztecAuto->setToolTip(QCoreApplication::translate("grpAztec", "Size, type and error correction level will\n"
"be set based on data", nullptr));
#endif // QT_CONFIG(tooltip)
        radAztecSize->setText(QCoreApplication::translate("grpAztec", "Adjust Si&ze To:", nullptr));
#if QT_CONFIG(tooltip)
        radAztecSize->setToolTip(QCoreApplication::translate("grpAztec", "Set size (layers) and whether compact or not", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbAztecSize->setItemText(0, QCoreApplication::translate("grpAztec", "15 x 15 Compact (Zint 1)", nullptr));
        cmbAztecSize->setItemText(1, QCoreApplication::translate("grpAztec", "19 x 19 Compact (Zint 2)", nullptr));
        cmbAztecSize->setItemText(2, QCoreApplication::translate("grpAztec", "23 x 23 Compact (Zint 3)", nullptr));
        cmbAztecSize->setItemText(3, QCoreApplication::translate("grpAztec", "27 x 27 Compact (Zint 4)", nullptr));
        cmbAztecSize->setItemText(4, QCoreApplication::translate("grpAztec", "19 x 19 (1 Layer) (Zint 5)", nullptr));
        cmbAztecSize->setItemText(5, QCoreApplication::translate("grpAztec", "23 x 23 (2 Layers) (Zint 6)", nullptr));
        cmbAztecSize->setItemText(6, QCoreApplication::translate("grpAztec", "27 x 27 (3 Layers) (Zint 7)", nullptr));
        cmbAztecSize->setItemText(7, QCoreApplication::translate("grpAztec", "31 x 31 (4 Layers) (Zint 8)", nullptr));
        cmbAztecSize->setItemText(8, QCoreApplication::translate("grpAztec", "37 x 37 (5 Layers) (Zint 9)", nullptr));
        cmbAztecSize->setItemText(9, QCoreApplication::translate("grpAztec", "41 x 41 (6 Layers) (Zint 10)", nullptr));
        cmbAztecSize->setItemText(10, QCoreApplication::translate("grpAztec", "45 x 45 (7 Layers) (Zint 11)", nullptr));
        cmbAztecSize->setItemText(11, QCoreApplication::translate("grpAztec", "49 x 49 (8 Layers) (Zint 12)", nullptr));
        cmbAztecSize->setItemText(12, QCoreApplication::translate("grpAztec", "53 x 53 (9 Layers) (Zint 13)", nullptr));
        cmbAztecSize->setItemText(13, QCoreApplication::translate("grpAztec", "57 x 57 (10 Layers) (Zint 14)", nullptr));
        cmbAztecSize->setItemText(14, QCoreApplication::translate("grpAztec", "61 x 61 (11 Layers) (Zint 15)", nullptr));
        cmbAztecSize->setItemText(15, QCoreApplication::translate("grpAztec", "67 x 67 (12 Layers) (Zint 16)", nullptr));
        cmbAztecSize->setItemText(16, QCoreApplication::translate("grpAztec", "71 x 71 (13 Layers) (Zint 17)", nullptr));
        cmbAztecSize->setItemText(17, QCoreApplication::translate("grpAztec", "75 x 75 (14 Layers) (Zint 18)", nullptr));
        cmbAztecSize->setItemText(18, QCoreApplication::translate("grpAztec", "79 x 79 (15 Layers) (Zint 19)", nullptr));
        cmbAztecSize->setItemText(19, QCoreApplication::translate("grpAztec", "83 x 83 (16 Layers) (Zint 20)", nullptr));
        cmbAztecSize->setItemText(20, QCoreApplication::translate("grpAztec", "87 x 87 (17 Layers) (Zint 21)", nullptr));
        cmbAztecSize->setItemText(21, QCoreApplication::translate("grpAztec", "91 x 91 (18 Layers) (Zint 22)", nullptr));
        cmbAztecSize->setItemText(22, QCoreApplication::translate("grpAztec", "95 x 95 (19 Layers) (Zint 23)", nullptr));
        cmbAztecSize->setItemText(23, QCoreApplication::translate("grpAztec", "101 x 101 (20 Layers) (Zint 24)", nullptr));
        cmbAztecSize->setItemText(24, QCoreApplication::translate("grpAztec", "105 x 105 (21 Layers) (Zint 25)", nullptr));
        cmbAztecSize->setItemText(25, QCoreApplication::translate("grpAztec", "109 x 109 (22 Layers) (Zint 26)", nullptr));
        cmbAztecSize->setItemText(26, QCoreApplication::translate("grpAztec", "113 x 113 (23 Layers) (Zint 27)", nullptr));
        cmbAztecSize->setItemText(27, QCoreApplication::translate("grpAztec", "117 x 117 (24 Layers) (Zint 28)", nullptr));
        cmbAztecSize->setItemText(28, QCoreApplication::translate("grpAztec", "121 x 121 (25 Layers) (Zint 29)", nullptr));
        cmbAztecSize->setItemText(29, QCoreApplication::translate("grpAztec", "125 x 125 (26 Layers) (Zint 30)", nullptr));
        cmbAztecSize->setItemText(30, QCoreApplication::translate("grpAztec", "131 x 131 (27 Layers) (Zint 31)", nullptr));
        cmbAztecSize->setItemText(31, QCoreApplication::translate("grpAztec", "135 x 135 (28 Layers) (Zint 32)", nullptr));
        cmbAztecSize->setItemText(32, QCoreApplication::translate("grpAztec", "139 x 139 (29 Layers) (Zint 33)", nullptr));
        cmbAztecSize->setItemText(33, QCoreApplication::translate("grpAztec", "143 x 143 (30 Layers) (Zint 34)", nullptr));
        cmbAztecSize->setItemText(34, QCoreApplication::translate("grpAztec", "147 x 147 (31 Layers) (Zint 35)", nullptr));
        cmbAztecSize->setItemText(35, QCoreApplication::translate("grpAztec", "151 x 151 (32 Layers) (Zint 36)", nullptr));

#if QT_CONFIG(tooltip)
        cmbAztecSize->setToolTip(QCoreApplication::translate("grpAztec", "Set size (layers) and whether compact or not", nullptr));
#endif // QT_CONFIG(tooltip)
        radAztecECC->setText(QCoreApplication::translate("grpAztec", "Add Minimum E&rror Correction:", nullptr));
#if QT_CONFIG(tooltip)
        radAztecECC->setToolTip(QCoreApplication::translate("grpAztec", "Set minimum percentage of capacity to use\n"
"for error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbAztecECC->setItemText(0, QCoreApplication::translate("grpAztec", "10% + 3 words", nullptr));
        cmbAztecECC->setItemText(1, QCoreApplication::translate("grpAztec", "23% + 3 words", nullptr));
        cmbAztecECC->setItemText(2, QCoreApplication::translate("grpAztec", "36% + 3 words", nullptr));
        cmbAztecECC->setItemText(3, QCoreApplication::translate("grpAztec", "50% + 3 words", nullptr));

#if QT_CONFIG(tooltip)
        cmbAztecECC->setToolTip(QCoreApplication::translate("grpAztec", "Set minimum percentage of capacity to use\n"
"for error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxAztecEncodingMode->setTitle(QCoreApplication::translate("grpAztec", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxAztecEncodingMode->setToolTip(QCoreApplication::translate("grpAztec", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radAztecStand->setText(QCoreApplication::translate("grpAztec", "S&tandard", nullptr));
#if QT_CONFIG(tooltip)
        radAztecStand->setToolTip(QCoreApplication::translate("grpAztec", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radAztecGS1->setText(QCoreApplication::translate("grpAztec", "GS&1 Data", nullptr));
#if QT_CONFIG(tooltip)
        radAztecGS1->setToolTip(QCoreApplication::translate("grpAztec", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        radAztecHIBC->setText(QCoreApplication::translate("grpAztec", "H&IBC", nullptr));
#if QT_CONFIG(tooltip)
        radAztecHIBC->setToolTip(QCoreApplication::translate("grpAztec", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxAztecStructApp->setTitle(QCoreApplication::translate("grpAztec", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxAztecStructApp->setToolTip(QCoreApplication::translate("grpAztec", "Aztec Code supports Structured Append of up to\n"
"26 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblAztecStructAppCount->setText(QCoreApplication::translate("grpAztec", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblAztecStructAppCount->setToolTip(QCoreApplication::translate("grpAztec", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 26", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbAztecStructAppCount->setItemText(0, QCoreApplication::translate("grpAztec", "Disabled", nullptr));
        cmbAztecStructAppCount->setItemText(1, QCoreApplication::translate("grpAztec", "2", nullptr));
        cmbAztecStructAppCount->setItemText(2, QCoreApplication::translate("grpAztec", "3", nullptr));
        cmbAztecStructAppCount->setItemText(3, QCoreApplication::translate("grpAztec", "4", nullptr));
        cmbAztecStructAppCount->setItemText(4, QCoreApplication::translate("grpAztec", "5", nullptr));
        cmbAztecStructAppCount->setItemText(5, QCoreApplication::translate("grpAztec", "6", nullptr));
        cmbAztecStructAppCount->setItemText(6, QCoreApplication::translate("grpAztec", "7", nullptr));
        cmbAztecStructAppCount->setItemText(7, QCoreApplication::translate("grpAztec", "8", nullptr));
        cmbAztecStructAppCount->setItemText(8, QCoreApplication::translate("grpAztec", "9", nullptr));
        cmbAztecStructAppCount->setItemText(9, QCoreApplication::translate("grpAztec", "10", nullptr));
        cmbAztecStructAppCount->setItemText(10, QCoreApplication::translate("grpAztec", "11", nullptr));
        cmbAztecStructAppCount->setItemText(11, QCoreApplication::translate("grpAztec", "12", nullptr));
        cmbAztecStructAppCount->setItemText(12, QCoreApplication::translate("grpAztec", "13", nullptr));
        cmbAztecStructAppCount->setItemText(13, QCoreApplication::translate("grpAztec", "14", nullptr));
        cmbAztecStructAppCount->setItemText(14, QCoreApplication::translate("grpAztec", "15", nullptr));
        cmbAztecStructAppCount->setItemText(15, QCoreApplication::translate("grpAztec", "16", nullptr));
        cmbAztecStructAppCount->setItemText(16, QCoreApplication::translate("grpAztec", "17", nullptr));
        cmbAztecStructAppCount->setItemText(17, QCoreApplication::translate("grpAztec", "18", nullptr));
        cmbAztecStructAppCount->setItemText(18, QCoreApplication::translate("grpAztec", "19", nullptr));
        cmbAztecStructAppCount->setItemText(19, QCoreApplication::translate("grpAztec", "20", nullptr));
        cmbAztecStructAppCount->setItemText(20, QCoreApplication::translate("grpAztec", "21", nullptr));
        cmbAztecStructAppCount->setItemText(21, QCoreApplication::translate("grpAztec", "22", nullptr));
        cmbAztecStructAppCount->setItemText(22, QCoreApplication::translate("grpAztec", "23", nullptr));
        cmbAztecStructAppCount->setItemText(23, QCoreApplication::translate("grpAztec", "24", nullptr));
        cmbAztecStructAppCount->setItemText(24, QCoreApplication::translate("grpAztec", "25", nullptr));
        cmbAztecStructAppCount->setItemText(25, QCoreApplication::translate("grpAztec", "26", nullptr));

#if QT_CONFIG(tooltip)
        cmbAztecStructAppCount->setToolTip(QCoreApplication::translate("grpAztec", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 26", nullptr));
#endif // QT_CONFIG(tooltip)
        lblAztecStructAppIndex->setText(QCoreApplication::translate("grpAztec", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblAztecStructAppIndex->setToolTip(QCoreApplication::translate("grpAztec", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbAztecStructAppIndex->setItemText(0, QCoreApplication::translate("grpAztec", "1", nullptr));
        cmbAztecStructAppIndex->setItemText(1, QCoreApplication::translate("grpAztec", "2", nullptr));
        cmbAztecStructAppIndex->setItemText(2, QCoreApplication::translate("grpAztec", "3", nullptr));
        cmbAztecStructAppIndex->setItemText(3, QCoreApplication::translate("grpAztec", "4", nullptr));
        cmbAztecStructAppIndex->setItemText(4, QCoreApplication::translate("grpAztec", "5", nullptr));
        cmbAztecStructAppIndex->setItemText(5, QCoreApplication::translate("grpAztec", "6", nullptr));
        cmbAztecStructAppIndex->setItemText(6, QCoreApplication::translate("grpAztec", "7", nullptr));
        cmbAztecStructAppIndex->setItemText(7, QCoreApplication::translate("grpAztec", "8", nullptr));
        cmbAztecStructAppIndex->setItemText(8, QCoreApplication::translate("grpAztec", "9", nullptr));
        cmbAztecStructAppIndex->setItemText(9, QCoreApplication::translate("grpAztec", "10", nullptr));
        cmbAztecStructAppIndex->setItemText(10, QCoreApplication::translate("grpAztec", "11", nullptr));
        cmbAztecStructAppIndex->setItemText(11, QCoreApplication::translate("grpAztec", "12", nullptr));
        cmbAztecStructAppIndex->setItemText(12, QCoreApplication::translate("grpAztec", "13", nullptr));
        cmbAztecStructAppIndex->setItemText(13, QCoreApplication::translate("grpAztec", "14", nullptr));
        cmbAztecStructAppIndex->setItemText(14, QCoreApplication::translate("grpAztec", "15", nullptr));
        cmbAztecStructAppIndex->setItemText(15, QCoreApplication::translate("grpAztec", "16", nullptr));
        cmbAztecStructAppIndex->setItemText(16, QCoreApplication::translate("grpAztec", "17", nullptr));
        cmbAztecStructAppIndex->setItemText(17, QCoreApplication::translate("grpAztec", "18", nullptr));
        cmbAztecStructAppIndex->setItemText(18, QCoreApplication::translate("grpAztec", "19", nullptr));
        cmbAztecStructAppIndex->setItemText(19, QCoreApplication::translate("grpAztec", "20", nullptr));
        cmbAztecStructAppIndex->setItemText(20, QCoreApplication::translate("grpAztec", "21", nullptr));
        cmbAztecStructAppIndex->setItemText(21, QCoreApplication::translate("grpAztec", "22", nullptr));
        cmbAztecStructAppIndex->setItemText(22, QCoreApplication::translate("grpAztec", "23", nullptr));
        cmbAztecStructAppIndex->setItemText(23, QCoreApplication::translate("grpAztec", "24", nullptr));
        cmbAztecStructAppIndex->setItemText(24, QCoreApplication::translate("grpAztec", "25", nullptr));
        cmbAztecStructAppIndex->setItemText(25, QCoreApplication::translate("grpAztec", "26", nullptr));

#if QT_CONFIG(tooltip)
        cmbAztecStructAppIndex->setToolTip(QCoreApplication::translate("grpAztec", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblAztecStructAppID->setToolTip(QCoreApplication::translate("grpAztec", "Optional ID to indicate that symbols belong to\n"
"the same Structured Append sequence\n"
"Maximum length 32 and cannot contain spaces\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblAztecStructAppID->setText(QCoreApplication::translate("grpAztec", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        txtAztecStructAppID->setToolTip(QCoreApplication::translate("grpAztec", "Optional ID to indicate that symbols belong to\n"
"the same Structured Append sequence\n"
"Maximum length 32 and cannot contain spaces\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpAztec: public Ui_grpAztec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPAZTEC_H
