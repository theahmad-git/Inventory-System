/********************************************************************************
** Form generated from reading UI file 'grpUPNQR.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPUPNQR_H
#define UI_GRPUPNQR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpUPNQR
{
public:
    QVBoxLayout *vLayoutUPNQR;
    QGridLayout *gridLayoutUPNQR;
    QLabel *lblUPNQRSizeECC;
    QLabel *lblUPNQRSizeECCMsg;
    QLabel *labelUPNQRMask;
    QComboBox *cmbUPNQRMask;
    QCheckBox *chkUPNQRFast;

    void setupUi(QWidget *grpUPNQR)
    {
        if (grpUPNQR->objectName().isEmpty())
            grpUPNQR->setObjectName("grpUPNQR");
        grpUPNQR->resize(400, 227);
        grpUPNQR->setMaximumSize(QSize(600, 16777215));
        vLayoutUPNQR = new QVBoxLayout(grpUPNQR);
        vLayoutUPNQR->setObjectName("vLayoutUPNQR");
        vLayoutUPNQR->setContentMargins(0);
        vLayoutUPNQR->setContentsMargins(0, 0, 0, 0);
        gridLayoutUPNQR = new QGridLayout();
        gridLayoutUPNQR->setObjectName("gridLayoutUPNQR");
        lblUPNQRSizeECC = new QLabel(grpUPNQR);
        lblUPNQRSizeECC->setObjectName("lblUPNQRSizeECC");

        gridLayoutUPNQR->addWidget(lblUPNQRSizeECC, 0, 0, 1, 1);

        lblUPNQRSizeECCMsg = new QLabel(grpUPNQR);
        lblUPNQRSizeECCMsg->setObjectName("lblUPNQRSizeECCMsg");

        gridLayoutUPNQR->addWidget(lblUPNQRSizeECCMsg, 0, 1, 1, 1);

        labelUPNQRMask = new QLabel(grpUPNQR);
        labelUPNQRMask->setObjectName("labelUPNQRMask");

        gridLayoutUPNQR->addWidget(labelUPNQRMask, 1, 0, 1, 1);

        cmbUPNQRMask = new QComboBox(grpUPNQR);
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->addItem(QString());
        cmbUPNQRMask->setObjectName("cmbUPNQRMask");

        gridLayoutUPNQR->addWidget(cmbUPNQRMask, 1, 1, 1, 1);


        vLayoutUPNQR->addLayout(gridLayoutUPNQR);

        chkUPNQRFast = new QCheckBox(grpUPNQR);
        chkUPNQRFast->setObjectName("chkUPNQRFast");
        chkUPNQRFast->setChecked(false);

        vLayoutUPNQR->addWidget(chkUPNQRFast);

#if QT_CONFIG(shortcut)
        labelUPNQRMask->setBuddy(cmbUPNQRMask);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpUPNQR);

        QMetaObject::connectSlotsByName(grpUPNQR);
    } // setupUi

    void retranslateUi(QWidget *grpUPNQR)
    {
        grpUPNQR->setWindowTitle(QCoreApplication::translate("grpUPNQR", "Form", nullptr));
        lblUPNQRSizeECC->setText(QCoreApplication::translate("grpUPNQR", "Size:", nullptr));
#if QT_CONFIG(tooltip)
        lblUPNQRSizeECC->setToolTip(QCoreApplication::translate("grpUPNQR", "Size (version) and error correction level\n"
"(pre-set)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblUPNQRSizeECCMsg->setText(QCoreApplication::translate("grpUPNQR", "77 x 77 (Version 15), ECC Level M", nullptr));
#if QT_CONFIG(tooltip)
        lblUPNQRSizeECCMsg->setToolTip(QCoreApplication::translate("grpUPNQR", "Size (version) and error correction level\n"
"(pre-set)", nullptr));
#endif // QT_CONFIG(tooltip)
        labelUPNQRMask->setText(QCoreApplication::translate("grpUPNQR", "&Mask:", nullptr));
#if QT_CONFIG(tooltip)
        labelUPNQRMask->setToolTip(QCoreApplication::translate("grpUPNQR", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbUPNQRMask->setItemText(0, QCoreApplication::translate("grpUPNQR", "Automatic", nullptr));
        cmbUPNQRMask->setItemText(1, QCoreApplication::translate("grpUPNQR", "0", nullptr));
        cmbUPNQRMask->setItemText(2, QCoreApplication::translate("grpUPNQR", "1", nullptr));
        cmbUPNQRMask->setItemText(3, QCoreApplication::translate("grpUPNQR", "2", nullptr));
        cmbUPNQRMask->setItemText(4, QCoreApplication::translate("grpUPNQR", "3", nullptr));
        cmbUPNQRMask->setItemText(5, QCoreApplication::translate("grpUPNQR", "4", nullptr));
        cmbUPNQRMask->setItemText(6, QCoreApplication::translate("grpUPNQR", "5", nullptr));
        cmbUPNQRMask->setItemText(7, QCoreApplication::translate("grpUPNQR", "6", nullptr));
        cmbUPNQRMask->setItemText(8, QCoreApplication::translate("grpUPNQR", "7", nullptr));

#if QT_CONFIG(tooltip)
        cmbUPNQRMask->setToolTip(QCoreApplication::translate("grpUPNQR", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        chkUPNQRFast->setText(QCoreApplication::translate("grpUPNQR", "&Fast mode", nullptr));
#if QT_CONFIG(tooltip)
        chkUPNQRFast->setToolTip(QCoreApplication::translate("grpUPNQR", "Only try four masks (0, 2, 4, 7) not eight\n"
"when automatically selecting a mask", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpUPNQR: public Ui_grpUPNQR {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPUPNQR_H
