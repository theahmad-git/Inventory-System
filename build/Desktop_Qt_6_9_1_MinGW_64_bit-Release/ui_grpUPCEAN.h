/********************************************************************************
** Form generated from reading UI file 'grpUPCEAN.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPUPCEAN_H
#define UI_GRPUPCEAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpUPCEAN
{
public:
    QVBoxLayout *verticalLayoutUPCEAN;
    QGridLayout *gridLayoutUPCEAN;
    QLabel *lblUPCEANAddonGap;
    QComboBox *cmbUPCEANAddonGap;
    QLabel *lblUPCEANGuardDescent;
    QHBoxLayout *horzLayoutUPCEANGuardDescent;
    QDoubleSpinBox *spnUPCEANGuardDescent;
    QPushButton *btnUPCEANGuardDefault;
    QCheckBox *chkUPCEANNoQuietZones;
    QCheckBox *chkUPCEANGuardWhitespace;
    QSpacerItem *verticalSpacerUPCEAN;

    void setupUi(QWidget *grpUPCEAN)
    {
        if (grpUPCEAN->objectName().isEmpty())
            grpUPCEAN->setObjectName("grpUPCEAN");
        grpUPCEAN->resize(310, 78);
        grpUPCEAN->setMaximumSize(QSize(600, 16777215));
        verticalLayoutUPCEAN = new QVBoxLayout(grpUPCEAN);
        verticalLayoutUPCEAN->setObjectName("verticalLayoutUPCEAN");
        gridLayoutUPCEAN = new QGridLayout();
        gridLayoutUPCEAN->setObjectName("gridLayoutUPCEAN");
        lblUPCEANAddonGap = new QLabel(grpUPCEAN);
        lblUPCEANAddonGap->setObjectName("lblUPCEANAddonGap");
        lblUPCEANAddonGap->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutUPCEAN->addWidget(lblUPCEANAddonGap, 0, 0, 1, 1);

        cmbUPCEANAddonGap = new QComboBox(grpUPCEAN);
        cmbUPCEANAddonGap->addItem(QString());
        cmbUPCEANAddonGap->addItem(QString());
        cmbUPCEANAddonGap->addItem(QString());
        cmbUPCEANAddonGap->addItem(QString());
        cmbUPCEANAddonGap->addItem(QString());
        cmbUPCEANAddonGap->addItem(QString());
        cmbUPCEANAddonGap->setObjectName("cmbUPCEANAddonGap");

        gridLayoutUPCEAN->addWidget(cmbUPCEANAddonGap, 0, 1, 1, 1);

        lblUPCEANGuardDescent = new QLabel(grpUPCEAN);
        lblUPCEANGuardDescent->setObjectName("lblUPCEANGuardDescent");
        lblUPCEANGuardDescent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutUPCEAN->addWidget(lblUPCEANGuardDescent, 1, 0, 1, 1);

        horzLayoutUPCEANGuardDescent = new QHBoxLayout();
        horzLayoutUPCEANGuardDescent->setObjectName("horzLayoutUPCEANGuardDescent");
        spnUPCEANGuardDescent = new QDoubleSpinBox(grpUPCEAN);
        spnUPCEANGuardDescent->setObjectName("spnUPCEANGuardDescent");
        spnUPCEANGuardDescent->setDecimals(3);
        spnUPCEANGuardDescent->setMinimum(0.000000000000000);
        spnUPCEANGuardDescent->setMaximum(20.000000000000000);
        spnUPCEANGuardDescent->setSingleStep(0.100000000000000);
        spnUPCEANGuardDescent->setValue(5.000000000000000);
        spnUPCEANGuardDescent->setAccelerated(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnUPCEANGuardDescent->sizePolicy().hasHeightForWidth());
        spnUPCEANGuardDescent->setSizePolicy(sizePolicy);

        horzLayoutUPCEANGuardDescent->addWidget(spnUPCEANGuardDescent);

        btnUPCEANGuardDefault = new QPushButton(grpUPCEAN);
        btnUPCEANGuardDefault->setObjectName("btnUPCEANGuardDefault");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnUPCEANGuardDefault->sizePolicy().hasHeightForWidth());
        btnUPCEANGuardDefault->setSizePolicy(sizePolicy1);
        btnUPCEANGuardDefault->setProperty("sizeHint", QVariant(QSize(60, 20)));

        horzLayoutUPCEANGuardDescent->addWidget(btnUPCEANGuardDefault);


        gridLayoutUPCEAN->addLayout(horzLayoutUPCEANGuardDescent, 1, 1, 1, 1);


        verticalLayoutUPCEAN->addLayout(gridLayoutUPCEAN);

        chkUPCEANNoQuietZones = new QCheckBox(grpUPCEAN);
        chkUPCEANNoQuietZones->setObjectName("chkUPCEANNoQuietZones");
        chkUPCEANNoQuietZones->setChecked(false);

        verticalLayoutUPCEAN->addWidget(chkUPCEANNoQuietZones);

        chkUPCEANGuardWhitespace = new QCheckBox(grpUPCEAN);
        chkUPCEANGuardWhitespace->setObjectName("chkUPCEANGuardWhitespace");
        chkUPCEANGuardWhitespace->setChecked(false);

        verticalLayoutUPCEAN->addWidget(chkUPCEANGuardWhitespace);

        verticalSpacerUPCEAN = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutUPCEAN->addItem(verticalSpacerUPCEAN);

#if QT_CONFIG(shortcut)
        lblUPCEANAddonGap->setBuddy(cmbUPCEANAddonGap);
        lblUPCEANGuardDescent->setBuddy(spnUPCEANGuardDescent);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpUPCEAN);

        QMetaObject::connectSlotsByName(grpUPCEAN);
    } // setupUi

    void retranslateUi(QWidget *grpUPCEAN)
    {
        grpUPCEAN->setWindowTitle(QCoreApplication::translate("grpUPCEAN", "Form", nullptr));
        lblUPCEANAddonGap->setText(QCoreApplication::translate("grpUPCEAN", "Add-o&n Gap:", nullptr));
#if QT_CONFIG(tooltip)
        lblUPCEANAddonGap->setToolTip(QCoreApplication::translate("grpUPCEAN", "Horizontal space in X-dimensions between\n"
"main symbol and add-on (if any)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUPCEANAddonGap->setItemText(0, QCoreApplication::translate("grpUPCEAN", "7 X (default)", nullptr));
        cmbUPCEANAddonGap->setItemText(1, QCoreApplication::translate("grpUPCEAN", "8 X", nullptr));
        cmbUPCEANAddonGap->setItemText(2, QCoreApplication::translate("grpUPCEAN", "9 X", nullptr));
        cmbUPCEANAddonGap->setItemText(3, QCoreApplication::translate("grpUPCEAN", "10 X", nullptr));
        cmbUPCEANAddonGap->setItemText(4, QCoreApplication::translate("grpUPCEAN", "11 X", nullptr));
        cmbUPCEANAddonGap->setItemText(5, QCoreApplication::translate("grpUPCEAN", "12 X", nullptr));

#if QT_CONFIG(tooltip)
        cmbUPCEANAddonGap->setToolTip(QCoreApplication::translate("grpUPCEAN", "Horizontal space in X-dimensions between\n"
"main symbol and add-on (if any)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblUPCEANGuardDescent->setToolTip(QCoreApplication::translate("grpUPCEAN", "Height in X-dimensions that the guard bars\n"
"descend below the main bars (default 5X)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUPCEANGuardDescent->setText(QCoreApplication::translate("grpUPCEAN", "Guard Bar Des&cent:", nullptr));
#if QT_CONFIG(tooltip)
        spnUPCEANGuardDescent->setToolTip(QCoreApplication::translate("grpUPCEAN", "Height in X-dimensions that the guard bars\n"
"descend below the main bars (default 5X)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnUPCEANGuardDescent->setPrefix(QString());
        spnUPCEANGuardDescent->setSuffix(QCoreApplication::translate("grpUPCEAN", " X", nullptr));
#if QT_CONFIG(tooltip)
        btnUPCEANGuardDefault->setToolTip(QCoreApplication::translate("grpUPCEAN", "Reset guard bars descent height\n"
"to default 5X", nullptr));
#endif // QT_CONFIG(tooltip)
        btnUPCEANGuardDefault->setText(QCoreApplication::translate("grpUPCEAN", "De&fault (5X)", nullptr));
        chkUPCEANNoQuietZones->setText(QCoreApplication::translate("grpUPCEAN", "No Quiet &Zones", nullptr));
#if QT_CONFIG(tooltip)
        chkUPCEANNoQuietZones->setToolTip(QCoreApplication::translate("grpUPCEAN", "Do not add quiet zones to whitespace", nullptr));
#endif // QT_CONFIG(tooltip)
        chkUPCEANGuardWhitespace->setText(QCoreApplication::translate("grpUPCEAN", "Guard &Whitespace", nullptr));
#if QT_CONFIG(tooltip)
        chkUPCEANGuardWhitespace->setToolTip(QCoreApplication::translate("grpUPCEAN", "Add quiet zone indicators (\"<\", \">\") to Human Readable Text (HRT)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpUPCEAN: public Ui_grpUPCEAN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPUPCEAN_H
