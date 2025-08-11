/********************************************************************************
** Form generated from reading UI file 'grpGrid.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPGRID_H
#define UI_GRPGRID_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpGrid
{
public:
    QVBoxLayout *vLayoutGrid;
    QGridLayout *gLayoutGrid;
    QLabel *labelGridSize;
    QComboBox *cmbGridSize;
    QLabel *labelGridECC;
    QComboBox *cmbGridECC;
    QLabel *noteGridECC;
    QCheckBox *chkGridFullMultibyte;
    QGroupBox *groupBoxGridStructApp;
    QGridLayout *gLayoutGridStructApp;
    QLabel *lblGridStructAppCount;
    QComboBox *cmbGridStructAppCount;
    QSpacerItem *spacerGridStructApp2;
    QLabel *lblGridStructAppIndex;
    QComboBox *cmbGridStructAppIndex;
    QSpacerItem *spacerGridStructApp5;
    QLabel *lblGridStructAppID;
    QSpinBox *spnGridStructAppID;
    QSpacerItem *vSpacerGrid;

    void setupUi(QWidget *grpGrid)
    {
        if (grpGrid->objectName().isEmpty())
            grpGrid->setObjectName("grpGrid");
        grpGrid->resize(400, 227);
        grpGrid->setMaximumSize(QSize(600, 16777215));
        vLayoutGrid = new QVBoxLayout(grpGrid);
        vLayoutGrid->setObjectName("vLayoutGrid");
        gLayoutGrid = new QGridLayout();
        gLayoutGrid->setObjectName("gLayoutGrid");
        labelGridSize = new QLabel(grpGrid);
        labelGridSize->setObjectName("labelGridSize");

        gLayoutGrid->addWidget(labelGridSize, 0, 0, 1, 1);

        cmbGridSize = new QComboBox(grpGrid);
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->addItem(QString());
        cmbGridSize->setObjectName("cmbGridSize");
        cmbGridSize->setMaxVisibleItems(14);

        gLayoutGrid->addWidget(cmbGridSize, 0, 1, 1, 1);

        labelGridECC = new QLabel(grpGrid);
        labelGridECC->setObjectName("labelGridECC");

        gLayoutGrid->addWidget(labelGridECC, 1, 0, 1, 1);

        cmbGridECC = new QComboBox(grpGrid);
        cmbGridECC->addItem(QString());
        cmbGridECC->addItem(QString());
        cmbGridECC->addItem(QString());
        cmbGridECC->addItem(QString());
        cmbGridECC->addItem(QString());
        cmbGridECC->addItem(QString());
        cmbGridECC->setObjectName("cmbGridECC");

        gLayoutGrid->addWidget(cmbGridECC, 1, 1, 1, 1);


        vLayoutGrid->addLayout(gLayoutGrid);

        noteGridECC = new QLabel(grpGrid);
        noteGridECC->setObjectName("noteGridECC");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noteGridECC->sizePolicy().hasHeightForWidth());
        noteGridECC->setSizePolicy(sizePolicy);
        noteGridECC->setTextFormat(Qt::PlainText);
        noteGridECC->setAlignment(Qt::AlignCenter);
        noteGridECC->setWordWrap(true);

        vLayoutGrid->addWidget(noteGridECC);

        chkGridFullMultibyte = new QCheckBox(grpGrid);
        chkGridFullMultibyte->setObjectName("chkGridFullMultibyte");
        chkGridFullMultibyte->setChecked(false);

        vLayoutGrid->addWidget(chkGridFullMultibyte);

        groupBoxGridStructApp = new QGroupBox(grpGrid);
        groupBoxGridStructApp->setObjectName("groupBoxGridStructApp");
        gLayoutGridStructApp = new QGridLayout(groupBoxGridStructApp);
        gLayoutGridStructApp->setObjectName("gLayoutGridStructApp");
        lblGridStructAppCount = new QLabel(groupBoxGridStructApp);
        lblGridStructAppCount->setObjectName("lblGridStructAppCount");
        lblGridStructAppCount->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutGridStructApp->addWidget(lblGridStructAppCount, 0, 0, 1, 1);

        cmbGridStructAppCount = new QComboBox(groupBoxGridStructApp);
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->addItem(QString());
        cmbGridStructAppCount->setObjectName("cmbGridStructAppCount");
        sizePolicy.setHeightForWidth(cmbGridStructAppCount->sizePolicy().hasHeightForWidth());
        cmbGridStructAppCount->setSizePolicy(sizePolicy);

        gLayoutGridStructApp->addWidget(cmbGridStructAppCount, 0, 1, 1, 1);

        spacerGridStructApp2 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutGridStructApp->addItem(spacerGridStructApp2, 0, 2, 1, 1);

        lblGridStructAppIndex = new QLabel(groupBoxGridStructApp);
        lblGridStructAppIndex->setObjectName("lblGridStructAppIndex");
        lblGridStructAppIndex->setEnabled(false);
        lblGridStructAppIndex->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutGridStructApp->addWidget(lblGridStructAppIndex, 0, 3, 1, 1);

        cmbGridStructAppIndex = new QComboBox(groupBoxGridStructApp);
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->addItem(QString());
        cmbGridStructAppIndex->setObjectName("cmbGridStructAppIndex");
        cmbGridStructAppIndex->setEnabled(false);
        sizePolicy.setHeightForWidth(cmbGridStructAppIndex->sizePolicy().hasHeightForWidth());
        cmbGridStructAppIndex->setSizePolicy(sizePolicy);

        gLayoutGridStructApp->addWidget(cmbGridStructAppIndex, 0, 4, 1, 1);

        spacerGridStructApp5 = new QSpacerItem(10, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gLayoutGridStructApp->addItem(spacerGridStructApp5, 0, 5, 1, 1);

        lblGridStructAppID = new QLabel(groupBoxGridStructApp);
        lblGridStructAppID->setObjectName("lblGridStructAppID");
        lblGridStructAppID->setEnabled(false);
        lblGridStructAppID->setAlignment(Qt::AlignLeft|Qt::AlignLeading|Qt::AlignVCenter);

        gLayoutGridStructApp->addWidget(lblGridStructAppID, 0, 6, 1, 1);

        spnGridStructAppID = new QSpinBox(groupBoxGridStructApp);
        spnGridStructAppID->setObjectName("spnGridStructAppID");
        spnGridStructAppID->setEnabled(false);
        spnGridStructAppID->setMinimum(0);
        spnGridStructAppID->setMaximum(255);
        spnGridStructAppID->setValue(0);

        gLayoutGridStructApp->addWidget(spnGridStructAppID, 0, 7, 1, 1);


        vLayoutGrid->addWidget(groupBoxGridStructApp);

        vSpacerGrid = new QSpacerItem(20, 50, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        vLayoutGrid->addItem(vSpacerGrid);

#if QT_CONFIG(shortcut)
        labelGridSize->setBuddy(cmbGridSize);
        labelGridECC->setBuddy(cmbGridECC);
        lblGridStructAppCount->setBuddy(cmbGridStructAppCount);
        lblGridStructAppIndex->setBuddy(cmbGridStructAppIndex);
        lblGridStructAppID->setBuddy(spnGridStructAppID);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpGrid);

        QMetaObject::connectSlotsByName(grpGrid);
    } // setupUi

    void retranslateUi(QWidget *grpGrid)
    {
        grpGrid->setWindowTitle(QCoreApplication::translate("grpGrid", "Form", nullptr));
        labelGridSize->setText(QCoreApplication::translate("grpGrid", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        labelGridSize->setToolTip(QCoreApplication::translate("grpGrid", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbGridSize->setItemText(0, QCoreApplication::translate("grpGrid", "Automatic", nullptr));
        cmbGridSize->setItemText(1, QCoreApplication::translate("grpGrid", "18 x 18 (Version 1)", nullptr));
        cmbGridSize->setItemText(2, QCoreApplication::translate("grpGrid", "30 x 30 (Version 2)", nullptr));
        cmbGridSize->setItemText(3, QCoreApplication::translate("grpGrid", "42 x 42 (Version 3)", nullptr));
        cmbGridSize->setItemText(4, QCoreApplication::translate("grpGrid", "54 x 54 (Version 4)", nullptr));
        cmbGridSize->setItemText(5, QCoreApplication::translate("grpGrid", "66 x 66 (Version 5)", nullptr));
        cmbGridSize->setItemText(6, QCoreApplication::translate("grpGrid", "78 x 78 (Version 6)", nullptr));
        cmbGridSize->setItemText(7, QCoreApplication::translate("grpGrid", "90 x 90 (Version 7)", nullptr));
        cmbGridSize->setItemText(8, QCoreApplication::translate("grpGrid", "102 x 102 (Version 8)", nullptr));
        cmbGridSize->setItemText(9, QCoreApplication::translate("grpGrid", "114 x 114 (Version 9)", nullptr));
        cmbGridSize->setItemText(10, QCoreApplication::translate("grpGrid", "126 x 126 (Version 10)", nullptr));
        cmbGridSize->setItemText(11, QCoreApplication::translate("grpGrid", "138 x 138 (Version 11)", nullptr));
        cmbGridSize->setItemText(12, QCoreApplication::translate("grpGrid", "150 x 150 (Version 12)", nullptr));
        cmbGridSize->setItemText(13, QCoreApplication::translate("grpGrid", "162 x 162 (Version 13)", nullptr));

#if QT_CONFIG(tooltip)
        cmbGridSize->setToolTip(QCoreApplication::translate("grpGrid", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        labelGridECC->setText(QCoreApplication::translate("grpGrid", "E&rror Correction:", nullptr));
#if QT_CONFIG(tooltip)
        labelGridECC->setToolTip(QCoreApplication::translate("grpGrid", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbGridECC->setItemText(0, QCoreApplication::translate("grpGrid", "Automatic", nullptr));
        cmbGridECC->setItemText(1, QCoreApplication::translate("grpGrid", "~10%", nullptr));
        cmbGridECC->setItemText(2, QCoreApplication::translate("grpGrid", "~20%", nullptr));
        cmbGridECC->setItemText(3, QCoreApplication::translate("grpGrid", "~30%", nullptr));
        cmbGridECC->setItemText(4, QCoreApplication::translate("grpGrid", "~40%", nullptr));
        cmbGridECC->setItemText(5, QCoreApplication::translate("grpGrid", "~50%", nullptr));

#if QT_CONFIG(tooltip)
        cmbGridECC->setToolTip(QCoreApplication::translate("grpGrid", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        noteGridECC->setText(QCoreApplication::translate("grpGrid", "Note: Error Correction is ignored if it is below the minimum available or is too high for a given size.", nullptr));
        chkGridFullMultibyte->setText(QCoreApplication::translate("grpGrid", "&Full Multibyte", nullptr));
#if QT_CONFIG(tooltip)
        chkGridFullMultibyte->setToolTip(QCoreApplication::translate("grpGrid", "Use Hanzi multibyte encoding for binary\n"
"and Latin data", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxGridStructApp->setTitle(QCoreApplication::translate("grpGrid", "Structured Append", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxGridStructApp->setToolTip(QCoreApplication::translate("grpGrid", "Grid Matrix supports Structured Append of up to\n"
"16 symbols", nullptr));
#endif // QT_CONFIG(tooltip)
        lblGridStructAppCount->setText(QCoreApplication::translate("grpGrid", "C&ount:", nullptr));
#if QT_CONFIG(tooltip)
        lblGridStructAppCount->setToolTip(QCoreApplication::translate("grpGrid", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbGridStructAppCount->setItemText(0, QCoreApplication::translate("grpGrid", "Disabled", nullptr));
        cmbGridStructAppCount->setItemText(1, QCoreApplication::translate("grpGrid", "2", nullptr));
        cmbGridStructAppCount->setItemText(2, QCoreApplication::translate("grpGrid", "3", nullptr));
        cmbGridStructAppCount->setItemText(3, QCoreApplication::translate("grpGrid", "4", nullptr));
        cmbGridStructAppCount->setItemText(4, QCoreApplication::translate("grpGrid", "5", nullptr));
        cmbGridStructAppCount->setItemText(5, QCoreApplication::translate("grpGrid", "6", nullptr));
        cmbGridStructAppCount->setItemText(6, QCoreApplication::translate("grpGrid", "7", nullptr));
        cmbGridStructAppCount->setItemText(7, QCoreApplication::translate("grpGrid", "8", nullptr));
        cmbGridStructAppCount->setItemText(8, QCoreApplication::translate("grpGrid", "9", nullptr));
        cmbGridStructAppCount->setItemText(9, QCoreApplication::translate("grpGrid", "10", nullptr));
        cmbGridStructAppCount->setItemText(10, QCoreApplication::translate("grpGrid", "11", nullptr));
        cmbGridStructAppCount->setItemText(11, QCoreApplication::translate("grpGrid", "12", nullptr));
        cmbGridStructAppCount->setItemText(12, QCoreApplication::translate("grpGrid", "13", nullptr));
        cmbGridStructAppCount->setItemText(13, QCoreApplication::translate("grpGrid", "14", nullptr));
        cmbGridStructAppCount->setItemText(14, QCoreApplication::translate("grpGrid", "15", nullptr));
        cmbGridStructAppCount->setItemText(15, QCoreApplication::translate("grpGrid", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbGridStructAppCount->setToolTip(QCoreApplication::translate("grpGrid", "Mark symbol as part of a Structured Append sequence\n"
"containing a total of this number of symbols\n"
"Value ranges from 2 to 16", nullptr));
#endif // QT_CONFIG(tooltip)
        lblGridStructAppIndex->setText(QCoreApplication::translate("grpGrid", "Inde&x:", nullptr));
#if QT_CONFIG(tooltip)
        lblGridStructAppIndex->setToolTip(QCoreApplication::translate("grpGrid", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbGridStructAppIndex->setItemText(0, QCoreApplication::translate("grpGrid", "1", nullptr));
        cmbGridStructAppIndex->setItemText(1, QCoreApplication::translate("grpGrid", "2", nullptr));
        cmbGridStructAppIndex->setItemText(2, QCoreApplication::translate("grpGrid", "3", nullptr));
        cmbGridStructAppIndex->setItemText(3, QCoreApplication::translate("grpGrid", "4", nullptr));
        cmbGridStructAppIndex->setItemText(4, QCoreApplication::translate("grpGrid", "5", nullptr));
        cmbGridStructAppIndex->setItemText(5, QCoreApplication::translate("grpGrid", "6", nullptr));
        cmbGridStructAppIndex->setItemText(6, QCoreApplication::translate("grpGrid", "7", nullptr));
        cmbGridStructAppIndex->setItemText(7, QCoreApplication::translate("grpGrid", "8", nullptr));
        cmbGridStructAppIndex->setItemText(8, QCoreApplication::translate("grpGrid", "9", nullptr));
        cmbGridStructAppIndex->setItemText(9, QCoreApplication::translate("grpGrid", "10", nullptr));
        cmbGridStructAppIndex->setItemText(10, QCoreApplication::translate("grpGrid", "11", nullptr));
        cmbGridStructAppIndex->setItemText(11, QCoreApplication::translate("grpGrid", "12", nullptr));
        cmbGridStructAppIndex->setItemText(12, QCoreApplication::translate("grpGrid", "13", nullptr));
        cmbGridStructAppIndex->setItemText(13, QCoreApplication::translate("grpGrid", "14", nullptr));
        cmbGridStructAppIndex->setItemText(14, QCoreApplication::translate("grpGrid", "15", nullptr));
        cmbGridStructAppIndex->setItemText(15, QCoreApplication::translate("grpGrid", "16", nullptr));

#if QT_CONFIG(tooltip)
        cmbGridStructAppIndex->setToolTip(QCoreApplication::translate("grpGrid", "Position of symbol in Structured Append sequence\n"
"Value ranges from 1 to count\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblGridStructAppID->setToolTip(QCoreApplication::translate("grpGrid", "ID (file signature) to indicate that symbols belong\n"
"to the same Structured Append sequence\n"
"Value ranges from 0 to 255\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
        lblGridStructAppID->setText(QCoreApplication::translate("grpGrid", "I&D:", nullptr));
#if QT_CONFIG(tooltip)
        spnGridStructAppID->setToolTip(QCoreApplication::translate("grpGrid", "ID (file signature) to indicate that symbols belong\n"
"to the same Structured Append sequence\n"
"Value ranges from 0 to 255\n"
"(ignored if disabled)", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpGrid: public Ui_grpGrid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPGRID_H
