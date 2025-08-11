/********************************************************************************
** Form generated from reading UI file 'grpDBExtend.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPDBEXTEND_H
#define UI_GRPDBEXTEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpDBExtend
{
public:
    QVBoxLayout *verticalLayoutDBES;
    QGridLayout *gridLayoutDBES;
    QRadioButton *radDBESCols;
    QComboBox *cmbDBESCols;
    QRadioButton *radDBESRows;
    QComboBox *cmbDBESRows;
    QLabel *lblDBESHeightPerRow;
    QHBoxLayout *horzLayoutDBESHeightPerRow;
    QDoubleSpinBox *spnDBESHeightPerRow;
    QPushButton *btnDBESHeightPerRowDisable;
    QPushButton *btnDBESHeightPerRowDefault;
    QSpacerItem *verticalSpacerDBES;
    QButtonGroup *buttonGroupDBESColsRows;

    void setupUi(QWidget *grpDBExtend)
    {
        if (grpDBExtend->objectName().isEmpty())
            grpDBExtend->setObjectName("grpDBExtend");
        grpDBExtend->resize(310, 78);
        grpDBExtend->setMaximumSize(QSize(600, 16777215));
        verticalLayoutDBES = new QVBoxLayout(grpDBExtend);
        verticalLayoutDBES->setObjectName("verticalLayoutDBES");
        gridLayoutDBES = new QGridLayout();
        gridLayoutDBES->setObjectName("gridLayoutDBES");
        radDBESCols = new QRadioButton(grpDBExtend);
        buttonGroupDBESColsRows = new QButtonGroup(grpDBExtend);
        buttonGroupDBESColsRows->setObjectName("buttonGroupDBESColsRows");
        buttonGroupDBESColsRows->addButton(radDBESCols);
        radDBESCols->setObjectName("radDBESCols");
        radDBESCols->setChecked(true);

        gridLayoutDBES->addWidget(radDBESCols, 0, 0, 1, 1);

        cmbDBESCols = new QComboBox(grpDBExtend);
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->addItem(QString());
        cmbDBESCols->setObjectName("cmbDBESCols");
        cmbDBESCols->setEnabled(true);

        gridLayoutDBES->addWidget(cmbDBESCols, 0, 1, 1, 1);

        radDBESRows = new QRadioButton(grpDBExtend);
        buttonGroupDBESColsRows->addButton(radDBESRows);
        radDBESRows->setObjectName("radDBESRows");

        gridLayoutDBES->addWidget(radDBESRows, 1, 0, 1, 1);

        cmbDBESRows = new QComboBox(grpDBExtend);
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->addItem(QString());
        cmbDBESRows->setObjectName("cmbDBESRows");
        cmbDBESRows->setEnabled(false);

        gridLayoutDBES->addWidget(cmbDBESRows, 1, 1, 1, 1);

        lblDBESHeightPerRow = new QLabel(grpDBExtend);
        lblDBESHeightPerRow->setObjectName("lblDBESHeightPerRow");
        lblDBESHeightPerRow->setEnabled(false);
        lblDBESHeightPerRow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayoutDBES->addWidget(lblDBESHeightPerRow, 2, 0, 1, 1);

        horzLayoutDBESHeightPerRow = new QHBoxLayout();
        horzLayoutDBESHeightPerRow->setObjectName("horzLayoutDBESHeightPerRow");
        spnDBESHeightPerRow = new QDoubleSpinBox(grpDBExtend);
        spnDBESHeightPerRow->setObjectName("spnDBESHeightPerRow");
        spnDBESHeightPerRow->setEnabled(false);
        spnDBESHeightPerRow->setAccelerated(true);
        spnDBESHeightPerRow->setDecimals(3);
        spnDBESHeightPerRow->setMinimum(0.000000000000000);
        spnDBESHeightPerRow->setMaximum(2000.000000000000000);
        spnDBESHeightPerRow->setSingleStep(0.100000000000000);
        spnDBESHeightPerRow->setValue(0.000000000000000);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(2);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(spnDBESHeightPerRow->sizePolicy().hasHeightForWidth());
        spnDBESHeightPerRow->setSizePolicy(sizePolicy);

        horzLayoutDBESHeightPerRow->addWidget(spnDBESHeightPerRow);

        btnDBESHeightPerRowDisable = new QPushButton(grpDBExtend);
        btnDBESHeightPerRowDisable->setObjectName("btnDBESHeightPerRowDisable");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnDBESHeightPerRowDisable->sizePolicy().hasHeightForWidth());
        btnDBESHeightPerRowDisable->setSizePolicy(sizePolicy1);
        btnDBESHeightPerRowDisable->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutDBESHeightPerRow->addWidget(btnDBESHeightPerRowDisable);

        btnDBESHeightPerRowDefault = new QPushButton(grpDBExtend);
        btnDBESHeightPerRowDefault->setObjectName("btnDBESHeightPerRowDefault");
        sizePolicy1.setHeightForWidth(btnDBESHeightPerRowDefault->sizePolicy().hasHeightForWidth());
        btnDBESHeightPerRowDefault->setSizePolicy(sizePolicy1);
        btnDBESHeightPerRowDefault->setProperty("sizeHint", QVariant(QSize(30, 20)));

        horzLayoutDBESHeightPerRow->addWidget(btnDBESHeightPerRowDefault);


        gridLayoutDBES->addLayout(horzLayoutDBESHeightPerRow, 2, 1, 1, 1);


        verticalLayoutDBES->addLayout(gridLayoutDBES);

        verticalSpacerDBES = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutDBES->addItem(verticalSpacerDBES);

#if QT_CONFIG(shortcut)
        lblDBESHeightPerRow->setBuddy(spnDBESHeightPerRow);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpDBExtend);
        QObject::connect(radDBESCols, &QRadioButton::toggled, cmbDBESCols, &QComboBox::setEnabled);
        QObject::connect(radDBESRows, &QRadioButton::toggled, cmbDBESRows, &QComboBox::setEnabled);

        QMetaObject::connectSlotsByName(grpDBExtend);
    } // setupUi

    void retranslateUi(QWidget *grpDBExtend)
    {
        grpDBExtend->setWindowTitle(QCoreApplication::translate("grpDBExtend", "Form", nullptr));
        radDBESCols->setText(QCoreApplication::translate("grpDBExtend", "&Number of Columns:", nullptr));
#if QT_CONFIG(tooltip)
        radDBESCols->setToolTip(QCoreApplication::translate("grpDBExtend", "Set number of columns (each contains\n"
"2 data segments)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbDBESCols->setItemText(0, QCoreApplication::translate("grpDBExtend", "Automatic", nullptr));
        cmbDBESCols->setItemText(1, QCoreApplication::translate("grpDBExtend", "1 (2 segments)", nullptr));
        cmbDBESCols->setItemText(2, QCoreApplication::translate("grpDBExtend", "2 (4 segments)", nullptr));
        cmbDBESCols->setItemText(3, QCoreApplication::translate("grpDBExtend", "3 (6 segments)", nullptr));
        cmbDBESCols->setItemText(4, QCoreApplication::translate("grpDBExtend", "4 (8 segments)", nullptr));
        cmbDBESCols->setItemText(5, QCoreApplication::translate("grpDBExtend", "5 (10 segments)", nullptr));
        cmbDBESCols->setItemText(6, QCoreApplication::translate("grpDBExtend", "6 (12 segments)", nullptr));
        cmbDBESCols->setItemText(7, QCoreApplication::translate("grpDBExtend", "7 (14 segments)", nullptr));
        cmbDBESCols->setItemText(8, QCoreApplication::translate("grpDBExtend", "8 (16 segments)", nullptr));
        cmbDBESCols->setItemText(9, QCoreApplication::translate("grpDBExtend", "9 (18 segments)", nullptr));
        cmbDBESCols->setItemText(10, QCoreApplication::translate("grpDBExtend", "10 (20 segments)", nullptr));
        cmbDBESCols->setItemText(11, QCoreApplication::translate("grpDBExtend", "11 (22 segments)", nullptr));

#if QT_CONFIG(tooltip)
        cmbDBESCols->setToolTip(QCoreApplication::translate("grpDBExtend", "Set number of columns (each contains\n"
"2 data segments)", nullptr));
#endif // QT_CONFIG(tooltip)
        radDBESRows->setText(QCoreApplication::translate("grpDBExtend", "Maximum Ro&ws:", nullptr));
#if QT_CONFIG(tooltip)
        radDBESRows->setToolTip(QCoreApplication::translate("grpDBExtend", "Set maximum number of rows", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbDBESRows->setItemText(0, QCoreApplication::translate("grpDBExtend", "None", nullptr));
        cmbDBESRows->setItemText(1, QCoreApplication::translate("grpDBExtend", "2", nullptr));
        cmbDBESRows->setItemText(2, QCoreApplication::translate("grpDBExtend", "3", nullptr));
        cmbDBESRows->setItemText(3, QCoreApplication::translate("grpDBExtend", "4", nullptr));
        cmbDBESRows->setItemText(4, QCoreApplication::translate("grpDBExtend", "5", nullptr));
        cmbDBESRows->setItemText(5, QCoreApplication::translate("grpDBExtend", "6", nullptr));
        cmbDBESRows->setItemText(6, QCoreApplication::translate("grpDBExtend", "7", nullptr));
        cmbDBESRows->setItemText(7, QCoreApplication::translate("grpDBExtend", "8", nullptr));
        cmbDBESRows->setItemText(8, QCoreApplication::translate("grpDBExtend", "9", nullptr));
        cmbDBESRows->setItemText(9, QCoreApplication::translate("grpDBExtend", "10", nullptr));
        cmbDBESRows->setItemText(10, QCoreApplication::translate("grpDBExtend", "11 (same as none)", nullptr));

#if QT_CONFIG(tooltip)
        cmbDBESRows->setToolTip(QCoreApplication::translate("grpDBExtend", "Set maximum number of rows", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblDBESHeightPerRow->setToolTip(QCoreApplication::translate("grpDBExtend", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblDBESHeightPerRow->setText(QCoreApplication::translate("grpDBExtend", "Row &Height:", nullptr));
#if QT_CONFIG(tooltip)
        spnDBESHeightPerRow->setToolTip(QCoreApplication::translate("grpDBExtend", "Height per row in X-dimensions\n"
"Only available if \"Automatic Height\" in\n"
"the Appearance tab is not checked\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        spnDBESHeightPerRow->setPrefix(QString());
        spnDBESHeightPerRow->setSuffix(QCoreApplication::translate("grpDBExtend", " X", nullptr));
        spnDBESHeightPerRow->setSpecialValueText(QCoreApplication::translate("grpDBExtend", "0 (Disabled)", nullptr));
#if QT_CONFIG(tooltip)
        btnDBESHeightPerRowDisable->setToolTip(QCoreApplication::translate("grpDBExtend", "Set height per row to 0\n"
"(\"Height\" in the Appearance\n"
"tab will be re-enabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDBESHeightPerRowDisable->setText(QCoreApplication::translate("grpDBExtend", "Disabl&e", nullptr));
#if QT_CONFIG(tooltip)
        btnDBESHeightPerRowDefault->setToolTip(QCoreApplication::translate("grpDBExtend", "Set height per row to default value", nullptr));
#endif // QT_CONFIG(tooltip)
        btnDBESHeightPerRowDefault->setText(QCoreApplication::translate("grpDBExtend", "De&fault", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grpDBExtend: public Ui_grpDBExtend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPDBEXTEND_H
