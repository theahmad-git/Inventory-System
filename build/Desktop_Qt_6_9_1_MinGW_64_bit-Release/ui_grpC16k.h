/********************************************************************************
** Form generated from reading UI file 'grpC16k.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC16K_H
#define UI_GRPC16K_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpC16k
{
public:
    QVBoxLayout *verticalLayoutC16k;
    QGridLayout *gridLayoutC16k;
    QLabel *lblC16kRows;
    QComboBox *cmbC16kRows;
    QLabel *lblC16kHeightPerRow;
    QHBoxLayout *horzLayoutC16kHeightPerRow;
    QDoubleSpinBox *spnC16kHeightPerRow;
    QPushButton *btnC16kHeightPerRowDisable;
    QPushButton *btnC16kHeightPerRowDefault;
    QLabel *lblC16kRowSepHeight;
    QComboBox *cmbC16kRowSepHeight;
    QGroupBox *groupBoxC16kEncodingMode;
    QGridLayout *gridLayoutC16kEncodingMode;
    QRadioButton *radC16kStand;
    QRadioButton *radC16kGS1;
    QCheckBox *chkC16kNoQuietZones;
    QSpacerItem *verticalSpacerC16k;

    void setupUi(QWidget *grpC16k)
    {
        if (grpC16k->objectName().isEmpty())
            grpC16k->setObjectName("grpC16k");
        grpC16k->resize(186, 123);
        grpC16k->setMaximumSize(QSize(600, 16777215));
        verticalLayoutC16k = new QVBoxLayout(grpC16k);
        verticalLayoutC16k->setObjectName("verticalLayoutC16k");
        gridLayoutC16k = new QGridLayout();
        gridLayoutC16k->setObjectName("gridLayoutC16k");
        lblC16kRows = new QLabel(grpC16k);
        lblC16kRows->setObjectName("lblC16kRows");

        gridLayoutC16k->addWidget(lblC16kRows, 0, 0, 1, 1);

        cmbC16kRows = new QComboBox(grpC16k);
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->addItem(QString());
        cmbC16kRows->setObjectName("cmbC16kRows");
        cmbC16kRows->setMaxVisibleItems(16);

        gridLayoutC16k->addWidget(cmbC16kRows, 0, 1, 1, 1);

        lblC16kHeightPerRow = new QLabel(grpC16k);
        lblC16kHeightPerRow->setObjectName("lblC16kHeightPerRow");
        lblC16kHeightPerRow->setEnabled(false);
        lblC16kHeightPerRow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutC16k->addWidget(lblC16kHeightPerRow, 1, 0, 1, 1);

        horzLayoutC16kHeightPerRow = new QHBoxLayout();
        horzLayoutC16kHeightPerRow->setObjectName("horzLayoutC16kHeightPerRow");
        spnC16kHeightPerRow = new QDoubleSpinBox(grpC16k);
        spnC16kHeightPerRow->setObjectName("spnC16kHeightPerRow");
        spnC16kHeightPerRow->setEnabled(false);
        spnC16kHeightPerRow->setAccelerated(true);
        spnC16kHeightPerRow->setDecimals(3);
        spnC16kHeightPerRow->setMinimum(0.000000000000000);
        spnC16kHeightPerRow->setMaximum(2000.000000000000000);
        spnC16kHeightPerRow->setSingleStep(0.100000000000000);
        spnC16kHeightPerRow->setValue(0.000000000000000);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnC16kHeightPerRow->sizePolicy().hasHeightForWidth());
        spnC16kHeightPerRow->setSizePolicy(sizePolicy);

        horzLayoutC16kHeightPerRow->addWidget(spnC16kHeightPerRow);

        btnC16kHeightPerRowDisable = new QPushButton(grpC16k);
        btnC16kHeightPerRowDisable->setObjectName("btnC16kHeightPerRowDisable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnC16kHeightPerRowDisable->sizePolicy().hasHeightForWidth());
        btnC16kHeightPerRowDisable->setSizePolicy(sizePolicy1);
        btnC16kHeightPerRowDisable->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutC16kHeightPerRow->addWidget(btnC16kHeightPerRowDisable);

        btnC16kHeightPerRowDefault = new QPushButton(grpC16k);
        btnC16kHeightPerRowDefault->setObjectName("btnC16kHeightPerRowDefault");
        sizePolicy1.setHeightForWidth(btnC16kHeightPerRowDefault->sizePolicy().hasHeightForWidth());
        btnC16kHeightPerRowDefault->setSizePolicy(sizePolicy1);
        btnC16kHeightPerRowDefault->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutC16kHeightPerRow->addWidget(btnC16kHeightPerRowDefault);


        gridLayoutC16k->addLayout(horzLayoutC16kHeightPerRow, 1, 1, 1, 1);

        lblC16kRowSepHeight = new QLabel(grpC16k);
        lblC16kRowSepHeight->setObjectName("lblC16kRowSepHeight");

        gridLayoutC16k->addWidget(lblC16kRowSepHeight, 2, 0, 1, 1);

        cmbC16kRowSepHeight = new QComboBox(grpC16k);
        cmbC16kRowSepHeight->addItem(QString());
        cmbC16kRowSepHeight->addItem(QString());
        cmbC16kRowSepHeight->addItem(QString());
        cmbC16kRowSepHeight->addItem(QString());
        cmbC16kRowSepHeight->setObjectName("cmbC16kRowSepHeight");

        gridLayoutC16k->addWidget(cmbC16kRowSepHeight, 2, 1, 1, 1);


        verticalLayoutC16k->addLayout(gridLayoutC16k);

        groupBoxC16kEncodingMode = new QGroupBox(grpC16k);
        groupBoxC16kEncodingMode->setObjectName("groupBoxC16kEncodingMode");
        gridLayoutC16kEncodingMode = new QGridLayout(groupBoxC16kEncodingMode);
        gridLayoutC16kEncodingMode->setObjectName("gridLayoutC16kEncodingMode");
        gridLayoutC16kEncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radC16kStand = new QRadioButton(groupBoxC16kEncodingMode);
        radC16kStand->setObjectName("radC16kStand");
        radC16kStand->setChecked(true);

        gridLayoutC16kEncodingMode->addWidget(radC16kStand, 0, 0, 1, 1);

        radC16kGS1 = new QRadioButton(groupBoxC16kEncodingMode);
        radC16kGS1->setObjectName("radC16kGS1");

        gridLayoutC16kEncodingMode->addWidget(radC16kGS1, 0, 1, 1, 1);


        verticalLayoutC16k->addWidget(groupBoxC16kEncodingMode);

        chkC16kNoQuietZones = new QCheckBox(grpC16k);
        chkC16kNoQuietZones->setObjectName("chkC16kNoQuietZones");
        chkC16kNoQuietZones->setChecked(false);

        verticalLayoutC16k->addWidget(chkC16kNoQuietZones);

        verticalSpacerC16k = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutC16k->addItem(verticalSpacerC16k);

#if QT_CONFIG(shortcut)
        lblC16kRows->setBuddy(cmbC16kRows);
        lblC16kHeightPerRow->setBuddy(spnC16kHeightPerRow);
        lblC16kRowSepHeight->setBuddy(cmbC16kRowSepHeight);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpC16k);

        QMetaObject::connectSlotsByName(grpC16k);
    } // setupUi

    void retranslateUi(QWidget *grpC16k)
    {
        grpC16k->setWindowTitle(QCoreApplication::translate("grpC16k", "Form", nullptr));
        lblC16kRows->setText(QCoreApplication::translate("grpC16k", "Minimum Ro&ws:", nullptr));
#if QT_CONFIG(tooltip)
        lblC16kRows->setToolTip(QCoreApplication::translate("grpC16k", "Set minimum number of rows", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbC16kRows->setItemText(0, QCoreApplication::translate("grpC16k", "Automatic", nullptr));
        cmbC16kRows->setItemText(1, QCoreApplication::translate("grpC16k", "3", nullptr));
        cmbC16kRows->setItemText(2, QCoreApplication::translate("grpC16k", "4", nullptr));
        cmbC16kRows->setItemText(3, QCoreApplication::translate("grpC16k", "5", nullptr));
        cmbC16kRows->setItemText(4, QCoreApplication::translate("grpC16k", "6", nullptr));
        cmbC16kRows->setItemText(5, QCoreApplication::translate("grpC16k", "7", nullptr));
        cmbC16kRows->setItemText(6, QCoreApplication::translate("grpC16k", "8", nullptr));
        cmbC16kRows->setItemText(7, QCoreApplication::translate("grpC16k", "9", nullptr));
        cmbC16kRows->setItemText(8, QCoreApplication::translate("grpC16k", "10", nullptr));
        cmbC16kRows->setItemText(9, QCoreApplication::translate("grpC16k", "11", nullptr));
        cmbC16kRows->setItemText(10, QCoreApplication::translate("grpC16k", "12", nullptr));
        cmbC16kRows->setItemText(11, QCoreApplication::translate("grpC16k", "13", nullptr));
        cmbC16kRows->setItemText(12, QCoreApplication::translate("grpC16k", "14", nullptr));
        cmbC16kRows->setItemText(13, QCoreApplication::translate("grpC16k", "15", nullptr));
        cmbC16kRows->setItemText(14, QCoreApplication::translate("grpC16k", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbC16kRows->setToolTip(QCoreApplication::translate("grpC16k", "Set minimum number of rows", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblC16kHeightPerRow->setToolTip(QCoreApplication::translate("grpC16k", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblC16kHeightPerRow->setText(QCoreApplication::translate("grpC16k", "Row &Height:", nullptr));
#if QT_CONFIG(tooltip)
        spnC16kHeightPerRow->setToolTip(QCoreApplication::translate("grpC16k", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnC16kHeightPerRow->setPrefix(QString());
        spnC16kHeightPerRow->setSuffix(QCoreApplication::translate("grpC16k", " X", nullptr));
        spnC16kHeightPerRow->setSpecialValueText(QCoreApplication::translate("grpC16k", "0 (Disabled)", nullptr));
#if QT_CONFIG(tooltip)
        btnC16kHeightPerRowDisable->setToolTip(QCoreApplication::translate("grpC16k", "Set height per row to 0\n"
"(\"Height\" in the Appearance\n"
"tab will be re-enabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnC16kHeightPerRowDisable->setText(QCoreApplication::translate("grpC16k", "Disabl&e", nullptr));
#if QT_CONFIG(tooltip)
        btnC16kHeightPerRowDefault->setToolTip(QCoreApplication::translate("grpC16k", "Set height per row to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        btnC16kHeightPerRowDefault->setText(QCoreApplication::translate("grpC16k", "De&fault", nullptr));
        lblC16kRowSepHeight->setText(QCoreApplication::translate("grpC16k", "&Row Separator Height:", nullptr));
#if QT_CONFIG(tooltip)
        lblC16kRowSepHeight->setToolTip(QCoreApplication::translate("grpC16k", "Height in X-dimensions of horizontal lines\n"
"separating rows", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbC16kRowSepHeight->setItemText(0, QCoreApplication::translate("grpC16k", "1 X (default)", nullptr));
        cmbC16kRowSepHeight->setItemText(1, QCoreApplication::translate("grpC16k", "2 X", nullptr));
        cmbC16kRowSepHeight->setItemText(2, QCoreApplication::translate("grpC16k", "3 X", nullptr));
        cmbC16kRowSepHeight->setItemText(3, QCoreApplication::translate("grpC16k", "4 X", nullptr));

#if QT_CONFIG(tooltip)
        cmbC16kRowSepHeight->setToolTip(QCoreApplication::translate("grpC16k", "Height in X-dimensions of horizontal lines\n"
"separating rows", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxC16kEncodingMode->setTitle(QCoreApplication::translate("grpC16k", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxC16kEncodingMode->setToolTip(QCoreApplication::translate("grpC16k", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radC16kStand->setText(QCoreApplication::translate("grpC16k", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC16kStand->setToolTip(QCoreApplication::translate("grpC16k", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radC16kGS1->setText(QCoreApplication::translate("grpC16k", "GS&1 Data Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC16kGS1->setToolTip(QCoreApplication::translate("grpC16k", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkC16kNoQuietZones->setText(QCoreApplication::translate("grpC16k", "No Quiet &Zones", nullptr));
#if QT_CONFIG(tooltip)
        chkC16kNoQuietZones->setToolTip(QCoreApplication::translate("grpC16k", "Do not add quiet zones to whitespace", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpC16k: public Ui_grpC16k {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC16K_H
