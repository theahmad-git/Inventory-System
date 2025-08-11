/********************************************************************************
** Form generated from reading UI file 'grpPDF417.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPPDF417_H
#define UI_GRPPDF417_H

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

class Ui_grpPDF417
{
public:
    QVBoxLayout *verticalLayoutPDF;
    QGridLayout *gridLayoutPDF;
    QLabel *lblPDFCols;
    QComboBox *cmbPDFCols;
    QLabel *lblPDFRows;
    QComboBox *cmbPDFRows;
    QLabel *lblPDFHeightPerRow;
    QHBoxLayout *horzLayoutPDFHeightPerRow;
    QDoubleSpinBox *spnPDFHeightPerRow;
    QPushButton *btnPDFHeightPerRowDisable;
    QPushButton *btnPDFHeightPerRowDefault;
    QLabel *lblPDFECC;
    QComboBox *cmbPDFECC;
    QGroupBox *groupBoxPDFEncodingMode;
    QGridLayout *gridLayoutPDFEncodingMode;
    QRadioButton *radPDFStand;
    QRadioButton *radPDFHIBC;
    QRadioButton *radPDFTruncated;
    QCheckBox *chkPDFFast;
    QGroupBox *groupBoxPDFStructApp;
    QGridLayout *gridLayoutPDFStructApp;
    QLabel *lblPDFStructAppCount;
    QSpinBox *spnPDFStructAppCount;
    QSpacerItem *horizontalSpacerPDFStructApp;
    QLabel *lblPDFStructAppIndex;
    QSpinBox *spnPDFStructAppIndex;
    QSpacerItem *spacerMaxiStructApp5;
    QLabel *lblPDFStructAppID;
    QLineEdit *txtPDFStructAppID;
    QSpacerItem *verticalSpacerPDF;

    void setupUi(QWidget *grpPDF417)
    {
        if (grpPDF417->objectName().isEmpty())
            grpPDF417->setObjectName("grpPDF417");
        grpPDF417->resize(390, 223);
        grpPDF417->setMaximumSize(QSize(600, 16777215));
        verticalLayoutPDF = new QVBoxLayout(grpPDF417);
        verticalLayoutPDF->setObjectName("verticalLayoutPDF");
        gridLayoutPDF = new QGridLayout();
        gridLayoutPDF->setObjectName("gridLayoutPDF");
        lblPDFCols = new QLabel(grpPDF417);
        lblPDFCols->setObjectName("lblPDFCols");
        lblPDFCols->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPDF->addWidget(lblPDFCols, 0, 0, 1, 1);

        cmbPDFCols = new QComboBox(grpPDF417);
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->addItem(QString());
        cmbPDFCols->setObjectName("cmbPDFCols");
        cmbPDFCols->setMaxVisibleItems(21);

        gridLayoutPDF->addWidget(cmbPDFCols, 0, 1, 1, 1);

        lblPDFRows = new QLabel(grpPDF417);
        lblPDFRows->setObjectName("lblPDFRows");
        lblPDFRows->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPDF->addWidget(lblPDFRows, 1, 0, 1, 1);

        cmbPDFRows = new QComboBox(grpPDF417);
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->addItem(QString());
        cmbPDFRows->setObjectName("cmbPDFRows");
        cmbPDFRows->setMaxVisibleItems(21);

        gridLayoutPDF->addWidget(cmbPDFRows, 1, 1, 1, 1);

        lblPDFHeightPerRow = new QLabel(grpPDF417);
        lblPDFHeightPerRow->setObjectName("lblPDFHeightPerRow");
        lblPDFHeightPerRow->setEnabled(false);
        lblPDFHeightPerRow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPDF->addWidget(lblPDFHeightPerRow, 2, 0, 1, 1);

        horzLayoutPDFHeightPerRow = new QHBoxLayout();
        horzLayoutPDFHeightPerRow->setObjectName("horzLayoutPDFHeightPerRow");
        spnPDFHeightPerRow = new QDoubleSpinBox(grpPDF417);
        spnPDFHeightPerRow->setObjectName("spnPDFHeightPerRow");
        spnPDFHeightPerRow->setEnabled(false);
        spnPDFHeightPerRow->setAccelerated(true);
        spnPDFHeightPerRow->setDecimals(3);
        spnPDFHeightPerRow->setMinimum(0.000000000000000);
        spnPDFHeightPerRow->setMaximum(2000.000000000000000);
        spnPDFHeightPerRow->setSingleStep(0.100000000000000);
        spnPDFHeightPerRow->setValue(0.000000000000000);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnPDFHeightPerRow->sizePolicy().hasHeightForWidth());
        spnPDFHeightPerRow->setSizePolicy(sizePolicy);

        horzLayoutPDFHeightPerRow->addWidget(spnPDFHeightPerRow);

        btnPDFHeightPerRowDisable = new QPushButton(grpPDF417);
        btnPDFHeightPerRowDisable->setObjectName("btnPDFHeightPerRowDisable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnPDFHeightPerRowDisable->sizePolicy().hasHeightForWidth());
        btnPDFHeightPerRowDisable->setSizePolicy(sizePolicy1);
        btnPDFHeightPerRowDisable->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutPDFHeightPerRow->addWidget(btnPDFHeightPerRowDisable);

        btnPDFHeightPerRowDefault = new QPushButton(grpPDF417);
        btnPDFHeightPerRowDefault->setObjectName("btnPDFHeightPerRowDefault");
        sizePolicy1.setHeightForWidth(btnPDFHeightPerRowDefault->sizePolicy().hasHeightForWidth());
        btnPDFHeightPerRowDefault->setSizePolicy(sizePolicy1);
        btnPDFHeightPerRowDefault->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutPDFHeightPerRow->addWidget(btnPDFHeightPerRowDefault);


        gridLayoutPDF->addLayout(horzLayoutPDFHeightPerRow, 2, 1, 1, 1);

        lblPDFECC = new QLabel(grpPDF417);
        lblPDFECC->setObjectName("lblPDFECC");
        lblPDFECC->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutPDF->addWidget(lblPDFECC, 3, 0, 1, 1);

        cmbPDFECC = new QComboBox(grpPDF417);
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->addItem(QString());
        cmbPDFECC->setObjectName("cmbPDFECC");

        gridLayoutPDF->addWidget(cmbPDFECC, 3, 1, 1, 1);


        verticalLayoutPDF->addLayout(gridLayoutPDF);

        groupBoxPDFEncodingMode = new QGroupBox(grpPDF417);
        groupBoxPDFEncodingMode->setObjectName("groupBoxPDFEncodingMode");
        gridLayoutPDFEncodingMode = new QGridLayout(groupBoxPDFEncodingMode);
        gridLayoutPDFEncodingMode->setObjectName("gridLayoutPDFEncodingMode");
        gridLayoutPDFEncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radPDFStand = new QRadioButton(groupBoxPDFEncodingMode);
        radPDFStand->setObjectName("radPDFStand");
        radPDFStand->setChecked(true);

        gridLayoutPDFEncodingMode->addWidget(radPDFStand, 0, 0, 1, 1);

        radPDFHIBC = new QRadioButton(groupBoxPDFEncodingMode);
        radPDFHIBC->setObjectName("radPDFHIBC");

        gridLayoutPDFEncodingMode->addWidget(radPDFHIBC, 0, 1, 1, 1);

        radPDFTruncated = new QRadioButton(groupBoxPDFEncodingMode);
        radPDFTruncated->setObjectName("radPDFTruncated");

        gridLayoutPDFEncodingMode->addWidget(radPDFTruncated, 0, 2, 1, 1);


        verticalLayoutPDF->addWidget(groupBoxPDFEncodingMode);

        chkPDFFast = new QCheckBox(grpPDF417);
        chkPDFFast->setObjectName("chkPDFFast");
        chkPDFFast->setChecked(false);

        verticalLayoutPDF->addWidget(chkPDFFast);

        groupBoxPDFStructApp = new QGroupBox(grpPDF417);
        groupBoxPDFStructApp->setObjectName("groupBoxPDFStructApp");
        gridLayoutPDFStructApp = new QGridLayout(groupBoxPDFStructApp);
        gridLayoutPDFStructApp->setObjectName("gridLayoutPDFStructApp");
        lblPDFStructAppCount = new QLabel(groupBoxPDFStructApp);
        lblPDFStructAppCount->setObjectName("lblPDFStructAppCount");
        lblPDFStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutPDFStructApp->addWidget(lblPDFStructAppCount, 0, 0, 1, 1);

        spnPDFStructAppCount = new QSpinBox(groupBoxPDFStructApp);
        spnPDFStructAppCount->setObjectName("spnPDFStructAppCount");
        spnPDFStructAppCount->setMinimum(1);
        spnPDFStructAppCount->setMaximum(99999);
        spnPDFStructAppCount->setValue(1);

        gridLayoutPDFStructApp->addWidget(spnPDFStructAppCount, 0, 1, 1, 1);

        horizontalSpacerPDFStructApp = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutPDFStructApp->addItem(horizontalSpacerPDFStructApp, 0, 2, 1, 1);

        lblPDFStructAppIndex = new QLabel(groupBoxPDFStructApp);
        lblPDFStructAppIndex->setObjectName("lblPDFStructAppIndex");
        lblPDFStructAppIndex->setEnabled(false);
        lblPDFStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutPDFStructApp->addWidget(lblPDFStructAppIndex, 0, 3, 1, 1);

        spnPDFStructAppIndex = new QSpinBox(groupBoxPDFStructApp);
        spnPDFStructAppIndex->setObjectName("spnPDFStructAppIndex");
        spnPDFStructAppIndex->setEnabled(false);
        spnPDFStructAppIndex->setMinimum(1);
        spnPDFStructAppIndex->setMaximum(99999);
        spnPDFStructAppIndex->setValue(1);

        gridLayoutPDFStructApp->addWidget(spnPDFStructAppIndex, 0, 4, 1, 1);

        spacerMaxiStructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayoutPDFStructApp->addItem(spacerMaxiStructApp5, 0, 5, 1, 1);

        lblPDFStructAppID = new QLabel(groupBoxPDFStructApp);
        lblPDFStructAppID->setObjectName("lblPDFStructAppID");
        lblPDFStructAppID->setEnabled(false);
        lblPDFStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gridLayoutPDFStructApp->addWidget(lblPDFStructAppID, 0, 6, 1, 1);

        txtPDFStructAppID = new QLineEdit(groupBoxPDFStructApp);
        txtPDFStructAppID->setObjectName("txtPDFStructAppID");
        txtPDFStructAppID->setEnabled(false);
        txtPDFStructAppID->setMaxLength(30);
        QSizePolicy sizePolicy2(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(txtPDFStructAppID->sizePolicy().hasHeightForWidth());
        txtPDFStructAppID->setSizePolicy(sizePolicy2);
        txtPDFStructAppID->setProperty("sizeHint", QVariant(QSize(50, 20)));

        gridLayoutPDFStructApp->addWidget(txtPDFStructAppID, 0, 7, 1, 1);


        verticalLayoutPDF->addWidget(groupBoxPDFStructApp);

        verticalSpacerPDF = new QSpacerItem(20, 52, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutPDF->addItem(verticalSpacerPDF);

#if QT_CONFIG(shortcut)
        lblPDFCols->setBuddy(cmbPDFCols);
        lblPDFRows->setBuddy(cmbPDFRows);
        lblPDFHeightPerRow->setBuddy(spnPDFHeightPerRow);
        lblPDFECC->setBuddy(cmbPDFECC);
        lblPDFStructAppCount->setBuddy(spnPDFStructAppCount);
        lblPDFStructAppIndex->setBuddy(spnPDFStructAppIndex);
        lblPDFStructAppID->setBuddy(txtPDFStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpPDF417);

        QMetaObject::connectSlotsByName(grpPDF417);
    } // setupUi

    void retranslateUi(QWidget *grpPDF417)
    {
        grpPDF417->setWindowTitle(QCoreApplication::translate("grpPDF417", "Form", nullptr));
        lblPDFCols->setText(QCoreApplication::translate("grpPDF417", "&Number of Data Columns:", nullptr));
#if QT_CONFIG(tooltip)
        lblPDFCols->setToolTip(QCoreApplication::translate("grpPDF417", "Set number of data characters in a row - may\n"
"be set to more than this depending on data", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbPDFCols->setItemText(0, QCoreApplication::translate("grpPDF417", "Automatic", nullptr));
        cmbPDFCols->setItemText(1, QCoreApplication::translate("grpPDF417", "1", nullptr));
        cmbPDFCols->setItemText(2, QCoreApplication::translate("grpPDF417", "2", nullptr));
        cmbPDFCols->setItemText(3, QCoreApplication::translate("grpPDF417", "3", nullptr));
        cmbPDFCols->setItemText(4, QCoreApplication::translate("grpPDF417", "4", nullptr));
        cmbPDFCols->setItemText(5, QCoreApplication::translate("grpPDF417", "5", nullptr));
        cmbPDFCols->setItemText(6, QCoreApplication::translate("grpPDF417", "6", nullptr));
        cmbPDFCols->setItemText(7, QCoreApplication::translate("grpPDF417", "7", nullptr));
        cmbPDFCols->setItemText(8, QCoreApplication::translate("grpPDF417", "8", nullptr));
        cmbPDFCols->setItemText(9, QCoreApplication::translate("grpPDF417", "9", nullptr));
        cmbPDFCols->setItemText(10, QCoreApplication::translate("grpPDF417", "10", nullptr));
        cmbPDFCols->setItemText(11, QCoreApplication::translate("grpPDF417", "11", nullptr));
        cmbPDFCols->setItemText(12, QCoreApplication::translate("grpPDF417", "12", nullptr));
        cmbPDFCols->setItemText(13, QCoreApplication::translate("grpPDF417", "13", nullptr));
        cmbPDFCols->setItemText(14, QCoreApplication::translate("grpPDF417", "14", nullptr));
        cmbPDFCols->setItemText(15, QCoreApplication::translate("grpPDF417", "15", nullptr));
        cmbPDFCols->setItemText(16, QCoreApplication::translate("grpPDF417", "16", nullptr));
        cmbPDFCols->setItemText(17, QCoreApplication::translate("grpPDF417", "17", nullptr));
        cmbPDFCols->setItemText(18, QCoreApplication::translate("grpPDF417", "18", nullptr));
        cmbPDFCols->setItemText(19, QCoreApplication::translate("grpPDF417", "19", nullptr));
        cmbPDFCols->setItemText(20, QCoreApplication::translate("grpPDF417", "20", nullptr));
        cmbPDFCols->setItemText(21, QCoreApplication::translate("grpPDF417", "21", nullptr));
        cmbPDFCols->setItemText(22, QCoreApplication::translate("grpPDF417", "22", nullptr));
        cmbPDFCols->setItemText(23, QCoreApplication::translate("grpPDF417", "23", nullptr));
        cmbPDFCols->setItemText(24, QCoreApplication::translate("grpPDF417", "24", nullptr));
        cmbPDFCols->setItemText(25, QCoreApplication::translate("grpPDF417", "25", nullptr));
        cmbPDFCols->setItemText(26, QCoreApplication::translate("grpPDF417", "26", nullptr));
        cmbPDFCols->setItemText(27, QCoreApplication::translate("grpPDF417", "27", nullptr));
        cmbPDFCols->setItemText(28, QCoreApplication::translate("grpPDF417", "28", nullptr));
        cmbPDFCols->setItemText(29, QCoreApplication::translate("grpPDF417", "29", nullptr));
        cmbPDFCols->setItemText(30, QCoreApplication::translate("grpPDF417", "30", nullptr));

#if QT_CONFIG(tooltip)
        cmbPDFCols->setToolTip(QCoreApplication::translate("grpPDF417", "Set number of data characters in a row - may\n"
"be set to more than this depending on data", nullptr));
#endif // QT_CONFIG(tooltip)
        lblPDFRows->setText(QCoreApplication::translate("grpPDF417", "Number of Ro&ws:", nullptr));
#if QT_CONFIG(tooltip)
        lblPDFRows->setToolTip(QCoreApplication::translate("grpPDF417", "Set number of rows - may be set to more than\n"
"this depending on data and columns setting", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbPDFRows->setItemText(0, QCoreApplication::translate("grpPDF417", "Automatic", nullptr));
        cmbPDFRows->setItemText(1, QCoreApplication::translate("grpPDF417", "3", nullptr));
        cmbPDFRows->setItemText(2, QCoreApplication::translate("grpPDF417", "4", nullptr));
        cmbPDFRows->setItemText(3, QCoreApplication::translate("grpPDF417", "5", nullptr));
        cmbPDFRows->setItemText(4, QCoreApplication::translate("grpPDF417", "6", nullptr));
        cmbPDFRows->setItemText(5, QCoreApplication::translate("grpPDF417", "7", nullptr));
        cmbPDFRows->setItemText(6, QCoreApplication::translate("grpPDF417", "8", nullptr));
        cmbPDFRows->setItemText(7, QCoreApplication::translate("grpPDF417", "9", nullptr));
        cmbPDFRows->setItemText(8, QCoreApplication::translate("grpPDF417", "10", nullptr));
        cmbPDFRows->setItemText(9, QCoreApplication::translate("grpPDF417", "11", nullptr));
        cmbPDFRows->setItemText(10, QCoreApplication::translate("grpPDF417", "12", nullptr));
        cmbPDFRows->setItemText(11, QCoreApplication::translate("grpPDF417", "13", nullptr));
        cmbPDFRows->setItemText(12, QCoreApplication::translate("grpPDF417", "14", nullptr));
        cmbPDFRows->setItemText(13, QCoreApplication::translate("grpPDF417", "15", nullptr));
        cmbPDFRows->setItemText(14, QCoreApplication::translate("grpPDF417", "16", nullptr));
        cmbPDFRows->setItemText(15, QCoreApplication::translate("grpPDF417", "17", nullptr));
        cmbPDFRows->setItemText(16, QCoreApplication::translate("grpPDF417", "18", nullptr));
        cmbPDFRows->setItemText(17, QCoreApplication::translate("grpPDF417", "19", nullptr));
        cmbPDFRows->setItemText(18, QCoreApplication::translate("grpPDF417", "20", nullptr));
        cmbPDFRows->setItemText(19, QCoreApplication::translate("grpPDF417", "21", nullptr));
        cmbPDFRows->setItemText(20, QCoreApplication::translate("grpPDF417", "22", nullptr));
        cmbPDFRows->setItemText(21, QCoreApplication::translate("grpPDF417", "23", nullptr));
        cmbPDFRows->setItemText(22, QCoreApplication::translate("grpPDF417", "24", nullptr));
        cmbPDFRows->setItemText(23, QCoreApplication::translate("grpPDF417", "25", nullptr));
        cmbPDFRows->setItemText(24, QCoreApplication::translate("grpPDF417", "26", nullptr));
        cmbPDFRows->setItemText(25, QCoreApplication::translate("grpPDF417", "27", nullptr));
        cmbPDFRows->setItemText(26, QCoreApplication::translate("grpPDF417", "28", nullptr));
        cmbPDFRows->setItemText(27, QCoreApplication::translate("grpPDF417", "29", nullptr));
        cmbPDFRows->setItemText(28, QCoreApplication::translate("grpPDF417", "30", nullptr));
        cmbPDFRows->setItemText(29, QCoreApplication::translate("grpPDF417", "31", nullptr));
        cmbPDFRows->setItemText(30, QCoreApplication::translate("grpPDF417", "32", nullptr));
        cmbPDFRows->setItemText(31, QCoreApplication::translate("grpPDF417", "33", nullptr));
        cmbPDFRows->setItemText(32, QCoreApplication::translate("grpPDF417", "34", nullptr));
        cmbPDFRows->setItemText(33, QCoreApplication::translate("grpPDF417", "35", nullptr));
        cmbPDFRows->setItemText(34, QCoreApplication::translate("grpPDF417", "36", nullptr));
        cmbPDFRows->setItemText(35, QCoreApplication::translate("grpPDF417", "37", nullptr));
        cmbPDFRows->setItemText(36, QCoreApplication::translate("grpPDF417", "38", nullptr));
        cmbPDFRows->setItemText(37, QCoreApplication::translate("grpPDF417", "39", nullptr));
        cmbPDFRows->setItemText(38, QCoreApplication::translate("grpPDF417", "40", nullptr));
        cmbPDFRows->setItemText(39, QCoreApplication::translate("grpPDF417", "41", nullptr));
        cmbPDFRows->setItemText(40, QCoreApplication::translate("grpPDF417", "42", nullptr));
        cmbPDFRows->setItemText(41, QCoreApplication::translate("grpPDF417", "43", nullptr));
        cmbPDFRows->setItemText(42, QCoreApplication::translate("grpPDF417", "44", nullptr));
        cmbPDFRows->setItemText(43, QCoreApplication::translate("grpPDF417", "45", nullptr));
        cmbPDFRows->setItemText(44, QCoreApplication::translate("grpPDF417", "46", nullptr));
        cmbPDFRows->setItemText(45, QCoreApplication::translate("grpPDF417", "47", nullptr));
        cmbPDFRows->setItemText(46, QCoreApplication::translate("grpPDF417", "48", nullptr));
        cmbPDFRows->setItemText(47, QCoreApplication::translate("grpPDF417", "49", nullptr));
        cmbPDFRows->setItemText(48, QCoreApplication::translate("grpPDF417", "50", nullptr));
        cmbPDFRows->setItemText(49, QCoreApplication::translate("grpPDF417", "51", nullptr));
        cmbPDFRows->setItemText(50, QCoreApplication::translate("grpPDF417", "52", nullptr));
        cmbPDFRows->setItemText(51, QCoreApplication::translate("grpPDF417", "53", nullptr));
        cmbPDFRows->setItemText(52, QCoreApplication::translate("grpPDF417", "54", nullptr));
        cmbPDFRows->setItemText(53, QCoreApplication::translate("grpPDF417", "55", nullptr));
        cmbPDFRows->setItemText(54, QCoreApplication::translate("grpPDF417", "56", nullptr));
        cmbPDFRows->setItemText(55, QCoreApplication::translate("grpPDF417", "57", nullptr));
        cmbPDFRows->setItemText(56, QCoreApplication::translate("grpPDF417", "58", nullptr));
        cmbPDFRows->setItemText(57, QCoreApplication::translate("grpPDF417", "59", nullptr));
        cmbPDFRows->setItemText(58, QCoreApplication::translate("grpPDF417", "60", nullptr));
        cmbPDFRows->setItemText(59, QCoreApplication::translate("grpPDF417", "61", nullptr));
        cmbPDFRows->setItemText(60, QCoreApplication::translate("grpPDF417", "62", nullptr));
        cmbPDFRows->setItemText(61, QCoreApplication::translate("grpPDF417", "63", nullptr));
        cmbPDFRows->setItemText(62, QCoreApplication::translate("grpPDF417", "64", nullptr));
        cmbPDFRows->setItemText(63, QCoreApplication::translate("grpPDF417", "65", nullptr));
        cmbPDFRows->setItemText(64, QCoreApplication::translate("grpPDF417", "66", nullptr));
        cmbPDFRows->setItemText(65, QCoreApplication::translate("grpPDF417", "67", nullptr));
        cmbPDFRows->setItemText(66, QCoreApplication::translate("grpPDF417", "68", nullptr));
        cmbPDFRows->setItemText(67, QCoreApplication::translate("grpPDF417", "69", nullptr));
        cmbPDFRows->setItemText(68, QCoreApplication::translate("grpPDF417", "70", nullptr));
        cmbPDFRows->setItemText(69, QCoreApplication::translate("grpPDF417", "71", nullptr));
        cmbPDFRows->setItemText(70, QCoreApplication::translate("grpPDF417", "72", nullptr));
        cmbPDFRows->setItemText(71, QCoreApplication::translate("grpPDF417", "73", nullptr));
        cmbPDFRows->setItemText(72, QCoreApplication::translate("grpPDF417", "74", nullptr));
        cmbPDFRows->setItemText(73, QCoreApplication::translate("grpPDF417", "75", nullptr));
        cmbPDFRows->setItemText(74, QCoreApplication::translate("grpPDF417", "76", nullptr));
        cmbPDFRows->setItemText(75, QCoreApplication::translate("grpPDF417", "77", nullptr));
        cmbPDFRows->setItemText(76, QCoreApplication::translate("grpPDF417", "78", nullptr));
        cmbPDFRows->setItemText(77, QCoreApplication::translate("grpPDF417", "79", nullptr));
        cmbPDFRows->setItemText(78, QCoreApplication::translate("grpPDF417", "80", nullptr));
        cmbPDFRows->setItemText(79, QCoreApplication::translate("grpPDF417", "81", nullptr));
        cmbPDFRows->setItemText(80, QCoreApplication::translate("grpPDF417", "82", nullptr));
        cmbPDFRows->setItemText(81, QCoreApplication::translate("grpPDF417", "83", nullptr));
        cmbPDFRows->setItemText(82, QCoreApplication::translate("grpPDF417", "84", nullptr));
        cmbPDFRows->setItemText(83, QCoreApplication::translate("grpPDF417", "85", nullptr));
        cmbPDFRows->setItemText(84, QCoreApplication::translate("grpPDF417", "86", nullptr));
        cmbPDFRows->setItemText(85, QCoreApplication::translate("grpPDF417", "87", nullptr));
        cmbPDFRows->setItemText(86, QCoreApplication::translate("grpPDF417", "88", nullptr));
        cmbPDFRows->setItemText(87, QCoreApplication::translate("grpPDF417", "89", nullptr));
        cmbPDFRows->setItemText(88, QCoreApplication::translate("grpPDF417", "90", nullptr));

#if QT_CONFIG(tooltip)
        cmbPDFRows->setToolTip(QCoreApplication::translate("grpPDF417", "Set number of rows - may be set to more than\n"
"this depending on data and columns setting", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblPDFHeightPerRow->setToolTip(QCoreApplication::translate("grpPDF417", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblPDFHeightPerRow->setText(QCoreApplication::translate("grpPDF417", "Row &Height:", nullptr));
#if QT_CONFIG(tooltip)
        spnPDFHeightPerRow->setToolTip(QCoreApplication::translate("grpPDF417", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnPDFHeightPerRow->setPrefix(QString());
        spnPDFHeightPerRow->setSuffix(QCoreApplication::translate("grpPDF417", " X", nullptr));
        spnPDFHeightPerRow->setSpecialValueText(QCoreApplication::translate("grpPDF417", "0 (Disabled)", nullptr));
#if QT_CONFIG(tooltip)
        btnPDFHeightPerRowDisable->setToolTip(QCoreApplication::translate("grpPDF417", "Set height per row to 0\n"
"(\"Height\" in the Appearance\n"
"tab will be re-enabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPDFHeightPerRowDisable->setText(QCoreApplication::translate("grpPDF417", "Disabl&e", nullptr));
#if QT_CONFIG(tooltip)
        btnPDFHeightPerRowDefault->setToolTip(QCoreApplication::translate("grpPDF417", "Set height per row to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        btnPDFHeightPerRowDefault->setText(QCoreApplication::translate("grpPDF417", "De&fault", nullptr));
        lblPDFECC->setText(QCoreApplication::translate("grpPDF417", "E&rror Correction Capacity:", nullptr));
#if QT_CONFIG(tooltip)
        lblPDFECC->setToolTip(QCoreApplication::translate("grpPDF417", "Set number of error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbPDFECC->setItemText(0, QCoreApplication::translate("grpPDF417", "Automatic", nullptr));
        cmbPDFECC->setItemText(1, QCoreApplication::translate("grpPDF417", "0 (2 words)", nullptr));
        cmbPDFECC->setItemText(2, QCoreApplication::translate("grpPDF417", "1 (4 words)", nullptr));
        cmbPDFECC->setItemText(3, QCoreApplication::translate("grpPDF417", "2 (8 words)", nullptr));
        cmbPDFECC->setItemText(4, QCoreApplication::translate("grpPDF417", "3 (16 words)", nullptr));
        cmbPDFECC->setItemText(5, QCoreApplication::translate("grpPDF417", "4 (32 words)", nullptr));
        cmbPDFECC->setItemText(6, QCoreApplication::translate("grpPDF417", "5 (64 words)", nullptr));
        cmbPDFECC->setItemText(7, QCoreApplication::translate("grpPDF417", "6 (128 words)", nullptr));
        cmbPDFECC->setItemText(8, QCoreApplication::translate("grpPDF417", "7 (256 words)", nullptr));
        cmbPDFECC->setItemText(9, QCoreApplication::translate("grpPDF417", "8 (512 words)", nullptr));

#if QT_CONFIG(tooltip)
        cmbPDFECC->setToolTip(QCoreApplication::translate("grpPDF417", "Set number of error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxPDFEncodingMode->setTitle(QCoreApplication::translate("grpPDF417", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxPDFEncodingMode->setToolTip(QCoreApplication::translate("grpPDF417", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radPDFStand->setText(QCoreApplication::translate("grpPDF417", "S&tandard", nullptr));
#if QT_CONFIG(tooltip)
        radPDFStand->setToolTip(QCoreApplication::translate("grpPDF417", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radPDFHIBC->setText(QCoreApplication::translate("grpPDF417", "H&IBC", nullptr));
#if QT_CONFIG(tooltip)
        radPDFHIBC->setToolTip(QCoreApplication::translate("grpPDF417", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
        radPDFTruncated->setText(QCoreApplication::translate("grpPDF417", "&Compact PDF417", nullptr));
#if QT_CONFIG(tooltip)
        radPDFTruncated->setToolTip(QCoreApplication::translate("grpPDF417", "Compact PDF417 (Truncated PDF417) mode omits the\n"
"right row indicators and shortens the stop pattern", nullptr));
#endif // QT_CONFIG(tooltip)
        chkPDFFast->setText(QCoreApplication::translate("grpPDF417", "&Fast encoding", nullptr));
#if QT_CONFIG(tooltip)
        chkPDFFast->setToolTip(QCoreApplication::translate("grpPDF417", "Use a faster but less optimal algorithm\n"
"for encoding the data", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxPDFStructApp->setTitle(QCoreApplication::translate("grpPDF417", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxPDFStructApp->setToolTip(QCoreApplication::translate("grpPDF417", "PDF417 supports Structured Append of up to\n"
"99,999 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblPDFStructAppCount->setText(QCoreApplication::translate("grpPDF417", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblPDFStructAppCount->setToolTip(QCoreApplication::translate("grpPDF417", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 1 (Disabled) to 99999", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnPDFStructAppCount->setToolTip(QCoreApplication::translate("grpPDF417", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 1 (Disabled) to 99999", nullptr));
#endif // QT_CONFIG(tooltip)
        spnPDFStructAppCount->setSpecialValueText(QCoreApplication::translate("grpPDF417", " 1 (Disabled)", nullptr));
        lblPDFStructAppIndex->setText(QCoreApplication::translate("grpPDF417", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblPDFStructAppIndex->setToolTip(QCoreApplication::translate("grpPDF417", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnPDFStructAppIndex->setToolTip(QCoreApplication::translate("grpPDF417", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblPDFStructAppID->setToolTip(QCoreApplication::translate("grpPDF417", "Optional ID to indicate that symbols belong to the same\n"
"Structured Append sequence\n"
"Numbers only, in triplets ranging from 000 to 899\n"
"Maximum length 30 (10 triplets)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblPDFStructAppID->setText(QCoreApplication::translate("grpPDF417", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        txtPDFStructAppID->setToolTip(QCoreApplication::translate("grpPDF417", "Optional ID to indicate that symbols belong to the same\n"
"Structured Append sequence\n"
"Numbers only, in triplets ranging from 000 to 899\n"
"Maximum length 30 (10 triplets)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpPDF417: public Ui_grpPDF417 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPPDF417_H
