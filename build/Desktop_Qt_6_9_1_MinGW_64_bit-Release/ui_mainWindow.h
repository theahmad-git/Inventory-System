/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEdit_chrom;
    QLabel *label_2;
    QLineEdit *lineEdit_report;
    QLabel *label_3;
    QLineEdit *lineEdit_sheet;
    QLabel *label_18;
    QLineEdit *lineEdit_prec;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(386, 306);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 371, 261));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_chrom = new QLineEdit(layoutWidget);
        lineEdit_chrom->setObjectName("lineEdit_chrom");
        lineEdit_chrom->setEnabled(false);
        QFont font1;
        font1.setPointSize(10);
        lineEdit_chrom->setFont(font1);

        gridLayout->addWidget(lineEdit_chrom, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit_report = new QLineEdit(layoutWidget);
        lineEdit_report->setObjectName("lineEdit_report");
        lineEdit_report->setEnabled(false);
        lineEdit_report->setFont(font1);

        gridLayout->addWidget(lineEdit_report, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_sheet = new QLineEdit(layoutWidget);
        lineEdit_sheet->setObjectName("lineEdit_sheet");
        lineEdit_sheet->setEnabled(false);
        lineEdit_sheet->setFont(font1);

        gridLayout->addWidget(lineEdit_sheet, 2, 1, 1, 1);

        label_18 = new QLabel(layoutWidget);
        label_18->setObjectName("label_18");
        label_18->setFont(font);

        gridLayout->addWidget(label_18, 3, 0, 1, 1);

        lineEdit_prec = new QLineEdit(layoutWidget);
        lineEdit_prec->setObjectName("lineEdit_prec");
        lineEdit_prec->setEnabled(false);
        lineEdit_prec->setFont(font1);

        gridLayout->addWidget(lineEdit_prec, 3, 1, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");
        QFont font2;
        font2.setPointSize(15);
        pushButton->setFont(font2);

        gridLayout->addWidget(pushButton, 4, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Chromatogram", nullptr));
        lineEdit_chrom->setText(QCoreApplication::translate("MainWindow", "*.txt", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Report file", nullptr));
        lineEdit_report->setText(QCoreApplication::translate("MainWindow", "*.xlsx", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Sheet_name", nullptr));
        lineEdit_sheet->setText(QString());
        label_18->setText(QCoreApplication::translate("MainWindow", "precision", nullptr));
        lineEdit_prec->setText(QCoreApplication::translate("MainWindow", "0.1", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
