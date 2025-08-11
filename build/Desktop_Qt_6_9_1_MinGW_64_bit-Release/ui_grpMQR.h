/********************************************************************************
** Form generated from reading UI file 'grpMQR.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPMQR_H
#define UI_GRPMQR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpMQR
{
public:
    QVBoxLayout *vLayoutMQR;
    QGridLayout *gLayoutMQR;
    QLabel *lblMQRSize;
    QComboBox *cmbMQRSize;
    QLabel *lblMQRECC;
    QComboBox *cmbMQRECC;
    QLabel *lblMQRMask;
    QComboBox *cmbMQRMask;
    QCheckBox *chkMQRFullMultibyte;
    QSpacerItem *vSpacerMQR;

    void setupUi(QWidget *grpMQR)
    {
        if (grpMQR->objectName().isEmpty())
            grpMQR->setObjectName("grpMQR");
        grpMQR->resize(400, 227);
        grpMQR->setMaximumSize(QSize(600, 16777215));
        vLayoutMQR = new QVBoxLayout(grpMQR);
        vLayoutMQR->setObjectName("vLayoutMQR");
        gLayoutMQR = new QGridLayout();
        gLayoutMQR->setObjectName("gLayoutMQR");
        lblMQRSize = new QLabel(grpMQR);
        lblMQRSize->setObjectName("lblMQRSize");

        gLayoutMQR->addWidget(lblMQRSize, 0, 0, 1, 1);

        cmbMQRSize = new QComboBox(grpMQR);
        cmbMQRSize->addItem(QString());
        cmbMQRSize->addItem(QString());
        cmbMQRSize->addItem(QString());
        cmbMQRSize->addItem(QString());
        cmbMQRSize->addItem(QString());
        cmbMQRSize->setObjectName("cmbMQRSize");

        gLayoutMQR->addWidget(cmbMQRSize, 0, 1, 1, 1);

        lblMQRECC = new QLabel(grpMQR);
        lblMQRECC->setObjectName("lblMQRECC");

        gLayoutMQR->addWidget(lblMQRECC, 1, 0, 1, 1);

        cmbMQRECC = new QComboBox(grpMQR);
        cmbMQRECC->addItem(QString());
        cmbMQRECC->addItem(QString());
        cmbMQRECC->addItem(QString());
        cmbMQRECC->addItem(QString());
        cmbMQRECC->setObjectName("cmbMQRECC");

        gLayoutMQR->addWidget(cmbMQRECC, 1, 1, 1, 1);

        lblMQRMask = new QLabel(grpMQR);
        lblMQRMask->setObjectName("lblMQRMask");

        gLayoutMQR->addWidget(lblMQRMask, 2, 0, 1, 1);

        cmbMQRMask = new QComboBox(grpMQR);
        cmbMQRMask->addItem(QString());
        cmbMQRMask->addItem(QString());
        cmbMQRMask->addItem(QString());
        cmbMQRMask->addItem(QString());
        cmbMQRMask->addItem(QString());
        cmbMQRMask->setObjectName("cmbMQRMask");

        gLayoutMQR->addWidget(cmbMQRMask, 2, 1, 1, 1);


        vLayoutMQR->addLayout(gLayoutMQR);

        chkMQRFullMultibyte = new QCheckBox(grpMQR);
        chkMQRFullMultibyte->setObjectName("chkMQRFullMultibyte");
        chkMQRFullMultibyte->setChecked(false);

        vLayoutMQR->addWidget(chkMQRFullMultibyte);

        vSpacerMQR = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        vLayoutMQR->addItem(vSpacerMQR);

#if QT_CONFIG(shortcut)
        lblMQRSize->setBuddy(cmbMQRSize);
        lblMQRECC->setBuddy(cmbMQRECC);
        lblMQRMask->setBuddy(cmbMQRMask);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpMQR);

        QMetaObject::connectSlotsByName(grpMQR);
    } // setupUi

    void retranslateUi(QWidget *grpMQR)
    {
        grpMQR->setWindowTitle(QCoreApplication::translate("grpMQR", "Form", nullptr));
        lblMQRSize->setText(QCoreApplication::translate("grpMQR", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        lblMQRSize->setToolTip(QCoreApplication::translate("grpMQR", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMQRSize->setItemText(0, QCoreApplication::translate("grpMQR", "Automatic", nullptr));
        cmbMQRSize->setItemText(1, QCoreApplication::translate("grpMQR", "11 x 11 (Version M1)", nullptr));
        cmbMQRSize->setItemText(2, QCoreApplication::translate("grpMQR", "13 x 13 (Version M2)", nullptr));
        cmbMQRSize->setItemText(3, QCoreApplication::translate("grpMQR", "15 x 15 (Version M3)", nullptr));
        cmbMQRSize->setItemText(4, QCoreApplication::translate("grpMQR", "17 x 17 (Version M4)", nullptr));

#if QT_CONFIG(tooltip)
        cmbMQRSize->setToolTip(QCoreApplication::translate("grpMQR", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMQRECC->setText(QCoreApplication::translate("grpMQR", "E&rror Correction:", nullptr));
#if QT_CONFIG(tooltip)
        lblMQRECC->setToolTip(QCoreApplication::translate("grpMQR", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMQRECC->setItemText(0, QCoreApplication::translate("grpMQR", "Automatic", nullptr));
        cmbMQRECC->setItemText(1, QCoreApplication::translate("grpMQR", "~20% (Level L)", nullptr));
        cmbMQRECC->setItemText(2, QCoreApplication::translate("grpMQR", "~37% (Level M)", nullptr));
        cmbMQRECC->setItemText(3, QCoreApplication::translate("grpMQR", "~55% (Level Q)", nullptr));

#if QT_CONFIG(tooltip)
        cmbMQRECC->setToolTip(QCoreApplication::translate("grpMQR", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMQRMask->setText(QCoreApplication::translate("grpMQR", "&Mask:", nullptr));
#if QT_CONFIG(tooltip)
        lblMQRMask->setToolTip(QCoreApplication::translate("grpMQR", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMQRMask->setItemText(0, QCoreApplication::translate("grpMQR", "Automatic", nullptr));
        cmbMQRMask->setItemText(1, QCoreApplication::translate("grpMQR", "0", nullptr));
        cmbMQRMask->setItemText(2, QCoreApplication::translate("grpMQR", "1", nullptr));
        cmbMQRMask->setItemText(3, QCoreApplication::translate("grpMQR", "2", nullptr));
        cmbMQRMask->setItemText(4, QCoreApplication::translate("grpMQR", "3", nullptr));

#if QT_CONFIG(tooltip)
        cmbMQRMask->setToolTip(QCoreApplication::translate("grpMQR", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        chkMQRFullMultibyte->setText(QCoreApplication::translate("grpMQR", "&Full Multibyte", nullptr));
#if QT_CONFIG(tooltip)
        chkMQRFullMultibyte->setToolTip(QCoreApplication::translate("grpMQR", "Use Kanji multibyte encoding for binary\n"
"and Latin data", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpMQR: public Ui_grpMQR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPMQR_H
