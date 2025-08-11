#include "superadminpanel.h"
#include "ui_superadminpanel.h"

#include "editadmin.h"
#include "adminaction.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QStandardPaths>
#include <QTreeWidgetItem>
#include <QTreeWidget>
#include <QStackedWidget>

superadminpanel::superadminpanel(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::superadminpanel),
    edit(nullptr),
    adminact(nullptr)
{
    ui->setupUi(this);

    // Setup sidebar items
    QList<QTreeWidgetItem*> items;
    items << new QTreeWidgetItem(ui->treeWidget)  // Edit Admin
          << new QTreeWidgetItem(ui->treeWidget)  // Admin Actions
          << new QTreeWidgetItem(ui->treeWidget)  // Create Backup
          << new QTreeWidgetItem(ui->treeWidget)  // Restore Backup
          << new QTreeWidgetItem(ui->treeWidget)  // Back
          << new QTreeWidgetItem(ui->treeWidget); // Logout

    const QStringList texts = {
        "🧑‍💼 Edit Admin",
        "📋 Admin Actions",
        "💾 Create Backup",
        "🔄 Restore Backup",
        "🔙 Back",
        "🔓 Logout"
    };

    for (int i = 0; i < 6; ++i) {
        items[i]->setText(0, texts[i]);
    }

    ui->treeWidget->expandAll();
    connect(ui->treeWidget, &QTreeWidget::itemClicked,
            this, &superadminpanel::handleSidebarClick);
}

superadminpanel::~superadminpanel()
{
    delete ui;
}

void superadminpanel::handleSidebarClick(QTreeWidgetItem *item, int)
{
    QString text = item->text(0);

    if (text == "🧑‍💼 Edit Admin") {
        // Load the Edit Admin form
        edit = new editadmin(this);
        int index = ui->stackedWidget->addWidget(edit);
        ui->stackedWidget->setCurrentIndex(index);
    }
    else if (text == "📋 Admin Actions") {
        adminact = new adminaction(this);
        int index = ui->stackedWidget->addWidget(adminact);
        ui->stackedWidget->setCurrentIndex(index);
    }
    else if (text == "💾 Create Backup") {
        createManualBackup();
    }
    else if (text == "🔄 Restore Backup") {
        restoreFromBackup();
    }
    else if (text == "🔙 Back") {
        this->close();
    }
    else if (text == "🔓 Logout") {
        QApplication::quit();
    }
}

void superadminpanel::createManualBackup()
{
    // Get default documents directory
    QString defaultPath = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
    if (!defaultPath.endsWith('/') && !defaultPath.endsWith('\\')) {
        defaultPath += '/';
    }

    // Add default filename
    defaultPath += "inventory_backup.db";

    // Get save filename from user
    QString fileName = QFileDialog::getSaveFileName(
        this,
        "Create Database Backup",
        defaultPath,
        "Database Files (*.db);;All Files (*)"
        );

    if (!fileName.isEmpty()) {
        QFile sourceFile("E:/sqlite/mydatabase.db");
        QFile destFile(fileName);

        if (!sourceFile.exists()) {
            QMessageBox::critical(this, "Error",
                                  QString("Database file not found at:\n%1\n"
                                          "Current working directory: %2")
                                      .arg(sourceFile.fileName())
                                      .arg(QDir::currentPath()));
            return;
        }

        // Remove existing backup file if it exists
        if (destFile.exists()) {
            if (!destFile.remove()) {
                QMessageBox::critical(this, "Error",
                                      "Could not overwrite existing file:\n" + destFile.errorString());
                return;
            }
        }

        // Perform the copy with error handling
        if (sourceFile.copy(fileName)) {
            QMessageBox::information(this, "Success",
                                     "Backup created successfully at:\n" + fileName);
        } else {
            QString errorMsg = "Failed to create backup:\n";
            errorMsg += "Source: " + sourceFile.fileName() + "\n";
            errorMsg += "Destination: " + fileName + "\n";
            errorMsg += "Error: " + sourceFile.errorString();

            QMessageBox::critical(this, "Error", errorMsg);
        }
    }
}
void superadminpanel::restoreFromBackup()
{
    QString fileName = QFileDialog::getOpenFileName(this,
                                                    "Restore Database Backup",
                                                    QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation),
                                                    "Database Files (*.db)");

    if (!fileName.isEmpty()) {
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirm Restore",
                                      "This will overwrite current database. Continue?",
                                      QMessageBox::Yes|QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            if (QFile::remove("inventory.db") && QFile::copy(fileName, "inventory.db")) {
                QMessageBox::information(this, "Success",
                                         "Database restored successfully. Please restart the application.");
            } else {
                QMessageBox::critical(this, "Error",
                                      "Failed to restore backup");
            }
        }
    }
}

void superadminpanel::on_pushButton_editadmin_clicked()
{
    edit = new editadmin(this);
    edit->show();
}

void superadminpanel::on_pushButton_adminaction_clicked()
{
    adminact = new adminaction(this);
    adminact->show();
}

