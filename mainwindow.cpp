#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "barcodescanner.h"
#include <QMessageBox>
#include <QSqlError>
#include <QPixmap>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QPropertyAnimation>
#include <QScreen>
#include <QGuiApplication>
#include <QApplication>
#include <QNetworkInterface>
#include <QTcpServer>
#include <QTcpSocket>
#include <QFileInfo>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    // Constructor

    ui->centralwidget->setMaximumSize(QWIDGETSIZE_MAX, QWIDGETSIZE_MAX);
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
    this->setGeometry(screenGeometry);

    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();
    int formWidth = ui->centralwidget->width();
    int formHeight = ui->centralwidget->height();
    int posX = (screenWidth - formWidth) / 2;
    int posY = (screenHeight - formHeight) / 2;
    ui->centralwidget->move(posX, posY);

}

MainWindow::~MainWindow()
{

    delete ui;
}


bool MainWindow::setupDatabase()
{
    // Use relative path instead of absolute
    QString dbPath = QCoreApplication::applicationDirPath() + "/mydatabase.db";
    qDebug() << "Database path:" << dbPath;

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(dbPath);

    if (!db.open()) {
        QString error = db.lastError().text();
        qDebug() << "Database connection error:" << error;
        return false;
    }
    // Verify tables exist
    QStringList tables = db.tables();
    if (!tables.contains("admin") || !tables.contains("users") || !tables.contains("super_admin")) {
        qDebug() << "Required tables missing";
        return false;
    }

    return true;
}
void MainWindow::on_pushButton_loginAdmin_clicked()
{
  hide();
   adminlog = new adminlogin(this);
   adminlog -> show();
}


void MainWindow::on_pushButton_3_logi_user_clicked()
{
    hide();
    userlog = new UserLogin(this);
    userlog -> show();
}

//void MainWindow::setupDatabase()
//{

 //   QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
//db.setDatabaseName("E:/sqlite/mydatabase.db");


//if (!db.open()){
 //   QMessageBox::critical(this,"Database Error",db.lastError().text());

 //   return;
// }
// }

void MainWindow::on_pushButton_add_product_clicked() {

}

void MainWindow::on_pushButton_superadmin_clicked()
{
    hide();
    superadminlogin=new superadmin (this);
    superadminlogin ->show();
}


void MainWindow::on_pushButton_clicked()
{
    QApplication::quit();
}

