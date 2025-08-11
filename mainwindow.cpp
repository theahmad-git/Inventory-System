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
    : QMainWindow(parent),  // Remove the extra colon
    ui(new Ui::MainWindow)  // Proper initialization list
{
    ui->setupUi(this);
    // Initialize TCP Server
    tcpServer = new QTcpServer(this);
    connect(tcpServer, &QTcpServer::newConnection, this, &MainWindow::newConnection);

    if (!tcpServer->listen(QHostAddress::Any, 12345)) {
        qDebug() << "Server could not start!";
    } else {
        qDebug() << "Server started on port 12345";
        qDebug() << "Connect your mobile scanner to:";
        foreach (const QHostAddress &address, QNetworkInterface::allAddresses()) {
            if (address.protocol() == QAbstractSocket::IPv4Protocol && !address.isLoopback())
                qDebug() << address.toString() << ":12345";
        }
    }
    // Get screen geometry properly
    QRect screenGeometry = QApplication::primaryScreen()->geometry();
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

void MainWindow::setBarcodeHandler(QObject *handler) {
    currentBarcodeHandler = handler;
}


void MainWindow::newConnection()
{
    QTcpSocket *socket = tcpServer->nextPendingConnection();
    connect(socket, &QTcpSocket::readyRead, [this, socket]() {
        QString barcode = QString::fromUtf8(socket->readAll()).trimmed();
        emit barcodeScanned(barcode);  // Emit the signal

        if (currentBarcodeHandler) {
            QMetaObject::invokeMethod(currentBarcodeHandler, "handleBarcode",
                                      Q_ARG(QString, barcode));
        }
    });

    connect(socket, &QTcpSocket::disconnected, socket, &QTcpSocket::deleteLater);
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



