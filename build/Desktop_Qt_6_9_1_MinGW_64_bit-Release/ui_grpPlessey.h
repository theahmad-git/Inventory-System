/********************************************************************************
** Form generated from reading UI file 'grpPlessey.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPPLESSEY_H
#define UI_GRPPLESSEY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpPlessey
{
public:
    QVBoxLayout *vLayoutPlessey;
    QCheckBox *chkPlesseyShowChecks;

    void setupUi(QWidget *grpPlessey)
    {
        if (grpPlessey->objectName().isEmpty())
            grpPlessey->setObjectName("grpPlessey");
        grpPlessey->resize(254, 131);
        vLayoutPlessey = new QVBoxLayout(grpPlessey);
        vLayoutPlessey->setObjectName("vLayoutPlessey");
        vLayoutPlessey->setContentMargins(0);
        vLayoutPlessey->setContentsMargins(0, 0, 0, 0);
        chkPlesseyShowChecks = new QCheckBox(grpPlessey);
        chkPlesseyShowChecks->setObjectName("chkPlesseyShowChecks");
        chkPlesseyShowChecks->setChecked(false);

        vLayoutPlessey->addWidget(chkPlesseyShowChecks);


        retranslateUi(grpPlessey);

        QMetaObject::connectSlotsByName(grpPlessey);
    } // setupUi

    void retranslateUi(QWidget *grpPlessey)
    {
        grpPlessey->setWindowTitle(QCoreApplication::translate("grpPlessey", "Form", nullptr));
        chkPlesseyShowChecks->setText(QCoreApplication::translate("grpPlessey", "Show Chec&k Characters in Text", nullptr));
#if QT_CONFIG(tooltip)
        chkPlesseyShowChecks->setToolTip(QCoreApplication::translate("grpPlessey", "Display the 2 check characters in\n"
"the Human Readable Text", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpPlessey: public Ui_grpPlessey {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPPLESSEY_H
