#include "globals.h"
#include <QSqlDatabase>
#include <QSqlError>

QString currentUserEmail = "";
QString currentAdminEmail = "";


bool checkDatabaseConnection() {
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "Database connection error:" << db.lastError().text();
            return false;
        }
    }
    return true;
}
