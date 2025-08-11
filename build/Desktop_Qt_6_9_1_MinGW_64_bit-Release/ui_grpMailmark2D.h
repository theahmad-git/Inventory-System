/********************************************************************************
** Form generated from reading UI file 'grpMailmark2D.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPMAILMARK2D_H
#define UI_GRPMAILMARK2D_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpMailmark2D
{
public:
    QVBoxLayout *vLayoutMailmark2D;
    QGridLayout *gridLayoutMailmark2D;
    QLabel *lblMailmark2DSize;
    QComboBox *cmbMailmark2DSize;
    QLabel *lblMailmark2DAutoSize;
    QHBoxLayout *horzLayoutMailmark2DAutoSizeChecks;
    QCheckBox *chkMailmark2DRectangle;

    void setupUi(QWidget *grpMailmark2D)
    {
        if (grpMailmark2D->objectName().isEmpty())
            grpMailmark2D->setObjectName("grpMailmark2D");
        grpMailmark2D->resize(463, 339);
        grpMailmark2D->setMaximumSize(QSize(600, 16777215));
        vLayoutMailmark2D = new QVBoxLayout(grpMailmark2D);
        vLayoutMailmark2D->setObjectName("vLayoutMailmark2D");
        vLayoutMailmark2D->setContentMargins(0);
        vLayoutMailmark2D->setContentsMargins(0, 0, 0, 0);
        gridLayoutMailmark2D = new QGridLayout();
        gridLayoutMailmark2D->setObjectName("gridLayoutMailmark2D");
        lblMailmark2DSize = new QLabel(grpMailmark2D);
        lblMailmark2DSize->setObjectName("lblMailmark2DSize");

        gridLayoutMailmark2D->addWidget(lblMailmark2DSize, 0, 0, 1, 1);

        cmbMailmark2DSize = new QComboBox(grpMailmark2D);
        cmbMailmark2DSize->addItem(QString());
        cmbMailmark2DSize->addItem(QString());
        cmbMailmark2DSize->addItem(QString());
        cmbMailmark2DSize->addItem(QString());
        cmbMailmark2DSize->setObjectName("cmbMailmark2DSize");
        cmbMailmark2DSize->setMaxVisibleItems(21);

        gridLayoutMailmark2D->addWidget(cmbMailmark2DSize, 0, 1, 1, 1);

        lblMailmark2DAutoSize = new QLabel(grpMailmark2D);
        lblMailmark2DAutoSize->setObjectName("lblMailmark2DAutoSize");

        gridLayoutMailmark2D->addWidget(lblMailmark2DAutoSize, 1, 0, 1, 1);

        horzLayoutMailmark2DAutoSizeChecks = new QHBoxLayout();
        horzLayoutMailmark2DAutoSizeChecks->setObjectName("horzLayoutMailmark2DAutoSizeChecks");
        chkMailmark2DRectangle = new QCheckBox(grpMailmark2D);
        chkMailmark2DRectangle->setObjectName("chkMailmark2DRectangle");
        chkMailmark2DRectangle->setChecked(true);

        horzLayoutMailmark2DAutoSizeChecks->addWidget(chkMailmark2DRectangle);


        gridLayoutMailmark2D->addLayout(horzLayoutMailmark2DAutoSizeChecks, 1, 1, 1, 1);


        vLayoutMailmark2D->addLayout(gridLayoutMailmark2D);

#if QT_CONFIG(shortcut)
        lblMailmark2DSize->setBuddy(cmbMailmark2DSize);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpMailmark2D);

        QMetaObject::connectSlotsByName(grpMailmark2D);
    } // setupUi

    void retranslateUi(QWidget *grpMailmark2D)
    {
        grpMailmark2D->setWindowTitle(QCoreApplication::translate("grpMailmark2D", "Form", nullptr));
        lblMailmark2DSize->setText(QCoreApplication::translate("grpMailmark2D", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        lblMailmark2DSize->setToolTip(QCoreApplication::translate("grpMailmark2D", "Set height and width (H x W) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbMailmark2DSize->setItemText(0, QCoreApplication::translate("grpMailmark2D", "Automatic", nullptr));
        cmbMailmark2DSize->setItemText(1, QCoreApplication::translate("grpMailmark2D", "24 x 24 (Zint 8) - Type 7", nullptr));
        cmbMailmark2DSize->setItemText(2, QCoreApplication::translate("grpMailmark2D", "32 x 32 (Zint 10) - Type 9", nullptr));
        cmbMailmark2DSize->setItemText(3, QCoreApplication::translate("grpMailmark2D", "16 x 48 (Zint 30) - Type 29", nullptr));

#if QT_CONFIG(tooltip)
        cmbMailmark2DSize->setToolTip(QCoreApplication::translate("grpMailmark2D", "Set height and width (H x W) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        lblMailmark2DAutoSize->setText(QCoreApplication::translate("grpMailmark2D", "Automatic Size:", nullptr));
#if QT_CONFIG(tooltip)
        lblMailmark2DAutoSize->setToolTip(QCoreApplication::translate("grpMailmark2D", "Selection criteria when considering\n"
"automatic sizes\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        chkMailmark2DRectangle->setText(QCoreApplication::translate("grpMailmark2D", "Only Squar&e", nullptr));
#if QT_CONFIG(tooltip)
        chkMailmark2DRectangle->setToolTip(QCoreApplication::translate("grpMailmark2D", "Only consider square versions 8 and 10 on automatic symbol\n"
"size selection, suppressing rectangular version 30\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpMailmark2D: public Ui_grpMailmark2D {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPMAILMARK2D_H
