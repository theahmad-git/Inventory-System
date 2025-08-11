/********************************************************************************
** Form generated from reading UI file 'extCLI.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTCLI_H
#define UI_EXTCLI_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CLIDialog
{
public:
    QVBoxLayout *verticalLayoutCLI;
    QLabel *lblCLICmd;
    QPlainTextEdit *txtCLICmd;
    QGroupBox *groupBoxCLIUnixWin;
    QGridLayout *gridLayoutCLIUnixWin;
    QRadioButton *radCLIUnix;
    QRadioButton *radCLIWin;
    QHBoxLayout *horzLayoutCLIChks;
    QCheckBox *chkCLILongOpts;
    QCheckBox *chkCLIBarcodeName;
    QCheckBox *chkCLINoEXE;
    QHBoxLayout *horzLayoutCLIBtns;
    QStatusBar *statusBarCLI;
    QPushButton *btnCLICopy;
    QPushButton *btnCLIClose;

    void setupUi(QDialog *CLIDialog)
    {
        if (CLIDialog->objectName().isEmpty())
            CLIDialog->setObjectName("CLIDialog");
        CLIDialog->resize(429, 333);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":res/zint-qt.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CLIDialog->setWindowIcon(icon);
        CLIDialog->setModal(true);
        verticalLayoutCLI = new QVBoxLayout(CLIDialog);
        verticalLayoutCLI->setObjectName("verticalLayoutCLI");
        lblCLICmd = new QLabel(CLIDialog);
        lblCLICmd->setObjectName("lblCLICmd");

        verticalLayoutCLI->addWidget(lblCLICmd);

        txtCLICmd = new QPlainTextEdit(CLIDialog);
        txtCLICmd->setObjectName("txtCLICmd");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtCLICmd->sizePolicy().hasHeightForWidth());
        txtCLICmd->setSizePolicy(sizePolicy);
        txtCLICmd->setReadOnly(true);

        verticalLayoutCLI->addWidget(txtCLICmd);

        groupBoxCLIUnixWin = new QGroupBox(CLIDialog);
        groupBoxCLIUnixWin->setObjectName("groupBoxCLIUnixWin");
        gridLayoutCLIUnixWin = new QGridLayout(groupBoxCLIUnixWin);
        gridLayoutCLIUnixWin->setObjectName("gridLayoutCLIUnixWin");
        gridLayoutCLIUnixWin->setSizeConstraint(QLayout::SetMinimumSize);
        radCLIUnix = new QRadioButton(groupBoxCLIUnixWin);
        radCLIUnix->setObjectName("radCLIUnix");
        radCLIUnix->setChecked(true);

        gridLayoutCLIUnixWin->addWidget(radCLIUnix, 0, 0, 1, 1);

        radCLIWin = new QRadioButton(groupBoxCLIUnixWin);
        radCLIWin->setObjectName("radCLIWin");

        gridLayoutCLIUnixWin->addWidget(radCLIWin, 0, 1, 1, 1);


        verticalLayoutCLI->addWidget(groupBoxCLIUnixWin);

        horzLayoutCLIChks = new QHBoxLayout();
        horzLayoutCLIChks->setObjectName("horzLayoutCLIChks");
        chkCLILongOpts = new QCheckBox(CLIDialog);
        chkCLILongOpts->setObjectName("chkCLILongOpts");
        chkCLILongOpts->setChecked(false);

        horzLayoutCLIChks->addWidget(chkCLILongOpts);

        chkCLIBarcodeName = new QCheckBox(CLIDialog);
        chkCLIBarcodeName->setObjectName("chkCLIBarcodeName");
        chkCLIBarcodeName->setChecked(false);

        horzLayoutCLIChks->addWidget(chkCLIBarcodeName);

        chkCLINoEXE = new QCheckBox(CLIDialog);
        chkCLINoEXE->setObjectName("chkCLINoEXE");
        chkCLINoEXE->setChecked(false);

        horzLayoutCLIChks->addWidget(chkCLINoEXE);


        verticalLayoutCLI->addLayout(horzLayoutCLIChks);

        horzLayoutCLIBtns = new QHBoxLayout();
        horzLayoutCLIBtns->setObjectName("horzLayoutCLIBtns");
        horzLayoutCLIBtns->setSizeConstraint(QLayout::SetDefaultConstraint);
        statusBarCLI = new QStatusBar(CLIDialog);
        statusBarCLI->setObjectName("statusBarCLI");
        statusBarCLI->setSizeGripEnabled(false);
        statusBarCLI->setProperty("sizeHint", QVariant(QSize(40, 20)));

        horzLayoutCLIBtns->addWidget(statusBarCLI);

        btnCLICopy = new QPushButton(CLIDialog);
        btnCLICopy->setObjectName("btnCLICopy");

        horzLayoutCLIBtns->addWidget(btnCLICopy);

        btnCLIClose = new QPushButton(CLIDialog);
        btnCLIClose->setObjectName("btnCLIClose");

        horzLayoutCLIBtns->addWidget(btnCLIClose);


        verticalLayoutCLI->addLayout(horzLayoutCLIBtns);

#if QT_CONFIG(shortcut)
        lblCLICmd->setBuddy(txtCLICmd);
#endif // QT_CONFIG(shortcut)

        retranslateUi(CLIDialog);

        QMetaObject::connectSlotsByName(CLIDialog);
    } // setupUi

    void retranslateUi(QDialog *CLIDialog)
    {
        CLIDialog->setWindowTitle(QCoreApplication::translate("CLIDialog", "CLI Equivalent", nullptr));
        lblCLICmd->setText(QCoreApplication::translate("CLIDialog", "Command Line &Equivalent", nullptr));
#if QT_CONFIG(tooltip)
        lblCLICmd->setToolTip(QCoreApplication::translate("CLIDialog", "Current GUI settings as CLI equivalent", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxCLIUnixWin->setTitle(QCoreApplication::translate("CLIDialog", "Escape Method", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxCLIUnixWin->setToolTip(QCoreApplication::translate("CLIDialog", "How to escape data", nullptr));
#endif // QT_CONFIG(tooltip)
        radCLIUnix->setText(QCoreApplication::translate("CLIDialog", "&Unix", nullptr));
#if QT_CONFIG(tooltip)
        radCLIUnix->setToolTip(QCoreApplication::translate("CLIDialog", "Escape for Unix shell", nullptr));
#endif // QT_CONFIG(tooltip)
        radCLIWin->setText(QCoreApplication::translate("CLIDialog", "&Windows", nullptr));
#if QT_CONFIG(tooltip)
        radCLIWin->setToolTip(QCoreApplication::translate("CLIDialog", "Escape for Windows command prompt", nullptr));
#endif // QT_CONFIG(tooltip)
        chkCLILongOpts->setText(QCoreApplication::translate("CLIDialog", "&Long Options Only", nullptr));
#if QT_CONFIG(tooltip)
        chkCLILongOpts->setToolTip(QCoreApplication::translate("CLIDialog", "Only use long option names, not short ones", nullptr));
#endif // QT_CONFIG(tooltip)
        chkCLIBarcodeName->setText(QCoreApplication::translate("CLIDialog", "&Barcode Name", nullptr));
#if QT_CONFIG(tooltip)
        chkCLIBarcodeName->setToolTip(QCoreApplication::translate("CLIDialog", "Use name of barcode, not number", nullptr));
#endif // QT_CONFIG(tooltip)
        chkCLINoEXE->setText(QCoreApplication::translate("CLIDialog", "&No .exe (Windows)", nullptr));
#if QT_CONFIG(tooltip)
        chkCLINoEXE->setToolTip(QCoreApplication::translate("CLIDialog", "Do not add \".exe\" extension to zint command\n"
"(Windows only, ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnCLICopy->setToolTip(QCoreApplication::translate("CLIDialog", "Copy to clipboard", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCLICopy->setText(QCoreApplication::translate("CLIDialog", " C&opy", nullptr));
        btnCLIClose->setText(QCoreApplication::translate("CLIDialog", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        btnCLIClose->setToolTip(QCoreApplication::translate("CLIDialog", "Close window", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class CLIDialog: public Ui_CLIDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTCLI_H
