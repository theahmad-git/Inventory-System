/********************************************************************************
** Form generated from reading UI file 'grpHX.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPHX_H
#define UI_GRPHX_H

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

class Ui_grpHX
{
public:
    QVBoxLayout *vLayoutHX;
    QGridLayout *gLayoutHX;
    QLabel *labelHXSize;
    QComboBox *cmbHXSize;
    QLabel *labelHXECC;
    QComboBox *cmbHXECC;
    QLabel *labelHXMask;
    QComboBox *cmbHXMask;
    QCheckBox *chkHXFullMultibyte;
    QSpacerItem *vSpacerHX;

    void setupUi(QWidget *grpHX)
    {
        if (grpHX->objectName().isEmpty())
            grpHX->setObjectName("grpHX");
        grpHX->resize(400, 181);
        grpHX->setMaximumSize(QSize(600, 16777215));
        vLayoutHX = new QVBoxLayout(grpHX);
        vLayoutHX->setObjectName("vLayoutHX");
        gLayoutHX = new QGridLayout();
        gLayoutHX->setObjectName("gLayoutHX");
        labelHXSize = new QLabel(grpHX);
        labelHXSize->setObjectName("labelHXSize");

        gLayoutHX->addWidget(labelHXSize, 0, 0, 1, 1);

        cmbHXSize = new QComboBox(grpHX);
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->addItem(QString());
        cmbHXSize->setObjectName("cmbHXSize");
        cmbHXSize->setMaxVisibleItems(21);

        gLayoutHX->addWidget(cmbHXSize, 0, 1, 1, 1);

        labelHXECC = new QLabel(grpHX);
        labelHXECC->setObjectName("labelHXECC");

        gLayoutHX->addWidget(labelHXECC, 1, 0, 1, 1);

        cmbHXECC = new QComboBox(grpHX);
        cmbHXECC->addItem(QString());
        cmbHXECC->addItem(QString());
        cmbHXECC->addItem(QString());
        cmbHXECC->addItem(QString());
        cmbHXECC->addItem(QString());
        cmbHXECC->setObjectName("cmbHXECC");

        gLayoutHX->addWidget(cmbHXECC, 1, 1, 1, 1);

        labelHXMask = new QLabel(grpHX);
        labelHXMask->setObjectName("labelHXMask");

        gLayoutHX->addWidget(labelHXMask, 2, 0, 1, 1);

        cmbHXMask = new QComboBox(grpHX);
        cmbHXMask->addItem(QString());
        cmbHXMask->addItem(QString());
        cmbHXMask->addItem(QString());
        cmbHXMask->addItem(QString());
        cmbHXMask->addItem(QString());
        cmbHXMask->setObjectName("cmbHXMask");

        gLayoutHX->addWidget(cmbHXMask, 2, 1, 1, 1);


        vLayoutHX->addLayout(gLayoutHX);

        chkHXFullMultibyte = new QCheckBox(grpHX);
        chkHXFullMultibyte->setObjectName("chkHXFullMultibyte");
        chkHXFullMultibyte->setChecked(false);

        vLayoutHX->addWidget(chkHXFullMultibyte);

        vSpacerHX = new QSpacerItem(20, 43, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        vLayoutHX->addItem(vSpacerHX);

#if QT_CONFIG(shortcut)
        labelHXSize->setBuddy(cmbHXSize);
        labelHXECC->setBuddy(cmbHXECC);
        labelHXMask->setBuddy(cmbHXMask);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpHX);

        QMetaObject::connectSlotsByName(grpHX);
    } // setupUi

    void retranslateUi(QWidget *grpHX)
    {
        grpHX->setWindowTitle(QCoreApplication::translate("grpHX", "Form", nullptr));
        labelHXSize->setText(QCoreApplication::translate("grpHX", "Si&ze:", nullptr));
#if QT_CONFIG(tooltip)
        labelHXSize->setToolTip(QCoreApplication::translate("grpHX", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbHXSize->setItemText(0, QCoreApplication::translate("grpHX", "Automatic", nullptr));
        cmbHXSize->setItemText(1, QCoreApplication::translate("grpHX", "23 x 23 (Version 1)", nullptr));
        cmbHXSize->setItemText(2, QCoreApplication::translate("grpHX", "25 x 25 (Version 2)", nullptr));
        cmbHXSize->setItemText(3, QCoreApplication::translate("grpHX", "27 x 27 (Version 3)", nullptr));
        cmbHXSize->setItemText(4, QCoreApplication::translate("grpHX", "29 x 29 (Version 4)", nullptr));
        cmbHXSize->setItemText(5, QCoreApplication::translate("grpHX", "31 x 31 (Version 5)", nullptr));
        cmbHXSize->setItemText(6, QCoreApplication::translate("grpHX", "33 x 33 (Version 6)", nullptr));
        cmbHXSize->setItemText(7, QCoreApplication::translate("grpHX", "35 x 35 (Version 7)", nullptr));
        cmbHXSize->setItemText(8, QCoreApplication::translate("grpHX", "37 x 37 (Version 8)", nullptr));
        cmbHXSize->setItemText(9, QCoreApplication::translate("grpHX", "39 x 39 (Version 9)", nullptr));
        cmbHXSize->setItemText(10, QCoreApplication::translate("grpHX", "41 x 41 (Version 10)", nullptr));
        cmbHXSize->setItemText(11, QCoreApplication::translate("grpHX", "43 x 43 (Version 11)", nullptr));
        cmbHXSize->setItemText(12, QCoreApplication::translate("grpHX", "45 x 45 (Version 12)", nullptr));
        cmbHXSize->setItemText(13, QCoreApplication::translate("grpHX", "47 x 47 (Version 13)", nullptr));
        cmbHXSize->setItemText(14, QCoreApplication::translate("grpHX", "49 x 49 (Version 14)", nullptr));
        cmbHXSize->setItemText(15, QCoreApplication::translate("grpHX", "51 x 51 (Version 15)", nullptr));
        cmbHXSize->setItemText(16, QCoreApplication::translate("grpHX", "53 x 53 (Version 16)", nullptr));
        cmbHXSize->setItemText(17, QCoreApplication::translate("grpHX", "55 x 55 (Version 17)", nullptr));
        cmbHXSize->setItemText(18, QCoreApplication::translate("grpHX", "57 x 57 (Version 18)", nullptr));
        cmbHXSize->setItemText(19, QCoreApplication::translate("grpHX", "59 x 59 (Version 19)", nullptr));
        cmbHXSize->setItemText(20, QCoreApplication::translate("grpHX", "61 x 61 (Version 20)", nullptr));
        cmbHXSize->setItemText(21, QCoreApplication::translate("grpHX", "63 x 63 (Version 21)", nullptr));
        cmbHXSize->setItemText(22, QCoreApplication::translate("grpHX", "65 x 65 (Version 22)", nullptr));
        cmbHXSize->setItemText(23, QCoreApplication::translate("grpHX", "67 x 67 (Version 23)", nullptr));
        cmbHXSize->setItemText(24, QCoreApplication::translate("grpHX", "69 x 69 (Version 24)", nullptr));
        cmbHXSize->setItemText(25, QCoreApplication::translate("grpHX", "71 x 71 (Version 25)", nullptr));
        cmbHXSize->setItemText(26, QCoreApplication::translate("grpHX", "73 x 73 (Version 26)", nullptr));
        cmbHXSize->setItemText(27, QCoreApplication::translate("grpHX", "75 x 75 (Version 27)", nullptr));
        cmbHXSize->setItemText(28, QCoreApplication::translate("grpHX", "77 x 77 (Version 28)", nullptr));
        cmbHXSize->setItemText(29, QCoreApplication::translate("grpHX", "79 x 79 (Version 29)", nullptr));
        cmbHXSize->setItemText(30, QCoreApplication::translate("grpHX", "81 x 81 (Version 30)", nullptr));
        cmbHXSize->setItemText(31, QCoreApplication::translate("grpHX", "83 x 83 (Version 31)", nullptr));
        cmbHXSize->setItemText(32, QCoreApplication::translate("grpHX", "85 x 85 (Version 32)", nullptr));
        cmbHXSize->setItemText(33, QCoreApplication::translate("grpHX", "87 x 87 (Version 33)", nullptr));
        cmbHXSize->setItemText(34, QCoreApplication::translate("grpHX", "89 x 89 (Version 34)", nullptr));
        cmbHXSize->setItemText(35, QCoreApplication::translate("grpHX", "91 x 91 (Version 35)", nullptr));
        cmbHXSize->setItemText(36, QCoreApplication::translate("grpHX", "93 x 93 (Version 36)", nullptr));
        cmbHXSize->setItemText(37, QCoreApplication::translate("grpHX", "95 x 95 (Version 37)", nullptr));
        cmbHXSize->setItemText(38, QCoreApplication::translate("grpHX", "97 x 97 (Version 38)", nullptr));
        cmbHXSize->setItemText(39, QCoreApplication::translate("grpHX", "99 x 99 (Version 39)", nullptr));
        cmbHXSize->setItemText(40, QCoreApplication::translate("grpHX", "101 x 101 (Version 40)", nullptr));
        cmbHXSize->setItemText(41, QCoreApplication::translate("grpHX", "103 x 103 (Version 41)", nullptr));
        cmbHXSize->setItemText(42, QCoreApplication::translate("grpHX", "105 x 105 (Version 42)", nullptr));
        cmbHXSize->setItemText(43, QCoreApplication::translate("grpHX", "107 x 107 (Version 43)", nullptr));
        cmbHXSize->setItemText(44, QCoreApplication::translate("grpHX", "109 x 109 (Version 44)", nullptr));
        cmbHXSize->setItemText(45, QCoreApplication::translate("grpHX", "111 x 111 (Version 45)", nullptr));
        cmbHXSize->setItemText(46, QCoreApplication::translate("grpHX", "113 x 113 (Version 46)", nullptr));
        cmbHXSize->setItemText(47, QCoreApplication::translate("grpHX", "115 x 115 (Version 47)", nullptr));
        cmbHXSize->setItemText(48, QCoreApplication::translate("grpHX", "117 x 117 (Version 48)", nullptr));
        cmbHXSize->setItemText(49, QCoreApplication::translate("grpHX", "119 x 119 (Version 49)", nullptr));
        cmbHXSize->setItemText(50, QCoreApplication::translate("grpHX", "121 x 121 (Version 50)", nullptr));
        cmbHXSize->setItemText(51, QCoreApplication::translate("grpHX", "123 x 123 (Version 51)", nullptr));
        cmbHXSize->setItemText(52, QCoreApplication::translate("grpHX", "125 x 125 (Version 52)", nullptr));
        cmbHXSize->setItemText(53, QCoreApplication::translate("grpHX", "127 x 127 (Version 53)", nullptr));
        cmbHXSize->setItemText(54, QCoreApplication::translate("grpHX", "129 x 129 (Version 54)", nullptr));
        cmbHXSize->setItemText(55, QCoreApplication::translate("grpHX", "131 x 131 (Version 55)", nullptr));
        cmbHXSize->setItemText(56, QCoreApplication::translate("grpHX", "133 x 133 (Version 56)", nullptr));
        cmbHXSize->setItemText(57, QCoreApplication::translate("grpHX", "135 x 135 (Version 57)", nullptr));
        cmbHXSize->setItemText(58, QCoreApplication::translate("grpHX", "137 x 137 (Version 58)", nullptr));
        cmbHXSize->setItemText(59, QCoreApplication::translate("grpHX", "139 x 139 (Version 59)", nullptr));
        cmbHXSize->setItemText(60, QCoreApplication::translate("grpHX", "141 x 141 (Version 60)", nullptr));
        cmbHXSize->setItemText(61, QCoreApplication::translate("grpHX", "143 x 143 (Version 61)", nullptr));
        cmbHXSize->setItemText(62, QCoreApplication::translate("grpHX", "145 x 145 (Version 62)", nullptr));
        cmbHXSize->setItemText(63, QCoreApplication::translate("grpHX", "147 x 147 (Version 63)", nullptr));
        cmbHXSize->setItemText(64, QCoreApplication::translate("grpHX", "149 x 149 (Version 64)", nullptr));
        cmbHXSize->setItemText(65, QCoreApplication::translate("grpHX", "151 x 151 (Version 65)", nullptr));
        cmbHXSize->setItemText(66, QCoreApplication::translate("grpHX", "153 x 153 (Version 66)", nullptr));
        cmbHXSize->setItemText(67, QCoreApplication::translate("grpHX", "155 x 155 (Version 67)", nullptr));
        cmbHXSize->setItemText(68, QCoreApplication::translate("grpHX", "157 x 157 (Version 68)", nullptr));
        cmbHXSize->setItemText(69, QCoreApplication::translate("grpHX", "159 x 159 (Version 69)", nullptr));
        cmbHXSize->setItemText(70, QCoreApplication::translate("grpHX", "161 x 161 (Version 70)", nullptr));
        cmbHXSize->setItemText(71, QCoreApplication::translate("grpHX", "163 x 163 (Version 71)", nullptr));
        cmbHXSize->setItemText(72, QCoreApplication::translate("grpHX", "165 x 165 (Version 72)", nullptr));
        cmbHXSize->setItemText(73, QCoreApplication::translate("grpHX", "167 x 167 (Version 73)", nullptr));
        cmbHXSize->setItemText(74, QCoreApplication::translate("grpHX", "169 x 169 (Version 74)", nullptr));
        cmbHXSize->setItemText(75, QCoreApplication::translate("grpHX", "171 x 171 (Version 75)", nullptr));
        cmbHXSize->setItemText(76, QCoreApplication::translate("grpHX", "173 x 173 (Version 76)", nullptr));
        cmbHXSize->setItemText(77, QCoreApplication::translate("grpHX", "175 x 175 (Version 77)", nullptr));
        cmbHXSize->setItemText(78, QCoreApplication::translate("grpHX", "177 x 177 (Version 78)", nullptr));
        cmbHXSize->setItemText(79, QCoreApplication::translate("grpHX", "179 x 179 (Version 79)", nullptr));
        cmbHXSize->setItemText(80, QCoreApplication::translate("grpHX", "181 x 181 (Version 80)", nullptr));
        cmbHXSize->setItemText(81, QCoreApplication::translate("grpHX", "183 x 183 (Version 81)", nullptr));
        cmbHXSize->setItemText(82, QCoreApplication::translate("grpHX", "185 x 185 (Version 82)", nullptr));
        cmbHXSize->setItemText(83, QCoreApplication::translate("grpHX", "187 x 187 (Version 83)", nullptr));
        cmbHXSize->setItemText(84, QCoreApplication::translate("grpHX", "189 x 189 (Version 84)", nullptr));

#if QT_CONFIG(tooltip)
        cmbHXSize->setToolTip(QCoreApplication::translate("grpHX", "Set size (version) of symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        labelHXECC->setText(QCoreApplication::translate("grpHX", "E&rror Correction:", nullptr));
#if QT_CONFIG(tooltip)
        labelHXECC->setToolTip(QCoreApplication::translate("grpHX", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbHXECC->setItemText(0, QCoreApplication::translate("grpHX", "Automatic", nullptr));
        cmbHXECC->setItemText(1, QCoreApplication::translate("grpHX", "~8% (Level L1)", nullptr));
        cmbHXECC->setItemText(2, QCoreApplication::translate("grpHX", "~15% (Level L2)", nullptr));
        cmbHXECC->setItemText(3, QCoreApplication::translate("grpHX", "~23% (Level L3)", nullptr));
        cmbHXECC->setItemText(4, QCoreApplication::translate("grpHX", "~30% (Level L4)", nullptr));

#if QT_CONFIG(tooltip)
        cmbHXECC->setToolTip(QCoreApplication::translate("grpHX", "Set percentage of capacity to use for\n"
"error correction codewords", nullptr));
#endif // QT_CONFIG(tooltip)
        labelHXMask->setText(QCoreApplication::translate("grpHX", "&Mask:", nullptr));
#if QT_CONFIG(tooltip)
        labelHXMask->setToolTip(QCoreApplication::translate("grpHX", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbHXMask->setItemText(0, QCoreApplication::translate("grpHX", "Automatic", nullptr));
        cmbHXMask->setItemText(1, QCoreApplication::translate("grpHX", "0", nullptr));
        cmbHXMask->setItemText(2, QCoreApplication::translate("grpHX", "1", nullptr));
        cmbHXMask->setItemText(3, QCoreApplication::translate("grpHX", "2", nullptr));
        cmbHXMask->setItemText(4, QCoreApplication::translate("grpHX", "3", nullptr));

#if QT_CONFIG(tooltip)
        cmbHXMask->setToolTip(QCoreApplication::translate("grpHX", "Manually specify which mask to use", nullptr));
#endif // QT_CONFIG(tooltip)
        chkHXFullMultibyte->setText(QCoreApplication::translate("grpHX", "&Full Multibyte", nullptr));
#if QT_CONFIG(tooltip)
        chkHXFullMultibyte->setToolTip(QCoreApplication::translate("grpHX", "Use Hanzi multibyte encoding for binary\n"
"and Latin data", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpHX: public Ui_grpHX {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPHX_H
