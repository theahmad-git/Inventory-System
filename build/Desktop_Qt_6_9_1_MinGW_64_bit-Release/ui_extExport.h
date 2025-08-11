/********************************************************************************
** Form generated from reading UI file 'extExport.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTEXPORT_H
#define UI_EXTEXPORT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QVBoxLayout *verticalLayoutExp;
    QGridLayout *gridLayoutExpFile;
    QLabel *lblDestPath;
    QLineEdit *linDestPath;
    QToolButton *btnDestPath;
    QLabel *lblPrefix;
    QLineEdit *linPrefix;
    QLabel *lblPostfix;
    QLineEdit *linPostfix;
    QLabel *lblFileName;
    QComboBox *cmbFileName;
    QLabel *lblFileType;
    QComboBox *cmbFileType;
    QHBoxLayout *horzLayoutExpBtns;
    QSpacerItem *horzSpacerExpBtns;
    QPushButton *btnOK;
    QPushButton *btnCancel;
    QLabel *lblFeedback;
    QPlainTextEdit *txtFeedback;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName("ExportDialog");
        ExportDialog->resize(450, 505);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":res/zint-qt.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ExportDialog->setWindowIcon(icon);
        verticalLayoutExp = new QVBoxLayout(ExportDialog);
        verticalLayoutExp->setObjectName("verticalLayoutExp");
        gridLayoutExpFile = new QGridLayout();
        gridLayoutExpFile->setObjectName("gridLayoutExpFile");
        lblDestPath = new QLabel(ExportDialog);
        lblDestPath->setObjectName("lblDestPath");

        gridLayoutExpFile->addWidget(lblDestPath, 0, 0, 1, 1);

        linDestPath = new QLineEdit(ExportDialog);
        linDestPath->setObjectName("linDestPath");
        linDestPath->setGeometry(QRect(140, 10, 261, 22));

        gridLayoutExpFile->addWidget(linDestPath, 0, 1, 1, 1);

        btnDestPath = new QToolButton(ExportDialog);
        btnDestPath->setObjectName("btnDestPath");

        gridLayoutExpFile->addWidget(btnDestPath, 0, 2, 1, 1);

        lblPrefix = new QLabel(ExportDialog);
        lblPrefix->setObjectName("lblPrefix");

        gridLayoutExpFile->addWidget(lblPrefix, 1, 0, 1, 1);

        linPrefix = new QLineEdit(ExportDialog);
        linPrefix->setObjectName("linPrefix");

        gridLayoutExpFile->addWidget(linPrefix, 1, 1, 1, 2);

        lblPostfix = new QLabel(ExportDialog);
        lblPostfix->setObjectName("lblPostfix");

        gridLayoutExpFile->addWidget(lblPostfix, 2, 0, 1, 1);

        linPostfix = new QLineEdit(ExportDialog);
        linPostfix->setObjectName("linPostfix");

        gridLayoutExpFile->addWidget(linPostfix, 2, 1, 1, 2);

        lblFileName = new QLabel(ExportDialog);
        lblFileName->setObjectName("lblFileName");

        gridLayoutExpFile->addWidget(lblFileName, 3, 0, 1, 1);

        cmbFileName = new QComboBox(ExportDialog);
        cmbFileName->addItem(QString());
        cmbFileName->addItem(QString());
        cmbFileName->setObjectName("cmbFileName");

        gridLayoutExpFile->addWidget(cmbFileName, 3, 1, 1, 2);

        lblFileType = new QLabel(ExportDialog);
        lblFileType->setObjectName("lblFileType");

        gridLayoutExpFile->addWidget(lblFileType, 4, 0, 1, 1);

        cmbFileType = new QComboBox(ExportDialog);
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->setObjectName("cmbFileType");

        gridLayoutExpFile->addWidget(cmbFileType, 4, 1, 1, 2);


        verticalLayoutExp->addLayout(gridLayoutExpFile);

        horzLayoutExpBtns = new QHBoxLayout();
        horzLayoutExpBtns->setObjectName("horzLayoutExpBtns");
        horzSpacerExpBtns = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horzLayoutExpBtns->addItem(horzSpacerExpBtns);

        btnOK = new QPushButton(ExportDialog);
        btnOK->setObjectName("btnOK");

        horzLayoutExpBtns->addWidget(btnOK);

        btnCancel = new QPushButton(ExportDialog);
        btnCancel->setObjectName("btnCancel");

        horzLayoutExpBtns->addWidget(btnCancel);


        verticalLayoutExp->addLayout(horzLayoutExpBtns);

        lblFeedback = new QLabel(ExportDialog);
        lblFeedback->setObjectName("lblFeedback");

        verticalLayoutExp->addWidget(lblFeedback);

        txtFeedback = new QPlainTextEdit(ExportDialog);
        txtFeedback->setObjectName("txtFeedback");
        txtFeedback->setReadOnly(true);

        verticalLayoutExp->addWidget(txtFeedback);

#if QT_CONFIG(shortcut)
        lblDestPath->setBuddy(linDestPath);
        lblPrefix->setBuddy(linPrefix);
        lblPostfix->setBuddy(linPostfix);
        lblFileName->setBuddy(cmbFileName);
        lblFileType->setBuddy(cmbFileType);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ExportDialog);

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QCoreApplication::translate("ExportDialog", "Export Barcodes", nullptr));
        lblDestPath->setText(QCoreApplication::translate("ExportDialog", "&Destination Path:", nullptr));
#if QT_CONFIG(tooltip)
        lblDestPath->setToolTip(QCoreApplication::translate("ExportDialog", "Destination folder", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        linDestPath->setToolTip(QCoreApplication::translate("ExportDialog", "Destination folder", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnDestPath->setToolTip(QCoreApplication::translate("ExportDialog", "Find a destination for your files", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDestPath->setText(QCoreApplication::translate("ExportDialog", "&...", nullptr));
        lblPrefix->setText(QCoreApplication::translate("ExportDialog", "File Name &Prefix:", nullptr));
#if QT_CONFIG(tooltip)
        lblPrefix->setToolTip(QCoreApplication::translate("ExportDialog", "The first part of the filenames", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        linPrefix->setToolTip(QCoreApplication::translate("ExportDialog", "The first part of the filenames", nullptr));
#endif // QT_CONFIG(tooltip)
        linPrefix->setText(QCoreApplication::translate("ExportDialog", "bcs_", nullptr));
        lblPostfix->setText(QCoreApplication::translate("ExportDialog", "File Name Postfi&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblPostfix->setToolTip(QCoreApplication::translate("ExportDialog", "The last part of the filenames", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        linPostfix->setToolTip(QCoreApplication::translate("ExportDialog", "The last part of the filenames", nullptr));
#endif // QT_CONFIG(tooltip)
        linPostfix->setText(QString());
        lblFileName->setText(QCoreApplication::translate("ExportDialog", "File &Name:", nullptr));
#if QT_CONFIG(tooltip)
        lblFileName->setToolTip(QCoreApplication::translate("ExportDialog", "Set the naming convention used by the files", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbFileName->setItemText(0, QCoreApplication::translate("ExportDialog", "Same as Data", nullptr));
        cmbFileName->setItemText(1, QCoreApplication::translate("ExportDialog", "Serial Number", nullptr));

#if QT_CONFIG(tooltip)
        cmbFileName->setToolTip(QCoreApplication::translate("ExportDialog", "Set the naming convention used by the files", nullptr));
#endif // QT_CONFIG(tooltip)
        lblFileType->setText(QCoreApplication::translate("ExportDialog", "File &Type:", nullptr));
#if QT_CONFIG(tooltip)
        lblFileType->setToolTip(QCoreApplication::translate("ExportDialog", "The type of file which you want to create", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbFileType->setItemText(0, QCoreApplication::translate("ExportDialog", "Portable Network Graphic (*.png)", nullptr));
        cmbFileType->setItemText(1, QCoreApplication::translate("ExportDialog", "Encapsulated Post Script (*.eps)", nullptr));
        cmbFileType->setItemText(2, QCoreApplication::translate("ExportDialog", "Graphics Interchange Format (*.gif)", nullptr));
        cmbFileType->setItemText(3, QCoreApplication::translate("ExportDialog", "Scalable Vector Graphic (*.svg)", nullptr));
        cmbFileType->setItemText(4, QCoreApplication::translate("ExportDialog", "Windows Bitmap (*.bmp)", nullptr));
        cmbFileType->setItemText(5, QCoreApplication::translate("ExportDialog", "ZSoft PC Painter Image (*.pcx)", nullptr));
        cmbFileType->setItemText(6, QCoreApplication::translate("ExportDialog", "Extended Metafile (*.emf)", nullptr));
        cmbFileType->setItemText(7, QCoreApplication::translate("ExportDialog", "Tagged Image File Format (*.tif)", nullptr));

#if QT_CONFIG(tooltip)
        cmbFileType->setToolTip(QCoreApplication::translate("ExportDialog", "The type of file which you want to create", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOK->setText(QCoreApplication::translate("ExportDialog", "&Export", nullptr));
#if QT_CONFIG(tooltip)
        btnOK->setToolTip(QCoreApplication::translate("ExportDialog", "Create files", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCancel->setText(QCoreApplication::translate("ExportDialog", "&Close", nullptr));
#if QT_CONFIG(tooltip)
        btnCancel->setToolTip(QCoreApplication::translate("ExportDialog", "Close window", nullptr));
#endif // QT_CONFIG(tooltip)
        lblFeedback->setText(QCoreApplication::translate("ExportDialog", "Export Results:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTEXPORT_H
