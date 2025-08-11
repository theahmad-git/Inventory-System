/********************************************************************************
** Form generated from reading UI file 'grpCodeOne.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPCODEONE_H
#define UI_GRPCODEONE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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

class Ui_grpCodeOne
{
public:
    QVBoxLayout *vLayoutC1;
    QGridLayout *gLayoutC1;
    QLabel *lblC1Size;
    QComboBox *cmbC1Size;
    QGroupBox *groupBoxC1EncodingMode;
    QGridLayout *gLayoutC1EncodingMode;
    QRadioButton *radC1Stand;
    QRadioButton *radC1GS1;
    QGroupBox *groupBoxC1StructApp;
    QGridLayout *gLayoutC1StructApp;
    QLabel *lblC1StructAppCount;
    QSpinBox *spnC1StructAppCount;
    QSpacerItem *spacerC1StructApp2;
    QLabel *lblC1StructAppIndex;
    QSpinBox *spnC1StructAppIndex;
    QSpacerItem *spacerC1StructApp5;
    QLabel *lblC1StructAppIDDisabled;
    QLineEdit *txtC1StructAppIDDisabled;
    QSpacerItem *vSpacerC1;

    void setupUi(QWidget *grpCodeOne)
    {
        if (grpCodeOne->objectName().isEmpty())
            grpCodeOne->setObjectName("grpCodeOne");
        grpCodeOne->resize(310, 124);
        grpCodeOne->setMaximumSize(QSize(600, 16777215));
        vLayoutC1 = new QVBoxLayout(grpCodeOne);
        vLayoutC1->setObjectName("vLayoutC1");
        gLayoutC1 = new QGridLayout();
        gLayoutC1->setObjectName("gLayoutC1");
        lblC1Size = new QLabel(grpCodeOne);
        lblC1Size->setObjectName("lblC1Size");
        lblC1Size->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gLayoutC1->addWidget(lblC1Size, 0, 0, 1, 1);

        cmbC1Size = new QComboBox(grpCodeOne);
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->addItem(QString());
        cmbC1Size->setObjectName("cmbC1Size");
        cmbC1Size->setMaxVisibleItems(11);

        gLayoutC1->addWidget(cmbC1Size, 0, 1, 1, 1);


        vLayoutC1->addLayout(gLayoutC1);

        groupBoxC1EncodingMode = new QGroupBox(grpCodeOne);
        groupBoxC1EncodingMode->setObjectName("groupBoxC1EncodingMode");
        gLayoutC1EncodingMode = new QGridLayout(groupBoxC1EncodingMode);
        gLayoutC1EncodingMode->setObjectName("gLayoutC1EncodingMode");
        gLayoutC1EncodingMode->setSizeConstraint(QLayout::SetMinimumSize);
        radC1Stand = new QRadioButton(groupBoxC1EncodingMode);
        radC1Stand->setObjectName("radC1Stand");
        radC1Stand->setChecked(true);

        gLayoutC1EncodingMode->addWidget(radC1Stand, 0, 0, 1, 1);

        radC1GS1 = new QRadioButton(groupBoxC1EncodingMode);
        radC1GS1->setObjectName("radC1GS1");

        gLayoutC1EncodingMode->addWidget(radC1GS1, 0, 1, 1, 1);


        vLayoutC1->addWidget(groupBoxC1EncodingMode);

        groupBoxC1StructApp = new QGroupBox(grpCodeOne);
        groupBoxC1StructApp->setObjectName("groupBoxC1StructApp");
        gLayoutC1StructApp = new QGridLayout(groupBoxC1StructApp);
        gLayoutC1StructApp->setObjectName("gLayoutC1StructApp");
        lblC1StructAppCount = new QLabel(groupBoxC1StructApp);
        lblC1StructAppCount->setObjectName("lblC1StructAppCount");
        lblC1StructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutC1StructApp->addWidget(lblC1StructAppCount, 0, 0, 1, 1);

        spnC1StructAppCount = new QSpinBox(groupBoxC1StructApp);
        spnC1StructAppCount->setObjectName("spnC1StructAppCount");
        spnC1StructAppCount->setMinimum(1);
        spnC1StructAppCount->setMaximum(128);
        spnC1StructAppCount->setValue(1);

        gLayoutC1StructApp->addWidget(spnC1StructAppCount, 0, 1, 1, 1);

        spacerC1StructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutC1StructApp->addItem(spacerC1StructApp2, 0, 2, 1, 1);

        lblC1StructAppIndex = new QLabel(groupBoxC1StructApp);
        lblC1StructAppIndex->setObjectName("lblC1StructAppIndex");
        lblC1StructAppIndex->setEnabled(false);
        lblC1StructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutC1StructApp->addWidget(lblC1StructAppIndex, 0, 3, 1, 1);

        spnC1StructAppIndex = new QSpinBox(groupBoxC1StructApp);
        spnC1StructAppIndex->setObjectName("spnC1StructAppIndex");
        spnC1StructAppIndex->setEnabled(false);
        spnC1StructAppIndex->setMinimum(1);
        spnC1StructAppIndex->setMaximum(128);
        spnC1StructAppIndex->setValue(1);

        gLayoutC1StructApp->addWidget(spnC1StructAppIndex, 0, 4, 1, 1);

        spacerC1StructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutC1StructApp->addItem(spacerC1StructApp5, 0, 5, 1, 1);

        lblC1StructAppIDDisabled = new QLabel(groupBoxC1StructApp);
        lblC1StructAppIDDisabled->setObjectName("lblC1StructAppIDDisabled");
        lblC1StructAppIDDisabled->setEnabled(false);
        lblC1StructAppIDDisabled->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutC1StructApp->addWidget(lblC1StructAppIDDisabled, 0, 6, 1, 1);

        txtC1StructAppIDDisabled = new QLineEdit(groupBoxC1StructApp);
        txtC1StructAppIDDisabled->setObjectName("txtC1StructAppIDDisabled");
        txtC1StructAppIDDisabled->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtC1StructAppIDDisabled->sizePolicy().hasHeightForWidth());
        txtC1StructAppIDDisabled->setSizePolicy(sizePolicy);

        gLayoutC1StructApp->addWidget(txtC1StructAppIDDisabled, 0, 7, 1, 1);


        vLayoutC1->addWidget(groupBoxC1StructApp);

        vSpacerC1 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vLayoutC1->addItem(vSpacerC1);

#if QT_CONFIG(shortcut)
        lblC1Size->setBuddy(cmbC1Size);
        lblC1StructAppCount->setBuddy(spnC1StructAppCount);
        lblC1StructAppIndex->setBuddy(spnC1StructAppIndex);
        lblC1StructAppIDDisabled->setBuddy(txtC1StructAppIDDisabled);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpCodeOne);

        QMetaObject::connectSlotsByName(grpCodeOne);
    } // setupUi

    void retranslateUi(QWidget *grpCodeOne)
    {
        grpCodeOne->setWindowTitle(QCoreApplication::translate("grpCodeOne", "Form", nullptr));
        lblC1Size->setText(QCoreApplication::translate("grpCodeOne", "Symbol Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        lblC1Size->setToolTip(QCoreApplication::translate("grpCodeOne", "Set size (H x W) of symbol\n"
"Versions A to H have fixed heights and\n"
"fixed widths\n"
"Versions S and T have fixed heights but\n"
"variable widths", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbC1Size->setItemText(0, QCoreApplication::translate("grpCodeOne", "Automatic", nullptr));
        cmbC1Size->setItemText(1, QCoreApplication::translate("grpCodeOne", "16 x 18 (Version A) (Zint 1)", nullptr));
        cmbC1Size->setItemText(2, QCoreApplication::translate("grpCodeOne", "22 x 22 (Version B) (Zint 2)", nullptr));
        cmbC1Size->setItemText(3, QCoreApplication::translate("grpCodeOne", "28 x 32 (Version C) (Zint 3)", nullptr));
        cmbC1Size->setItemText(4, QCoreApplication::translate("grpCodeOne", "40 x 42 (Version D) (Zint 4)", nullptr));
        cmbC1Size->setItemText(5, QCoreApplication::translate("grpCodeOne", "52 x 54 (Version E) (Zint 5)", nullptr));
        cmbC1Size->setItemText(6, QCoreApplication::translate("grpCodeOne", "70 x 76 (Version F) (Zint 6)", nullptr));
        cmbC1Size->setItemText(7, QCoreApplication::translate("grpCodeOne", "104 x 98 (Version G) (Zint 7)", nullptr));
        cmbC1Size->setItemText(8, QCoreApplication::translate("grpCodeOne", "148 x 134 (Version H) (Zint 8)", nullptr));
        cmbC1Size->setItemText(9, QCoreApplication::translate("grpCodeOne", "8 x automatic width (Version S) (Zint 9)", nullptr));
        cmbC1Size->setItemText(10, QCoreApplication::translate("grpCodeOne", "16 x automatic width (Version T) (Zint 10)", nullptr));

#if QT_CONFIG(tooltip)
        cmbC1Size->setToolTip(QCoreApplication::translate("grpCodeOne", "Set size (H x W) of symbol\n"
"Versions A to H have fixed heights and\n"
"fixed widths\n"
"Versions S and T have fixed heights but\n"
"variable widths", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxC1EncodingMode->setTitle(QCoreApplication::translate("grpCodeOne", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxC1EncodingMode->setToolTip(QCoreApplication::translate("grpCodeOne", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radC1Stand->setText(QCoreApplication::translate("grpCodeOne", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC1Stand->setToolTip(QCoreApplication::translate("grpCodeOne", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radC1GS1->setText(QCoreApplication::translate("grpCodeOne", "GS&1 Data Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC1GS1->setToolTip(QCoreApplication::translate("grpCodeOne", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxC1StructApp->setTitle(QCoreApplication::translate("grpCodeOne", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxC1StructApp->setToolTip(QCoreApplication::translate("grpCodeOne", "Code One supports Structured Append of up to\n"
"128 symbols (not available for Version S)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblC1StructAppCount->setText(QCoreApplication::translate("grpCodeOne", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblC1StructAppCount->setToolTip(QCoreApplication::translate("grpCodeOne", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 1 (Disabled) to 128", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnC1StructAppCount->setToolTip(QCoreApplication::translate("grpCodeOne", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 1 (Disabled) to 128", nullptr));
#endif // QT_CONFIG(tooltip)
        spnC1StructAppCount->setSpecialValueText(QCoreApplication::translate("grpCodeOne", " 1 (Disabled)", nullptr));
        lblC1StructAppIndex->setText(QCoreApplication::translate("grpCodeOne", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblC1StructAppIndex->setToolTip(QCoreApplication::translate("grpCodeOne", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnC1StructAppIndex->setToolTip(QCoreApplication::translate("grpCodeOne", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblC1StructAppIDDisabled->setToolTip(QCoreApplication::translate("grpCodeOne", "Structured Append ID not available for Code One", nullptr));
#endif // QT_CONFIG(tooltip)
        lblC1StructAppIDDisabled->setText(QCoreApplication::translate("grpCodeOne", "ID:", nullptr));
#if QT_CONFIG(tooltip)
        txtC1StructAppIDDisabled->setToolTip(QCoreApplication::translate("grpCodeOne", "Structured Append ID not available for Code One", nullptr));
#endif // QT_CONFIG(tooltip)
        txtC1StructAppIDDisabled->setText(QCoreApplication::translate("grpCodeOne", "N/A", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grpCodeOne: public Ui_grpCodeOne {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPCODEONE_H
