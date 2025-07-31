#ifndef BARCODESCANNER_H
#define BARCODESCANNER_H
#include <QTcpServer>
#include <QObject>
#include <QTcpSocket>
#include <QList>

class BarcodeScanner : public QObject {
    Q_OBJECT
public:
    explicit BarcodeScanner(QObject *parent = nullptr);
    virtual ~BarcodeScanner();

signals:
    void barcodeScanned(const QString &barcode);

private:
    QTcpServer *server;
    QList<QTcpSocket*> clientSockets;
    quint16 port = 8080;
};

#endif // BARCODESCANNER_H
