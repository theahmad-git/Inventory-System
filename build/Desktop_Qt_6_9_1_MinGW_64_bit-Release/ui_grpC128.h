/********************************************************************************
** Form generated from reading UI file 'grpC128.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPC128_H
#define UI_GRPC128_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpC128
{
public:
    QVBoxLayout *verticalLayoutC128;
    QGroupBox *groupBoxC128EncodingMode;
    QGridLayout *gridLayoutC128EncodingMode;
    QRadioButton *radC128Stand;
    QRadioButton *radC128CSup;
    QRadioButton *radC128ExtraEsc;
    QRadioButton *radC128EAN;
    QRadioButton *radC128HIBC;
    QLabel *noteC128CompositeEAN;
    QSpacerItem *verticalSpacerC128;

    void setupUi(QWidget *grpC128)
    {
        if (grpC128->objectName().isEmpty())
            grpC128->setObjectName("grpC128");
        grpC128->setMaximumSize(QSize(600, 16777215));
        verticalLayoutC128 = new QVBoxLayout(grpC128);
        verticalLayoutC128->setObjectName("verticalLayoutC128");
        groupBoxC128EncodingMode = new QGroupBox(grpC128);
        groupBoxC128EncodingMode->setObjectName("groupBoxC128EncodingMode");
        gridLayoutC128EncodingMode = new QGridLayout(groupBoxC128EncodingMode);
        gridLayoutC128EncodingMode->setObjectName("gridLayoutC128EncodingMode");
        radC128Stand = new QRadioButton(groupBoxC128EncodingMode);
        radC128Stand->setObjectName("radC128Stand");
        radC128Stand->setChecked(true);

        gridLayoutC128EncodingMode->addWidget(radC128Stand, 0, 0, 1, 1);

        radC128CSup = new QRadioButton(groupBoxC128EncodingMode);
        radC128CSup->setObjectName("radC128CSup");

        gridLayoutC128EncodingMode->addWidget(radC128CSup, 0, 1, 1, 1);

        radC128ExtraEsc = new QRadioButton(groupBoxC128EncodingMode);
        radC128ExtraEsc->setObjectName("radC128ExtraEsc");

        gridLayoutC128EncodingMode->addWidget(radC128ExtraEsc, 1, 0, 1, 2);

        radC128EAN = new QRadioButton(groupBoxC128EncodingMode);
        radC128EAN->setObjectName("radC128EAN");

        gridLayoutC128EncodingMode->addWidget(radC128EAN, 2, 0, 1, 1);

        radC128HIBC = new QRadioButton(groupBoxC128EncodingMode);
        radC128HIBC->setObjectName("radC128HIBC");

        gridLayoutC128EncodingMode->addWidget(radC128HIBC, 2, 1, 1, 1);


        verticalLayoutC128->addWidget(groupBoxC128EncodingMode);

        noteC128CompositeEAN = new QLabel(grpC128);
        noteC128CompositeEAN->setObjectName("noteC128CompositeEAN");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(noteC128CompositeEAN->sizePolicy().hasHeightForWidth());
        noteC128CompositeEAN->setSizePolicy(sizePolicy);
        noteC128CompositeEAN->setTextFormat(Qt::PlainText);
        noteC128CompositeEAN->setAlignment(Qt::AlignCenter);
        noteC128CompositeEAN->setWordWrap(true);

        verticalLayoutC128->addWidget(noteC128CompositeEAN);

        verticalSpacerC128 = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayoutC128->addItem(verticalSpacerC128);


        retranslateUi(grpC128);

        QMetaObject::connectSlotsByName(grpC128);
    } // setupUi

    void retranslateUi(QWidget *grpC128)
    {
        grpC128->setWindowTitle(QCoreApplication::translate("grpC128", "Form", nullptr));
        groupBoxC128EncodingMode->setTitle(QCoreApplication::translate("grpC128", "Encoding Mode", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxC128EncodingMode->setToolTip(QCoreApplication::translate("grpC128", "How to process data", nullptr));
#endif // QT_CONFIG(tooltip)
        radC128Stand->setText(QCoreApplication::translate("grpC128", "S&tandard Mode", nullptr));
#if QT_CONFIG(tooltip)
        radC128Stand->setToolTip(QCoreApplication::translate("grpC128", "Process data as normal", nullptr));
#endif // QT_CONFIG(tooltip)
        radC128CSup->setText(QCoreApplication::translate("grpC128", "Code Set &C Suppression", nullptr));
#if QT_CONFIG(tooltip)
        radC128CSup->setToolTip(QCoreApplication::translate("grpC128", "Do not use Code Set C\n"
"(numeric compression)", nullptr));
#endif // QT_CONFIG(tooltip)
        radC128ExtraEsc->setText(QCoreApplication::translate("grpC128", "&Manual Code Sets and FNC1s (Extra Escape Mode)", nullptr));
#if QT_CONFIG(tooltip)
        radC128ExtraEsc->setToolTip(QCoreApplication::translate("grpC128", "Process special escape sequences \"\\^A\", \"\\^B\", \"\\^C\" and\n"
"\"\\^@\" allowing manual Code Set selection and special\n"
"escape sequence \"\\^1\" allowing manual FNC1s", nullptr));
#endif // QT_CONFIG(tooltip)
        radC128EAN->setText(QCoreApplication::translate("grpC128", "GS&1-128", nullptr));
#if QT_CONFIG(tooltip)
        radC128EAN->setToolTip(QCoreApplication::translate("grpC128", "Process data as GS1 General Specifications data,\n"
"formatted with Application Identifiers (AIs)", nullptr));
#endif // QT_CONFIG(tooltip)
        radC128HIBC->setText(QCoreApplication::translate("grpC128", "H&IBC", nullptr));
#if QT_CONFIG(tooltip)
        radC128HIBC->setToolTip(QCoreApplication::translate("grpC128", "Process data as a Health Industry Barcode (HIBC)\n"
"Labeler Identification Code (LIC)\n"
"For Provider Applications Standard (PAS), preface\n"
"the data with a slash \"/\"", nullptr));
#endif // QT_CONFIG(tooltip)
        noteC128CompositeEAN->setText(QCoreApplication::translate("grpC128", "Note: Composite symbols require a GS1-128 linear component.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class grpC128: public Ui_grpC128 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPC128_H
