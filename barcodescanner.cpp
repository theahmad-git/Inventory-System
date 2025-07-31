#include "barcodescanner.h"
#include <QDebug>

BarcodeScanner::BarcodeScanner(QObject *parent) :
    QObject(parent),
    server(new QTcpServer(this))
{
    if (!server->listen(QHostAddress::Any, port)) {
        qDebug() << "Server could not start:" << server->errorString();
    } else {
        connect(server, &QTcpServer::newConnection, this, [this]() {
            QTcpSocket *socket = server->nextPendingConnection();
            if (socket) {
                clientSockets.append(socket);

                connect(socket, &QTcpSocket::readyRead, this, [this, socket]() {
                    QString barcode = QString::fromUtf8(socket->readAll()).trimmed();
                    emit barcodeScanned(barcode);
                    socket->write("OK\n");
                });

                connect(socket, &QTcpSocket::disconnected, this, [this, socket]() {
                    clientSockets.removeOne(socket);
                    socket->deleteLater();
                });
            }
        });
    }
}

BarcodeScanner::~BarcodeScanner()  // Correct implementation
{
    for (QTcpSocket *socket : qAsConst(clientSockets)) {
        if (socket) {
            socket->disconnect();
            socket->close();
            socket->deleteLater();
        }
    }
    server->close();
    server->deleteLater();
}
