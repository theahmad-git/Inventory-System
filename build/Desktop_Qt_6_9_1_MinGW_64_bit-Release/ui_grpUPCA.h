/********************************************************************************
** Form generated from reading UI file 'grpUPCA.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPUPCA_H
#define UI_GRPUPCA_H

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

class Ui_grpUPCA
{
public:
    QVBoxLayout *verticalLayoutUPCA;
    QGridLayout *gridLayoutUPCA;
    QLabel *lblUPCAAddonGap;
    QComboBox *cmbUPCAAddonGap;
    QLabel *lblUPCAGuardDescent;
    QHBoxLayout *horzLayoutUPCAGuardDescent;
    QDoubleSpinBox *spnUPCAGuardDescent;
    QPushButton *btnUPCAGuardDefault;
    QCheckBox *chkUPCANoQuietZones;
    QCheckBox *chkUPCAGuardWhitespace;
    QSpacerItem *verticalSpacerUPCA;

    void setupUi(QWidget *grpUPCA)
    {
        if (grpUPCA->objectName().isEmpty())
            grpUPCA->setObjectName("grpUPCA");
        grpUPCA->resize(310, 78);
        grpUPCA->setMaximumSize(QSize(600, 16777215));
        verticalLayoutUPCA = new QVBoxLayout(grpUPCA);
        verticalLayoutUPCA->setObjectName("verticalLayoutUPCA");
        gridLayoutUPCA = new QGridLayout();
        gridLayoutUPCA->setObjectName("gridLayoutUPCA");
        lblUPCAAddonGap = new QLabel(grpUPCA);
        lblUPCAAddonGap->setObjectName("lblUPCAAddonGap");
        lblUPCAAddonGap->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutUPCA->addWidget(lblUPCAAddonGap, 0, 0, 1, 1);

        cmbUPCAAddonGap = new QComboBox(grpUPCA);
        cmbUPCAAddonGap->addItem(QString());
        cmbUPCAAddonGap->addItem(QString());
        cmbUPCAAddonGap->addItem(QString());
        cmbUPCAAddonGap->addItem(QString());
        cmbUPCAAddonGap->setObjectName("cmbUPCAAddonGap");

        gridLayoutUPCA->addWidget(cmbUPCAAddonGap, 0, 1, 1, 1);

        lblUPCAGuardDescent = new QLabel(grpUPCA);
        lblUPCAGuardDescent->setObjectName("lblUPCAGuardDescent");
        lblUPCAGuardDescent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutUPCA->addWidget(lblUPCAGuardDescent, 1, 0, 1, 1);

        horzLayoutUPCAGuardDescent = new QHBoxLayout();
        horzLayoutUPCAGuardDescent->setObjectName("horzLayoutUPCAGuardDescent");
        spnUPCAGuardDescent = new QDoubleSpinBox(grpUPCA);
        spnUPCAGuardDescent->setObjectName("spnUPCAGuardDescent");
        spnUPCAGuardDescent->setDecimals(3);
        spnUPCAGuardDescent->setMinimum(0.000000000000000);
        spnUPCAGuardDescent->setMaximum(20.000000000000000);
        spnUPCAGuardDescent->setSingleStep(0.100000000000000);
        spnUPCAGuardDescent->setValue(5.000000000000000);
        spnUPCAGuardDescent->setAccelerated(true);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnUPCAGuardDescent->sizePolicy().hasHeightForWidth());
        spnUPCAGuardDescent->setSizePolicy(sizePolicy);

        horzLayoutUPCAGuardDescent->addWidget(spnUPCAGuardDescent);

        btnUPCAGuardDefault = new QPushButton(grpUPCA);
        btnUPCAGuardDefault->setObjectName("btnUPCAGuardDefault");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnUPCAGuardDefault->sizePolicy().hasHeightForWidth());
        btnUPCAGuardDefault->setSizePolicy(sizePolicy1);
        btnUPCAGuardDefault->setProperty("sizeHint", QVariant(QSize(60, 20)));

        horzLayoutUPCAGuardDescent->addWidget(btnUPCAGuardDefault);


        gridLayoutUPCA->addLayout(horzLayoutUPCAGuardDescent, 1, 1, 1, 1);


        verticalLayoutUPCA->addLayout(gridLayoutUPCA);

        chkUPCANoQuietZones = new QCheckBox(grpUPCA);
        chkUPCANoQuietZones->setObjectName("chkUPCANoQuietZones");
        chkUPCANoQuietZones->setChecked(false);

        verticalLayoutUPCA->addWidget(chkUPCANoQuietZones);

        chkUPCAGuardWhitespace = new QCheckBox(grpUPCA);
        chkUPCAGuardWhitespace->setObjectName("chkUPCAGuardWhitespace");
        chkUPCAGuardWhitespace->setChecked(false);

        verticalLayoutUPCA->addWidget(chkUPCAGuardWhitespace);

        verticalSpacerUPCA = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutUPCA->addItem(verticalSpacerUPCA);

#if QT_CONFIG(shortcut)
        lblUPCAAddonGap->setBuddy(cmbUPCAAddonGap);
        lblUPCAGuardDescent->setBuddy(spnUPCAGuardDescent);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpUPCA);

        QMetaObject::connectSlotsByName(grpUPCA);
    } // setupUi

    void retranslateUi(QWidget *grpUPCA)
    {
        grpUPCA->setWindowTitle(QCoreApplication::translate("grpUPCA", "Form", nullptr));
        lblUPCAAddonGap->setText(QCoreApplication::translate("grpUPCA", "Add-o&n Gap:", nullptr));
#if QT_CONFIG(tooltip)
        lblUPCAAddonGap->setToolTip(QCoreApplication::translate("grpUPCA", "Horizontal space in X-dimensions between\n"
"main symbol and add-on (if any)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUPCAAddonGap->setItemText(0, QCoreApplication::translate("grpUPCA", "9 X (default)", nullptr));
        cmbUPCAAddonGap->setItemText(1, QCoreApplication::translate("grpUPCA", "10 X", nullptr));
        cmbUPCAAddonGap->setItemText(2, QCoreApplication::translate("grpUPCA", "11 X", nullptr));
        cmbUPCAAddonGap->setItemText(3, QCoreApplication::translate("grpUPCA", "12 X", nullptr));

#if QT_CONFIG(tooltip)
        cmbUPCAAddonGap->setToolTip(QCoreApplication::translate("grpUPCA", "Horizontal space in X-dimensions between\n"
"main symbol and add-on (if any)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblUPCAGuardDescent->setToolTip(QCoreApplication::translate("grpUPCA", "Height in X-dimensions that the guard bars\n"
"descend below the main bars (default 5X)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUPCAGuardDescent->setText(QCoreApplication::translate("grpUPCA", "Guard Bar Des&cent:", nullptr));
#if QT_CONFIG(tooltip)
        spnUPCAGuardDescent->setToolTip(QCoreApplication::translate("grpUPCA", "Height in X-dimensions that the guard bars\n"
"descend below the main bars (default 5X)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnUPCAGuardDescent->setPrefix(QString());
        spnUPCAGuardDescent->setSuffix(QCoreApplication::translate("grpUPCA", " X", nullptr));
#if QT_CONFIG(tooltip)
        btnUPCAGuardDefault->setToolTip(QCoreApplication::translate("grpUPCA", "Reset guard bars descent height\n"
"to default 5X", nullptr));
#endif // QT_CONFIG(tooltip)
        btnUPCAGuardDefault->setText(QCoreApplication::translate("grpUPCA", "De&fault (5X)", nullptr));
        chkUPCANoQuietZones->setText(QCoreApplication::translate("grpUPCA", "No Quiet &Zones", nullptr));
#if QT_CONFIG(tooltip)
        chkUPCANoQuietZones->setToolTip(QCoreApplication::translate("grpUPCA", "Do not add quiet zones to whitespace", nullptr));
#endif // QT_CONFIG(tooltip)
        chkUPCAGuardWhitespace->setText(QCoreApplication::translate("grpUPCA", "Guard &Whitespace", nullptr));
#if QT_CONFIG(tooltip)
        chkUPCAGuardWhitespace->setToolTip(QCoreApplication::translate("grpUPCA", "Add quiet zone indicators (\"<\", \">\") to Human Readable Text (HRT)\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpUPCA: public Ui_grpUPCA {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPUPCA_H
