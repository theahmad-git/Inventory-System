#include "superadminpanel.h"
#include "ui_superadminpanel.h"
#include "adminaction.h"

superadminpanel::superadminpanel(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::superadminpanel)
{
    ui->setupUi(this);
    // Populate the tree widget
    QTreeWidgetItem *editAdminItem = new QTreeWidgetItem(ui->treeWidget);
    editAdminItem->setText(0, "🧑‍💼 Edit Admin");

    QTreeWidgetItem *adminActionsItem = new QTreeWidgetItem(ui->treeWidget);
    adminActionsItem->setText(0, "📋 Admin Actions");

    QTreeWidgetItem *backItem = new QTreeWidgetItem(ui->treeWidget);
    backItem->setText(0, "🔙 Back");

    QTreeWidgetItem *logoutItem = new QTreeWidgetItem(ui->treeWidget);
    logoutItem->setText(0, "🔓 Logout");

    ui->treeWidget->expandAll();  // optional

    // Connect the treeWidget click
    connect(ui->treeWidget, &QTreeWidget::itemClicked, this, &superadminpanel::handleSidebarClick);

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
        edit = new editadmin(this);  // Replace with your actual class
        int index = ui->stackedWidget->addWidget(edit);
        ui->stackedWidget->setCurrentIndex(index);
    }
    else if (text == "📋 Admin Actions") {
        adminaction *adminact = new adminaction(this);  // Replace with your actual class
        int index = ui->stackedWidget->addWidget(adminact);
        ui->stackedWidget->setCurrentIndex(index);
    }
    else if (text == "🔙 Back") {
        this->close();  // Or show previous window
    }
    else if (text == "🔓 Logout") {
        QApplication::quit();
    }
}


void superadminpanel::on_pushButton_editadmin_clicked()
{
    //hide ();
    edit =new editadmin(this);
    edit->show();
}


void superadminpanel::on_pushButton_adminaction_clicked()
{
    adminact =new adminaction(this);
    adminact->show();
}

