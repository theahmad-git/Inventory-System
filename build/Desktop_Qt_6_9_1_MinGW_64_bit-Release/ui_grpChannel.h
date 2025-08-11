/********************************************************************************
** Form generated from reading UI file 'grpChannel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRPCHANNEL_H
#define UI_GRPCHANNEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_grpChannel
{
public:
    QVBoxLayout *vLayoutChannel;
    QHBoxLayout *hLayoutChannel;
    QLabel *lblChannel;
    QComboBox *cmbChannel;

    void setupUi(QWidget *grpChannel)
    {
        if (grpChannel->objectName().isEmpty())
            grpChannel->setObjectName("grpChannel");
        grpChannel->resize(310, 78);
        grpChannel->setMaximumSize(QSize(600, 16777215));
        vLayoutChannel = new QVBoxLayout(grpChannel);
        vLayoutChannel->setObjectName("vLayoutChannel");
        vLayoutChannel->setContentMargins(0);
        vLayoutChannel->setContentsMargins(0, 0, 0, 0);
        hLayoutChannel = new QHBoxLayout();
        hLayoutChannel->setObjectName("hLayoutChannel");
        lblChannel = new QLabel(grpChannel);
        lblChannel->setObjectName("lblChannel");
        lblChannel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        hLayoutChannel->addWidget(lblChannel);

        cmbChannel = new QComboBox(grpChannel);
        cmbChannel->addItem(QString());
        cmbChannel->addItem(QString());
        cmbChannel->addItem(QString());
        cmbChannel->addItem(QString());
        cmbChannel->addItem(QString());
        cmbChannel->addItem(QString());
        cmbChannel->addItem(QString());
        cmbChannel->setObjectName("cmbChannel");

        hLayoutChannel->addWidget(cmbChannel);


        vLayoutChannel->addLayout(hLayoutChannel);

#if QT_CONFIG(shortcut)
        lblChannel->setBuddy(cmbChannel);
#endif // QT_CONFIG(shortcut)

        retranslateUi(grpChannel);

        QMetaObject::connectSlotsByName(grpChannel);
    } // setupUi

    void retranslateUi(QWidget *grpChannel)
    {
        grpChannel->setWindowTitle(QCoreApplication::translate("grpChannel", "Form", nullptr));
        lblChannel->setText(QCoreApplication::translate("grpChannel", "Nu&mber of Channels:", nullptr));
#if QT_CONFIG(tooltip)
        lblChannel->setToolTip(QCoreApplication::translate("grpChannel", "The number of channels determines the<br />range of numbers that can be encoded<table cellspacing=\"3\">\n"
"><tr><th align=left>Channels&nbsp;</th><th align=left>Range</th></tr>\n"
"<tr><td>3&nbsp;</td><td>0 to 26</td></tr>\n"
"<tr><td>4&nbsp;</td><td>0 to 292</td></tr>\n"
"<tr><td>5&nbsp;</td><td>0 to 3493</td></tr>\n"
"<tr><td>6&nbsp;</td><td>0 to 44072</td></tr>\n"
"<tr><td>7&nbsp;</td><td>0 to 576688</td></tr>\n"
"<tr><td>8&nbsp;</td><td>0 to 7742862</td></tr>\n"
"</table>", nullptr));
#endif // QT_CONFIG(tooltip)
        cmbChannel->setItemText(0, QCoreApplication::translate("grpChannel", "Automatic", nullptr));
        cmbChannel->setItemText(1, QCoreApplication::translate("grpChannel", "3", nullptr));
        cmbChannel->setItemText(2, QCoreApplication::translate("grpChannel", "4", nullptr));
        cmbChannel->setItemText(3, QCoreApplication::translate("grpChannel", "5", nullptr));
        cmbChannel->setItemText(4, QCoreApplication::translate("grpChannel", "6", nullptr));
        cmbChannel->setItemText(5, QCoreApplication::translate("grpChannel", "7", nullptr));
        cmbChannel->setItemText(6, QCoreApplication::translate("grpChannel", "8", nullptr));

#if QT_CONFIG(tooltip)
        cmbChannel->setToolTip(QCoreApplication::translate("grpChannel", "The number of channels determines the<br />range of numbers that can be encoded<table cellspacing=\"3\">\n"
"><tr><th align=left>Channels&nbsp;</th><th align=left>Range</th></tr>\n"
"<tr><td>3&nbsp;</td><td>0 to 26</td></tr>\n"
"<tr><td>4&nbsp;</td><td>0 to 292</td></tr>\n"
"<tr><td>5&nbsp;</td><td>0 to 3493</td></tr>\n"
"<tr><td>6&nbsp;</td><td>0 to 44072</td></tr>\n"
"<tr><td>7&nbsp;</td><td>0 to 576688</td></tr>\n"
"<tr><td>8&nbsp;</td><td>0 to 7742862</td></tr>\n"
"</table>", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class grpChannel: public Ui_grpChannel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRPCHANNEL_H
