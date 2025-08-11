/********************************************************************************
** Form generated from reading UI file 'grpC49.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC49_H
#define UI_GRPC49_H

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

class Ui_grpC49
{
public:
    QVBoxLayout *verticalLayoutC49;
    QGridLayout *gridLayoutC49;
    QLabel *lblC49Rows;
    QComboBox *cmbC49Rows;
    QLabel *lblC49HeightPerRow;
    QHBoxLayout *horzLayoutC49HeightPerRow;
    QDoubleSpinBox *spnC49HeightPerRow;
    QPushButton *btnC49HeightPerRowDisable;
    QPushButton *btnC49HeightPerRowDefault;
    QLabel *lblC49RowSepHeight;
    QComboBox *cmbC49RowSepHeight;
    QGroupBox *groupBoxC49EncodingMode;
    QGridLayout *gridLayoutC49EncodingMode;
    QRadioButton *radC49Stand;
    QRadioButton *radC49GS1;
    QCheckBox *chkC49NoQuietZones;
    QSpacerItem *verticalSpacerC49;

    void setupUi(QWidget *grpC49)
    {
        if (grpC49->objectName().isEmpty())
            grpC49->setObjectName("grpC49");
        grpC49->resize(186, 123);
        grpC49->setMaximumSize(QSize(600, 16777215));
        verticalLayoutC49 = new QVBoxLayout(grpC49);
        verticalLayoutC49->setObjectName("verticalLayoutC49");
        gridLayoutC49 = new QGridLayout();
        gridLayoutC49->setObjectName("gridLayoutC49");
        lblC49Rows = new QLabel(grpC49);
        lblC49Rows->setObjectName("lblC49Rows");

        gridLayoutC49->addWidget(lblC49Rows, 0, 0, 1, 1);

        cmbC49Rows = new QComboBox(grpC49);
        cmbC49Rows->addItem(QString());
        cmbC49Rows->addItem(QString());
        cmbC49Rows->addItem(QString());
        cmbC49Rows->addItem(QString());
        cmbC49Rows->addItem(QString());
        cmbC49Rows->addItem(QString());
        cmbC49Rows->addItem(QString());
        cmbC49Rows->setObjectName("cmbC49Rows");

        gridLayoutC49->addWidget(cmbC49Rows, 0, 1, 1, 1);

        lblC49HeightPerRow = new QLabel(grpC49);
        lblC49HeightPerRow->setObjectName("lblC49HeightPerRow");
        lblC49HeightPerRow->setEnabled(false);
        lblC49HeightPerRow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutC49->addWidget(lblC49HeightPerRow, 1, 0, 1, 1);

        horzLayoutC49HeightPerRow = new QHBoxLayout();
        horzLayoutC49HeightPerRow->setObjectName("horzLayoutC49HeightPerRow");
        spnC49HeightPerRow = new QDoubleSpinBox(grpC49);
        spnC49HeightPerRow->setObjectName("spnC49HeightPerRow");
        spnC49HeightPerRow->setEnabled(false);
        spnC49HeightPerRow->setAccelerated(true);
        spnC49HeightPerRow->setDecimals(3);
        spnC49HeightPerRow->setMinimum(0.000000000000000);
        spnC49HeightPerRow->setMaximum(2000.000000000000000);
        spnC49HeightPerRow->setSingleStep(0.100000000000000);
        spnC49HeightPerRow->setValue(0.000000000000000);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnC49HeightPerRow->sizePolicy().hasHeightForWidth());
        spnC49HeightPerRow->setSizePolicy(sizePolicy);

        horzLayoutC49HeightPerRow->addWidget(spnC49HeightPerRow);

        btnC49HeightPerRowDisable = new QPushButton(grpC49);
        btnC49HeightPerRowDisable->setObjectName("btnC49HeightPerRowDisable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnC49HeightPerRowDisable->sizePolicy().hasHeightForWidth());
        btnC49HeightPerRowDisable->setSizePolicy(sizePolicy1);
        btnC49HeightPerRowDisable->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutC49HeightPerRow->addWidget(btnC49HeightPerRowDisable);

        btnC49HeightPerRowDefault = new QPushButton(grpC49);
        btnC49HeightPerRowDefault->setObjectName("btnC49HeightPerRowDefault");
        sizePolicy1.setHeightForWidth(btnC49HeightPerRowDefault->sizePolicy().hasHeightForWidth());
        btnC49HeightPerRowDefault->setSizePolicy(sizePolicy1);
        btnC49HeightPerRowDefault->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutC49HeightPerRow->addWidget(btnC49HeightPerRowDefault);


        gridLayoutC49->addLayout(horzLayoutC49HeightPerRow, 1, 1, 1, 1);

        lblC49RowSepHeight = new QLabel(grpC49);
        lblC49RowSepHeight->setObjectName("lblC49RowSepHeight");

        gridLayoutC49->addWidget(lblC49RowSepHeight, 2, 0, 1, 1);

        cmbC49RowSepHeight = new QComboBox(grpC49);
        cmbC49RowSepHeight->addItem(QString());
        cmbC49RowSepHeight->addItem(QString());
        cmbC49RowSepHeight->addItem(QString());
        cmbC49RowSepHeight->addItem(QString());
        cmbC49RowSepHeight->setObjectName("cmbC49RowSepHeight");

        gridLayoutC49->addWidget(cmbC49RowSepHeight, 2, 1, 1, 1);


        verticalLayoutC49->addLayout(gridLayoutC49);

        groupBoxC49EncodingMode = new QGroupBox(grpC49);
        groupBoxC49EncodingMode->setObjectName("groupBoxC49EncodingMode");
        gridLayoutC49EncodingMode = new QGridLayout(groupBoxC49EncodingMode);
        gridLayoutC49EncodingMode->setObjectName("gridLayoutC49EncodingMode");
        gridLayoutC49EncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radC49Stand = new QRadioButton(groupBoxC49EncodingMode);
        radC49Stand->setObjectName("radC49Stand");
        radC49Stand->setChecked(true);

        gridLayoutC49EncodingMode->addWidget(radC49Stand, 0, 0, 1, 1);

        radC49GS1 = new QRadioButton(groupBoxC49EncodingMode);
        radC49GS1->setObjectName("radC49GS1");

        gridLayoutC49EncodingMode->addWidget(radC49GS1, 0, 1, 1, 1);


        verticalLayoutC49->addWidget(groupBoxC49EncodingMode);

        chkC49NoQuietZones = new QCheckBox(grpC49);
        chkC49NoQuietZones->setObjectName("chkC49NoQuietZones");
        chkC49NoQuietZones->setChecked(false);

        verticalLayoutC49->addWidget(chkC49NoQuietZones);

        verticalSpacerC49 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutC49->addItem(verticalSpacerC49);

#if QT_CONFIG(shortcut)
        lblC49Rows->setBuddy(cmbC49Rows);
        lblC49HeightPerRow->setBuddy(spnC49HeightPerRow);
        lblC49RowSepHeight->setBuddy(cmbC49RowSepHeight);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpC49);

        QMetaObject::connectSlotsByName(grpC49);
    } // setupUi

    void retranslateUi(QWidget *grpC49)
    {
        grpC49->setWindowTitle(QCoreApplication::translate("grpC49", "Form", nullptr));
        lblC49Rows->setText(QCoreApplication::translate("grpC49", "Minimum Ro&ws:", nullptr));
#if QT_CONFIG(tooltip)
        lblC49Rows->setToolTip(QCoreApplication::translate("grpC49", "Set minimum number of rows", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbC49Rows->setItemText(0, QCoreApplication::translate("grpC49", "Automatic", nullptr));
        cmbC49Rows->setItemText(1, QCoreApplication::translate("grpC49", "3", nullptr));
        cmbC49Rows->setItemText(2, QCoreApplication::translate("grpC49", "4", nullptr));
        cmbC49Rows->setItemText(3, QCoreApplication::translate("grpC49", "5", nullptr));
        cmbC49Rows->setItemText(4, QCoreApplication::translate("grpC49", "6", nullptr));
        cmbC49Rows->setItemText(5, QCoreApplication::translate("grpC49", "7", nullptr));
        cmbC49Rows->setItemText(6, QCoreApplication::translate("grpC49", "8", nullptr));

#if QT_CONFIG(tooltip)
        cmbC49Rows->setToolTip(QCoreApplication::translate("grpC49", "Set minimum number of rows", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblC49HeightPerRow->setToolTip(QCoreApplication::translate("grpC49", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblC49HeightPerRow->setText(QCoreApplication::translate("grpC49", "Row &Height:", nullptr));
#if QT_CONFIG(tooltip)
        spnC49HeightPerRow->setToolTip(QCoreApplication::translate("grpC49", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnC49HeightPerRow->setPrefix(QString());
        spnC49HeightPerRow->setSuffix(QCoreApplication::translate("grpC49", " X", nullptr));
        spnC49HeightPerRow->setSpecialValueText(QCoreApplication::translate("grpC49", "0 (Disabled)", nullptr));
#if QT_CONFIG(tooltip)
        btnC49HeightPerRowDisable->setToolTip(QCoreApplication::translate("grpC49", "Set height per row to 0\n"
"(\"Height\" in the Appearance\n"
"tab will be re-enabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnC49HeightPerRowDisable->setText(QCoreApplication::translate("grpC49", "Disabl&e", nullptr));
#if QT_CONFIG(tooltip)
        btnC49HeightPerRowDefault->setToolTip(QCoreApplication::translate("grpC49", "Set height per row to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        btnC49HeightPerRowDefault->setText(QCoreApplication::translate("grpC49", "De&fault", nullptr));
        lblC49RowSepHeight->setText(QCoreApplication::translate("grpC49", "&Row Separator Height:", nullptr));
#if QT_CONFIG(tooltip)
        lblC49RowSepHeight->setToolTip(QCoreApplication::translate("grpC49", "Height in X-dimensions of horizontal lines\n"
"separating rows", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbC49RowSepHeight->setItemText(0, QCoreApplication::translate("grpC49", "1 X (default)", nullptr));
        cmbC49RowSepHeight->setItemText(1, QCoreApplication::translate("grpC49", "2 X", nullptr));
        cmbC49RowSepHeight->setItemText(2, QCoreApplication::translate("grpC49", "3 X", nullptr));
        cmbC49RowSepHeight->setItemText(3, QCoreApplication::translate("grpC49", "4 X", nullptr));

#if QT_CONFIG(tooltip)
        cmbC49RowSepHeight->setToolTip(QCoreApplication::translate("grpC49", "Height in X-dimensions of horizontal lines\n"
"separating rows", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxC49EncodingMode->setTitle(QCoreApplication::translate("grpC49", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxC49EncodingMode->setToolTip(QCoreApplication::translate("grpC49", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radC49Stand->setText(QCoreApplication::translate("grpC49", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC49Stand->setToolTip(QCoreApplication::translate("grpC49", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radC49GS1->setText(QCoreApplication::translate("grpC49", "GS&1 Data Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC49GS1->setToolTip(QCoreApplication::translate("grpC49", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkC49NoQuietZones->setText(QCoreApplication::translate("grpC49", "No Quiet &Zones", nullptr));
#if QT_CONFIG(tooltip)
        chkC49NoQuietZones->setToolTip(QCoreApplication::translate("grpC49", "Do not add quiet zones to whitespace", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpC49: public Ui_grpC49 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC49_H
