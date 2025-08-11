/********************************************************************************
** Form generated from reading UI file 'extData.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTDATA_H
#define UI_EXTDATA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DataDialog
{
public:
    QVBoxLayout *vLayoutData;
    QLabel *label;
    QPlainTextEdit *txtDataInput;
    QHBoxLayout *hLayoutData;
    QPushButton *btnFromFile;
    QPushButton *btnDataClear;
    QStatusBar *statusBarData;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *DataDialog)
    {
        if (DataDialog->objectName().isEmpty())
            DataDialog->setObjectName("DataDialog");
        DataDialog->resize(500, 333);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":res/zint-qt.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DataDialog->setWindowIcon(icon);
        DataDialog->setModal(true);
        vLayoutData = new QVBoxLayout(DataDialog);
        vLayoutData->setObjectName("vLayoutData");
        label = new QLabel(DataDialog);
        label->setObjectName("label");

        vLayoutData->addWidget(label);

        txtDataInput = new QPlainTextEdit(DataDialog);
        txtDataInput->setObjectName("txtDataInput");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(txtDataInput->sizePolicy().hasHeightForWidth());
        txtDataInput->setSizePolicy(sizePolicy);

        vLayoutData->addWidget(txtDataInput);

        hLayoutData = new QHBoxLayout();
        hLayoutData->setObjectName("hLayoutData");
        hLayoutData->setSizeConstraint(QLayout::SetDefaultConstraint);
        btnFromFile = new QPushButton(DataDialog);
        btnFromFile->setObjectName("btnFromFile");
        btnFromFile->setAutoDefault(false);

        hLayoutData->addWidget(btnFromFile);

        btnDataClear = new QPushButton(DataDialog);
        btnDataClear->setObjectName("btnDataClear");
        btnDataClear->setAutoDefault(false);

        hLayoutData->addWidget(btnDataClear);

        statusBarData = new QStatusBar(DataDialog);
        statusBarData->setObjectName("statusBarData");
        statusBarData->setSizeGripEnabled(false);
        statusBarData->setProperty("sizeHint", QVariant(QSize(40, 20)));

        hLayoutData->addWidget(statusBarData);

        btnOK = new QPushButton(DataDialog);
        btnOK->setObjectName("btnOK");
        btnOK->setAutoDefault(false);

        hLayoutData->addWidget(btnOK);

        btnCancel = new QPushButton(DataDialog);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setAutoDefault(false);

        hLayoutData->addWidget(btnCancel);


        vLayoutData->addLayout(hLayoutData);

#if QT_CONFIG(shortcut)
        label->setBuddy(txtDataInput);
#endif // QT_CONFIG(shortcut)

        retranslateUi(DataDialog);

        QMetaObject::connectSlotsByName(DataDialog);
    } // setupUi

    void retranslateUi(QDialog *DataDialog)
    {
        DataDialog->setWindowTitle(QCoreApplication::translate("DataDialog", "Input Data", nullptr));
        label->setText(QCoreApplication::translate("DataDialog", "&Data", nullptr));
#if QT_CONFIG(tooltip)
        label->setToolTip(QCoreApplication::translate("DataDialog", "Input data", nullptr));
#endif // QT_CONFIG(tooltip)
        btnFromFile->setText(QCoreApplication::translate("DataDialog", "&From File...", nullptr));
#if QT_CONFIG(tooltip)
        btnFromFile->setToolTip(QCoreApplication::translate("DataDialog", "Import input data from a file. Certain characters <br/>will be converted to escape sequences\n"
"<table cellspacing=\"3\">\n"
"<tr><td>End of Transmission (0x04)</td><td>&nbsp;\\E</td></tr>\n"
"<tr><td>Bell (0x07)</td><td>&nbsp;\\a</td></tr>\n"
"<tr><td>Backspace (0x08)</td><td>&nbsp;\\b</td></tr>\n"
"<tr><td>Horizontal Tab (0x09)</td><td>&nbsp;\\t</td></tr>\n"
"<tr><td>Vertical Tab (0x0B)</td><td>&nbsp;\\v</td></tr>\n"
"<tr><td>Form Feed (0x0C)</td><td>&nbsp;\\f</td></tr>\n"
"<tr><td>Carriage Return (0x0D)</td><td>&nbsp;\\r</td></tr>\n"
"<tr><td>Escape (0x1B)</td><td>&nbsp;\\e</td></tr>\n"
"<tr><td>Group Separator (0x1D)</td><td>&nbsp;\\G</td></tr>\n"
"<tr><td>Record Separator (0x1E)</td><td>&nbsp;\\R</td></tr>\n"
"<tr><td>Backslash (0x5C)</td><td>&nbsp;\\\\</td></tr>\n"
"</table>\n"
"Note that Line Feeds (0x0A) are not included,<br/> but any present will be escaped on update", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDataClear->setText(QCoreApplication::translate("DataDialog", " C&lear", nullptr));
#if QT_CONFIG(tooltip)
        btnDataClear->setToolTip(QCoreApplication::translate("DataDialog", "Clear data window", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOK->setText(QCoreApplication::translate("DataDialog", " &OK", nullptr));
#if QT_CONFIG(tooltip)
        btnOK->setToolTip(QCoreApplication::translate("DataDialog", "Close window and update input data\n"
"Line Feeds (0xA0) will be escaped as \"\\n\"", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCancel->setText(QCoreApplication::translate("DataDialog", "&Cancel", nullptr));
#if QT_CONFIG(tooltip)
        btnCancel->setToolTip(QCoreApplication::translate("DataDialog", "Close window without updating input data", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class DataDialog: public Ui_DataDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTDATA_H
