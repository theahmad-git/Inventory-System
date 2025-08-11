/********************************************************************************
** Form generated from reading UI file 'grpDAFT.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPDAFT_H
#define UI_GRPDAFT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpDAFT
{
public:
    QVBoxLayout *vLayoutDAFT;
    QHBoxLayout *hLayoutDAFT;
    QLabel *lblDAFTTrackerRatio;
    QDoubleSpinBox *spnDAFTTrackerRatio;
    QPushButton *btnDAFTTrackerDefault;
    QLabel *noteDAFTTrackerRatios;

    void setupUi(QWidget *grpDAFT)
    {
        if (grpDAFT->objectName().isEmpty())
            grpDAFT->setObjectName("grpDAFT");
        grpDAFT->resize(310, 78);
        grpDAFT->setMaximumSize(QSize(600, 16777215));
        vLayoutDAFT = new QVBoxLayout(grpDAFT);
        vLayoutDAFT->setObjectName("vLayoutDAFT");
        vLayoutDAFT->setContentMargins(0);
        vLayoutDAFT->setContentsMargins(0, 0, 0, 0);
        hLayoutDAFT = new QHBoxLayout();
        hLayoutDAFT->setObjectName("hLayoutDAFT");
        lblDAFTTrackerRatio = new QLabel(grpDAFT);
        lblDAFTTrackerRatio->setObjectName("lblDAFTTrackerRatio");
        lblDAFTTrackerRatio->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hLayoutDAFT->addWidget(lblDAFTTrackerRatio);

        spnDAFTTrackerRatio = new QDoubleSpinBox(grpDAFT);
        spnDAFTTrackerRatio->setObjectName("spnDAFTTrackerRatio");
        spnDAFTTrackerRatio->setDecimals(1);
        spnDAFTTrackerRatio->setMinimum(5.000000000000000);
        spnDAFTTrackerRatio->setMaximum(90.000000000000000);
        spnDAFTTrackerRatio->setSingleStep(1.000000000000000);
        spnDAFTTrackerRatio->setValue(25.000000000000000);

        hLayoutDAFT->addWidget(spnDAFTTrackerRatio);

        btnDAFTTrackerDefault = new QPushButton(grpDAFT);
        btnDAFTTrackerDefault->setObjectName("btnDAFTTrackerDefault");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnDAFTTrackerDefault->sizePolicy().hasHeightForWidth());
        btnDAFTTrackerDefault->setSizePolicy(sizePolicy);
        btnDAFTTrackerDefault->setMaximumSize(QSize(120, 16777215));

        hLayoutDAFT->addWidget(btnDAFTTrackerDefault);


        vLayoutDAFT->addLayout(hLayoutDAFT);

        noteDAFTTrackerRatios = new QLabel(grpDAFT);
        noteDAFTTrackerRatios->setObjectName("noteDAFTTrackerRatios");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(noteDAFTTrackerRatios->sizePolicy().hasHeightForWidth());
        noteDAFTTrackerRatios->setSizePolicy(sizePolicy1);
        noteDAFTTrackerRatios->setTextFormat(Qt::PlainText);
        noteDAFTTrackerRatios->setAlignment(Qt::AlignLeft);
        noteDAFTTrackerRatios->setWordWrap(true);

        vLayoutDAFT->addWidget(noteDAFTTrackerRatios);

#if QT_CONFIG(shortcut)
        lblDAFTTrackerRatio->setBuddy(spnDAFTTrackerRatio);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpDAFT);

        QMetaObject::connectSlotsByName(grpDAFT);
    } // setupUi

    void retranslateUi(QWidget *grpDAFT)
    {
        grpDAFT->setWindowTitle(QCoreApplication::translate("grpDAFT", "Form", nullptr));
        lblDAFTTrackerRatio->setText(QCoreApplication::translate("grpDAFT", "&Tracker Ratio:", nullptr));
#if QT_CONFIG(tooltip)
        lblDAFTTrackerRatio->setToolTip(QCoreApplication::translate("grpDAFT", "Size of tracker as percentage of full height", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spnDAFTTrackerRatio->setToolTip(QCoreApplication::translate("grpDAFT", "Size of tracker as percentage of full height", nullptr));
#endif // QT_CONFIG(tooltip)
        spnDAFTTrackerRatio->setPrefix(QString());
        spnDAFTTrackerRatio->setSuffix(QCoreApplication::translate("grpDAFT", " %", nullptr));
#if QT_CONFIG(tooltip)
        btnDAFTTrackerDefault->setToolTip(QCoreApplication::translate("grpDAFT", "Reset tracker ratio to default 25%", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDAFTTrackerDefault->setText(QCoreApplication::translate("grpDAFT", "De&fault (25%)", nullptr));
        noteDAFTTrackerRatios->setText(QCoreApplication::translate("grpDAFT", "Examples of tracker ratios:\n"
"  Australia Post 26%\n"
"  Dutch Post and Royal Mail 25.6%, Japan Post 33%\n"
"  PLANET and POSTNET 25% (Tracker & Ascender only)\n"
"  USPS Intelligent Mail 33.1%\n"
"", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grpDAFT: public Ui_grpDAFT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPDAFT_H
