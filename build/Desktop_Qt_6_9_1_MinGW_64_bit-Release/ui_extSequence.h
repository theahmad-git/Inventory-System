/********************************************************************************
** Form generated from reading UI file 'extSequence.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTSEQUENCE_H
#define UI_EXTSEQUENCE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SequenceDialog
{
public:
    QVBoxLayout *vertLayoutSeq;
    QHBoxLayout *horzLayoutSeq;
    QVBoxLayout *vertLayoutSeqCreate;
    QGroupBox *groupBoxSeqCreate;
    QGridLayout *gridLayoutSeqCreate;
    QLabel *lblSeqStartVal;
    QSpinBox *spnSeqStartVal;
    QLabel *lblSeqEndVal;
    QSpinBox *spnSeqEndVal;
    QLabel *lblSeqIncVal;
    QSpinBox *spnSeqIncVal;
    QLabel *lblSeqFormat;
    QLineEdit *linSeqFormat;
    QHBoxLayout *horzLayoutSeqCreateBtn;
    QSpacerItem *horzSpacerSeqCreateBtn;
    QPushButton *btnSeqCreate;
    QSpacerItem *vertSpacerCreate;
    QGroupBox *groupBoxSeqPreview;
    QVBoxLayout *vertLayoutSeqPreview;
    QPlainTextEdit *txtSeqPreview;
    QHBoxLayout *horzLayoutSeqBtns;
    QPushButton *btnSeqFromFile;
    QPushButton *btnSeqClear;
    QSpacerItem *horzSpacerSeqBtns;
    QPushButton *btnSeqExport;
    QPushButton *btnSeqClose;

    void setupUi(QDialog *SequenceDialog)
    {
        if (SequenceDialog->objectName().isEmpty())
            SequenceDialog->setObjectName("SequenceDialog");
        SequenceDialog->resize(637, 423);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":res/zint-qt.ico"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SequenceDialog->setWindowIcon(icon);
        SequenceDialog->setModal(true);
        vertLayoutSeq = new QVBoxLayout(SequenceDialog);
        vertLayoutSeq->setObjectName("vertLayoutSeq");
        horzLayoutSeq = new QHBoxLayout();
        horzLayoutSeq->setObjectName("horzLayoutSeq");
        vertLayoutSeqCreate = new QVBoxLayout();
        vertLayoutSeqCreate->setObjectName("vertLayoutSeqCreate");
        groupBoxSeqCreate = new QGroupBox(SequenceDialog);
        groupBoxSeqCreate->setObjectName("groupBoxSeqCreate");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBoxSeqCreate->sizePolicy().hasHeightForWidth());
        groupBoxSeqCreate->setSizePolicy(sizePolicy);
        gridLayoutSeqCreate = new QGridLayout(groupBoxSeqCreate);
        gridLayoutSeqCreate->setObjectName("gridLayoutSeqCreate");
        lblSeqStartVal = new QLabel(groupBoxSeqCreate);
        lblSeqStartVal->setObjectName("lblSeqStartVal");

        gridLayoutSeqCreate->addWidget(lblSeqStartVal, 0, 0, 1, 1);

        spnSeqStartVal = new QSpinBox(groupBoxSeqCreate);
        spnSeqStartVal->setObjectName("spnSeqStartVal");
        spnSeqStartVal->setFrame(true);
        spnSeqStartVal->setMaximum(999999999);

        gridLayoutSeqCreate->addWidget(spnSeqStartVal, 0, 1, 1, 1);

        lblSeqEndVal = new QLabel(groupBoxSeqCreate);
        lblSeqEndVal->setObjectName("lblSeqEndVal");

        gridLayoutSeqCreate->addWidget(lblSeqEndVal, 1, 0, 1, 1);

        spnSeqEndVal = new QSpinBox(groupBoxSeqCreate);
        spnSeqEndVal->setObjectName("spnSeqEndVal");
        spnSeqEndVal->setMaximum(999999999);

        gridLayoutSeqCreate->addWidget(spnSeqEndVal, 1, 1, 1, 1);

        lblSeqIncVal = new QLabel(groupBoxSeqCreate);
        lblSeqIncVal->setObjectName("lblSeqIncVal");

        gridLayoutSeqCreate->addWidget(lblSeqIncVal, 2, 0, 1, 1);

        spnSeqIncVal = new QSpinBox(groupBoxSeqCreate);
        spnSeqIncVal->setObjectName("spnSeqIncVal");
        spnSeqIncVal->setMinimum(1);
        spnSeqIncVal->setMaximum(999999999);

        gridLayoutSeqCreate->addWidget(spnSeqIncVal, 2, 1, 1, 1);

        lblSeqFormat = new QLabel(groupBoxSeqCreate);
        lblSeqFormat->setObjectName("lblSeqFormat");

        gridLayoutSeqCreate->addWidget(lblSeqFormat, 3, 0, 1, 1);

        linSeqFormat = new QLineEdit(groupBoxSeqCreate);
        linSeqFormat->setObjectName("linSeqFormat");

        gridLayoutSeqCreate->addWidget(linSeqFormat, 4, 0, 1, 2);

        horzLayoutSeqCreateBtn = new QHBoxLayout();
        horzLayoutSeqCreateBtn->setObjectName("horzLayoutSeqCreateBtn");
        horzSpacerSeqCreateBtn = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horzLayoutSeqCreateBtn->addItem(horzSpacerSeqCreateBtn);

        btnSeqCreate = new QPushButton(groupBoxSeqCreate);
        btnSeqCreate->setObjectName("btnSeqCreate");

        horzLayoutSeqCreateBtn->addWidget(btnSeqCreate);


        gridLayoutSeqCreate->addLayout(horzLayoutSeqCreateBtn, 5, 0, 1, 2);


        vertLayoutSeqCreate->addWidget(groupBoxSeqCreate);

        vertSpacerCreate = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        vertLayoutSeqCreate->addItem(vertSpacerCreate);


        horzLayoutSeq->addLayout(vertLayoutSeqCreate);

        groupBoxSeqPreview = new QGroupBox(SequenceDialog);
        groupBoxSeqPreview->setObjectName("groupBoxSeqPreview");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBoxSeqPreview->sizePolicy().hasHeightForWidth());
        groupBoxSeqPreview->setSizePolicy(sizePolicy1);
        groupBoxSeqPreview->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vertLayoutSeqPreview = new QVBoxLayout(groupBoxSeqPreview);
        vertLayoutSeqPreview->setObjectName("vertLayoutSeqPreview");
        txtSeqPreview = new QPlainTextEdit(groupBoxSeqPreview);
        txtSeqPreview->setObjectName("txtSeqPreview");

        vertLayoutSeqPreview->addWidget(txtSeqPreview);


        horzLayoutSeq->addWidget(groupBoxSeqPreview);


        vertLayoutSeq->addLayout(horzLayoutSeq);

        horzLayoutSeqBtns = new QHBoxLayout();
        horzLayoutSeqBtns->setObjectName("horzLayoutSeqBtns");
        btnSeqFromFile = new QPushButton(SequenceDialog);
        btnSeqFromFile->setObjectName("btnSeqFromFile");

        horzLayoutSeqBtns->addWidget(btnSeqFromFile);

        btnSeqClear = new QPushButton(SequenceDialog);
        btnSeqClear->setObjectName("btnSeqClear");

        horzLayoutSeqBtns->addWidget(btnSeqClear);

        horzSpacerSeqBtns = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horzLayoutSeqBtns->addItem(horzSpacerSeqBtns);

        btnSeqExport = new QPushButton(SequenceDialog);
        btnSeqExport->setObjectName("btnSeqExport");
        btnSeqExport->setEnabled(false);

        horzLayoutSeqBtns->addWidget(btnSeqExport);

        btnSeqClose = new QPushButton(SequenceDialog);
        btnSeqClose->setObjectName("btnSeqClose");

        horzLayoutSeqBtns->addWidget(btnSeqClose);


        vertLayoutSeq->addLayout(horzLayoutSeqBtns);

#if QT_CONFIG(shortcut)
        lblSeqStartVal->setBuddy(spnSeqStartVal);
        lblSeqEndVal->setBuddy(spnSeqEndVal);
        lblSeqIncVal->setBuddy(spnSeqIncVal);
        lblSeqFormat->setBuddy(linSeqFormat);
#endif // QT_CONFIG(shortcut)

        retranslateUi(SequenceDialog);

        QMetaObject::connectSlotsByName(SequenceDialog);
    } // setupUi

    void retranslateUi(QDialog *SequenceDialog)
    {
        SequenceDialog->setWindowTitle(QCoreApplication::translate("SequenceDialog", "Sequence Export", nullptr));
        groupBoxSeqCreate->setTitle(QCoreApplication::translate("SequenceDialog", "Create Sequence", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxSeqCreate->setToolTip(QCoreApplication::translate("SequenceDialog", "Generate a sequence", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblSeqStartVal->setToolTip(QCoreApplication::translate("SequenceDialog", "Start sequence at this value", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSeqStartVal->setText(QCoreApplication::translate("SequenceDialog", "&Start Value:", nullptr));
#if QT_CONFIG(tooltip)
        spnSeqStartVal->setToolTip(QCoreApplication::translate("SequenceDialog", "Start sequence at this value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblSeqEndVal->setToolTip(QCoreApplication::translate("SequenceDialog", "End sequence at this value", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSeqEndVal->setText(QCoreApplication::translate("SequenceDialog", "End &Value:", nullptr));
#if QT_CONFIG(tooltip)
        spnSeqEndVal->setToolTip(QCoreApplication::translate("SequenceDialog", "End sequence at this value", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblSeqIncVal->setToolTip(QCoreApplication::translate("SequenceDialog", "Go from start to end in steps of this amount", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSeqIncVal->setText(QCoreApplication::translate("SequenceDialog", "Increment &By:", nullptr));
#if QT_CONFIG(tooltip)
        spnSeqIncVal->setToolTip(QCoreApplication::translate("SequenceDialog", "Go from start to end in steps of this amount", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lblSeqFormat->setToolTip(QCoreApplication::translate("SequenceDialog", "Format sequence using special characters<table cellspacing=\"3\">\n"
"<tr><td>$</td><td>Number or '0'</td></tr>\n"
"<tr><td>#</td><td>Number or space</td></tr>\n"
"<tr><td>*</td><td>Number or '*'</td></tr>\n"
"<tr><td>Other</td><td>Insert literally</td></tr>\n"
"</table>", nullptr));
#endif // QT_CONFIG(tooltip)
        lblSeqFormat->setText(QCoreApplication::translate("SequenceDialog", "F&ormat:", nullptr));
#if QT_CONFIG(tooltip)
        linSeqFormat->setToolTip(QCoreApplication::translate("SequenceDialog", "Format sequence using special characters<table cellspacing=\"3\">\n"
"<tr><td>$</td><td>Number or '0'</td></tr>\n"
"<tr><td>#</td><td>Number or space</td></tr>\n"
"<tr><td>*</td><td>Number or '*'</td></tr>\n"
"<tr><td>Other</td><td>Insert literally</td></tr>\n"
"</table>", nullptr));
#endif // QT_CONFIG(tooltip)
        linSeqFormat->setText(QCoreApplication::translate("SequenceDialog", "$$$$$$", nullptr));
#if QT_CONFIG(tooltip)
        btnSeqCreate->setToolTip(QCoreApplication::translate("SequenceDialog", "Generate a data sequence", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSeqCreate->setText(QCoreApplication::translate("SequenceDialog", "Crea&te", nullptr));
#if QT_CONFIG(tooltip)
        groupBoxSeqPreview->setToolTip(QCoreApplication::translate("SequenceDialog", "The data to be encoded, one line per symbol", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBoxSeqPreview->setTitle(QCoreApplication::translate("SequenceDialog", "Sequence &Data", nullptr));
#if QT_CONFIG(tooltip)
        txtSeqPreview->setToolTip(QCoreApplication::translate("SequenceDialog", "The data to be encoded, one line per symbol", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        btnSeqFromFile->setToolTip(QCoreApplication::translate("SequenceDialog", "Import a data sequence from a file", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSeqFromFile->setText(QCoreApplication::translate("SequenceDialog", "&From File...", nullptr));
#if QT_CONFIG(tooltip)
        btnSeqClear->setToolTip(QCoreApplication::translate("SequenceDialog", "Clear the sequence data", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSeqClear->setText(QCoreApplication::translate("SequenceDialog", " C&lear", nullptr));
#if QT_CONFIG(tooltip)
        btnSeqExport->setToolTip(QCoreApplication::translate("SequenceDialog", "Save the symbols to files", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSeqExport->setText(QCoreApplication::translate("SequenceDialog", "&Export...", nullptr));
#if QT_CONFIG(tooltip)
        btnSeqClose->setToolTip(QCoreApplication::translate("SequenceDialog", "Close window", nullptr));
#endif // QT_CONFIG(tooltip)
        btnSeqClose->setText(QCoreApplication::translate("SequenceDialog", "&Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SequenceDialog: public Ui_SequenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTSEQUENCE_H
