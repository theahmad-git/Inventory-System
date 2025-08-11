/********************************************************************************
** Form generated from reading UI file 'extScale.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTSCALE_H
#define UI_EXTSCALE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ScaleDialog
{
public:
    QVBoxLayout *verticalLayoutScale;
    QGridLayout *gridLayoutScale;
    QLabel *lblXdim;
    QDoubleSpinBox *spnXdim;
    QComboBox *cmbXdimUnits;
    QPushButton *btnXdimDefault;
    QLabel *lblResolution;
    QSpinBox *spnResolution;
    QComboBox *cmbResolutionUnits;
    QPushButton *btnResolutionDefault;
    QLabel *lblFileType;
    QComboBox *cmbFileType;
    QLabel *lblPrintingScale;
    QLabel *msgPrintingScale;
    QLabel *lblWidthHeight;
    QLabel *msgWidthHeight;
    QSpacerItem *verticalSpacerScale;
    QHBoxLayout *horzLayoutScaleBtns;
    QPushButton *btnScaleUnset;
    QSpacerItem *horzSpacerScaleBtns;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *ScaleDialog)
    {
        if (ScaleDialog->objectName().isEmpty())
            ScaleDialog->setObjectName("ScaleDialog");
        ScaleDialog->resize(250, 200);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":res/zint-qt.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ScaleDialog->setWindowIcon(icon);
        verticalLayoutScale = new QVBoxLayout(ScaleDialog);
        verticalLayoutScale->setObjectName("verticalLayoutScale");
        gridLayoutScale = new QGridLayout();
        gridLayoutScale->setObjectName("gridLayoutScale");
        lblXdim = new QLabel(ScaleDialog);
        lblXdim->setObjectName("lblXdim");
        lblXdim->setMaximumSize(QSize(120, 16777215));

        gridLayoutScale->addWidget(lblXdim, 0, 0, 1, 1);

        spnXdim = new QDoubleSpinBox(ScaleDialog);
        spnXdim->setObjectName("spnXdim");
        spnXdim->setDecimals(5);
        spnXdim->setMinimum(0.001000000000000);
        spnXdim->setMaximum(10.000000000000000);
        spnXdim->setSingleStep(0.010000000000000);
        spnXdim->setValue(1.000000000000000);

        gridLayoutScale->addWidget(spnXdim, 0, 1, 1, 1);

        cmbXdimUnits = new QComboBox(ScaleDialog);
        cmbXdimUnits->addItem(QString());
        cmbXdimUnits->addItem(QString());
        cmbXdimUnits->setObjectName("cmbXdimUnits");
        cmbXdimUnits->setMaximumSize(QSize(80, 16777215));

        gridLayoutScale->addWidget(cmbXdimUnits, 0, 2, 1, 1);

        btnXdimDefault = new QPushButton(ScaleDialog);
        btnXdimDefault->setObjectName("btnXdimDefault");
        btnXdimDefault->setAutoDefault(false);
        btnXdimDefault->setMaximumSize(QSize(80, 16777215));
        btnXdimDefault->setProperty("sizeHint", QVariant(QSize(40, 20)));

        gridLayoutScale->addWidget(btnXdimDefault, 0, 3, 1, 1);

        lblResolution = new QLabel(ScaleDialog);
        lblResolution->setObjectName("lblResolution");
        lblResolution->setMaximumSize(QSize(120, 16777215));

        gridLayoutScale->addWidget(lblResolution, 1, 0, 1, 1);

        spnResolution = new QSpinBox(ScaleDialog);
        spnResolution->setObjectName("spnResolution");
        spnResolution->setMaximum(25400);
        spnResolution->setMinimum(1);
        spnResolution->setValue(12);

        gridLayoutScale->addWidget(spnResolution, 1, 1, 1, 1);

        cmbResolutionUnits = new QComboBox(ScaleDialog);
        cmbResolutionUnits->addItem(QString());
        cmbResolutionUnits->addItem(QString());
        cmbResolutionUnits->setObjectName("cmbResolutionUnits");
        cmbResolutionUnits->setMaximumSize(QSize(80, 16777215));

        gridLayoutScale->addWidget(cmbResolutionUnits, 1, 2, 1, 1);

        btnResolutionDefault = new QPushButton(ScaleDialog);
        btnResolutionDefault->setObjectName("btnResolutionDefault");
        btnResolutionDefault->setAutoDefault(false);
        btnResolutionDefault->setMaximumSize(QSize(80, 16777215));

        gridLayoutScale->addWidget(btnResolutionDefault, 1, 3, 1, 1);

        lblFileType = new QLabel(ScaleDialog);
        lblFileType->setObjectName("lblFileType");
        lblFileType->setMaximumSize(QSize(120, 16777215));

        gridLayoutScale->addWidget(lblFileType, 2, 0, 1, 1);

        cmbFileType = new QComboBox(ScaleDialog);
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->addItem(QString());
        cmbFileType->setObjectName("cmbFileType");

        gridLayoutScale->addWidget(cmbFileType, 2, 1, 1, 3);

        lblPrintingScale = new QLabel(ScaleDialog);
        lblPrintingScale->setObjectName("lblPrintingScale");
        lblPrintingScale->setMaximumSize(QSize(120, 16777215));

        gridLayoutScale->addWidget(lblPrintingScale, 3, 0, 1, 1);

        msgPrintingScale = new QLabel(ScaleDialog);
        msgPrintingScale->setObjectName("msgPrintingScale");

        gridLayoutScale->addWidget(msgPrintingScale, 3, 1, 1, 3);

        lblWidthHeight = new QLabel(ScaleDialog);
        lblWidthHeight->setObjectName("lblWidthHeight");
        lblWidthHeight->setMaximumSize(QSize(120, 16777215));

        gridLayoutScale->addWidget(lblWidthHeight, 4, 0, 1, 1);

        msgWidthHeight = new QLabel(ScaleDialog);
        msgWidthHeight->setObjectName("msgWidthHeight");

        gridLayoutScale->addWidget(msgWidthHeight, 4, 1, 1, 3);


        verticalLayoutScale->addLayout(gridLayoutScale);

        verticalSpacerScale = new QSpacerItem(40, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutScale->addItem(verticalSpacerScale);

        horzLayoutScaleBtns = new QHBoxLayout();
        horzLayoutScaleBtns->setObjectName("horzLayoutScaleBtns");
        btnScaleUnset = new QPushButton(ScaleDialog);
        btnScaleUnset->setObjectName("btnScaleUnset");
        btnScaleUnset->setAutoDefault(false);

        horzLayoutScaleBtns->addWidget(btnScaleUnset);

        horzSpacerScaleBtns = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horzLayoutScaleBtns->addItem(horzSpacerScaleBtns);

        btnOK = new QPushButton(ScaleDialog);
        btnOK->setObjectName("btnOK");
        btnOK->setAutoDefault(true);

        horzLayoutScaleBtns->addWidget(btnOK);

        btnCancel = new QPushButton(ScaleDialog);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setAutoDefault(false);

        horzLayoutScaleBtns->addWidget(btnCancel);


        verticalLayoutScale->addLayout(horzLayoutScaleBtns);

#if QT_CONFIG(shortcut)
        lblXdim->setBuddy(spnXdim);
        lblResolution->setBuddy(spnResolution);
        lblFileType->setBuddy(cmbFileType);
#endif // QT_CONFIG(shortcut)

        retranslateUi(ScaleDialog);

        QMetaObject::connectSlotsByName(ScaleDialog);
    } // setupUi

    void retranslateUi(QDialog *ScaleDialog)
    {
        ScaleDialog->setWindowTitle(QCoreApplication::translate("ScaleDialog", "Set Printing Scale", nullptr));
#if QT_CONFIG(tooltip)
        lblXdim->setToolTip(QCoreApplication::translate("ScaleDialog", "X-dimension in selected units", nullptr));
#endif // QT_CONFIG(tooltip)
        lblXdim->setText(QCoreApplication::translate("ScaleDialog", "&X-dimension:", nullptr));
#if QT_CONFIG(tooltip)
        spnXdim->setToolTip(QCoreApplication::translate("ScaleDialog", "X-dimension in selected units", nullptr));
#endif // QT_CONFIG(tooltip)
        spnXdim->setSuffix(QString());
        cmbXdimUnits->setItemText(0, QCoreApplication::translate("ScaleDialog", "mm", nullptr));
        cmbXdimUnits->setItemText(1, QCoreApplication::translate("ScaleDialog", "in", nullptr));

#if QT_CONFIG(tooltip)
        cmbXdimUnits->setToolTip(QCoreApplication::translate("ScaleDialog", "X-dimension units (millimetres or inches)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnXdimDefault->setToolTip(QCoreApplication::translate("ScaleDialog", "Reset X-dimension to default (symbology specific)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnXdimDefault->setText(QCoreApplication::translate("ScaleDialog", "De&fault", nullptr));
#if QT_CONFIG(tooltip)
        lblResolution->setToolTip(QCoreApplication::translate("ScaleDialog", "Resolution (dot density) in selected units", nullptr));
#endif // QT_CONFIG(tooltip)
        lblResolution->setText(QCoreApplication::translate("ScaleDialog", "&Resolution:", nullptr));
#if QT_CONFIG(tooltip)
        spnResolution->setToolTip(QCoreApplication::translate("ScaleDialog", "Resolution (dot density) in selected units", nullptr));
#endif // QT_CONFIG(tooltip)
        spnResolution->setSuffix(QString());
        cmbResolutionUnits->setItemText(0, QCoreApplication::translate("ScaleDialog", "dpmm", nullptr));
        cmbResolutionUnits->setItemText(1, QCoreApplication::translate("ScaleDialog", "dpi", nullptr));

#if QT_CONFIG(tooltip)
        cmbResolutionUnits->setToolTip(QCoreApplication::translate("ScaleDialog", "Resolution units (dots per mm or dots per inch)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnResolutionDefault->setToolTip(QCoreApplication::translate("ScaleDialog", "Reset resolution to default (12 dpmm or 300 dpi)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnResolutionDefault->setText(QCoreApplication::translate("ScaleDialog", "Defau&lt", nullptr));
#if QT_CONFIG(tooltip)
        lblFileType->setToolTip(QCoreApplication::translate("ScaleDialog", "The type of file which will be outputted to", nullptr));
#endif // QT_CONFIG(tooltip)
        lblFileType->setText(QCoreApplication::translate("ScaleDialog", "File &Type:", nullptr));
        cmbFileType->setItemText(0, QCoreApplication::translate("ScaleDialog", "Raster (BMP/GIF/PCX/PNG/TIF)", nullptr));
        cmbFileType->setItemText(1, QCoreApplication::translate("ScaleDialog", "Vector (excluding EMF)", nullptr));
        cmbFileType->setItemText(2, QCoreApplication::translate("ScaleDialog", "Extended Metafile (EMF)", nullptr));

#if QT_CONFIG(tooltip)
        cmbFileType->setToolTip(QCoreApplication::translate("ScaleDialog", "The type of file which will be outputted to", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblPrintingScale->setToolTip(QCoreApplication::translate("ScaleDialog", "Calculated scale", nullptr));
#endif // QT_CONFIG(tooltip)
        lblPrintingScale->setText(QCoreApplication::translate("ScaleDialog", "Printing Scale:", nullptr));
#if QT_CONFIG(tooltip)
        msgPrintingScale->setToolTip(QCoreApplication::translate("ScaleDialog", "Calculated scale", nullptr));
#endif // QT_CONFIG(tooltip)
        msgPrintingScale->setText(QString());
#if QT_CONFIG(tooltip)
        lblWidthHeight->setToolTip(QCoreApplication::translate("ScaleDialog", "Image size (width x height) of barcode", nullptr));
#endif // QT_CONFIG(tooltip)
        lblWidthHeight->setText(QCoreApplication::translate("ScaleDialog", "Print Size:", nullptr));
#if QT_CONFIG(tooltip)
        msgWidthHeight->setToolTip(QCoreApplication::translate("ScaleDialog", "Image size (width x height) of barcode", nullptr));
#endif // QT_CONFIG(tooltip)
        msgWidthHeight->setText(QString());
        btnScaleUnset->setText(QCoreApplication::translate("ScaleDialog", " &Unset", nullptr));
#if QT_CONFIG(tooltip)
        btnScaleUnset->setToolTip(QCoreApplication::translate("ScaleDialog", "Reset the scale to the original value and\n"
"mark the settings as unset", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnOK->setToolTip(QCoreApplication::translate("ScaleDialog", "Close the window and update the Printing Scale", nullptr));
#endif // QT_CONFIG(tooltip)
        btnOK->setText(QCoreApplication::translate("ScaleDialog", "&Ok", nullptr));
#if QT_CONFIG(tooltip)
        btnCancel->setToolTip(QCoreApplication::translate("ScaleDialog", "Close window without updating the Printing Scale", nullptr));
#endif // QT_CONFIG(tooltip)
        btnCancel->setText(QCoreApplication::translate("ScaleDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ScaleDialog: public Ui_ScaleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTSCALE_H
