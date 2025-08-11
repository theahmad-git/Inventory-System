#include "backupmanager.h"
#include <QFile>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QStandardPaths>
#include <QDir>

BackupManager* BackupManager::m_instance = nullptr;

BackupManager::BackupManager(QObject *parent) : QObject(parent)
{
}

void BackupManager::initialize()
{
    // Initialize any required components here
    // For example, you might want to:
    // 1. Set up automatic backup timers
    // 2. Verify backup directory exists
    // 3. Load last backup timestamp

    // Example initialization:
    QDir().mkpath(QStandardPaths::writableLocation(QStandardPaths::AppDataLocation) + "/backups");
    m_lastBackupDate = QDateTime(); // Reset to invalid date
}


BackupManager* BackupManager::instance()
{
    if (!m_instance) {
        m_instance = new BackupManager();
    }
    return m_instance;
}

QString BackupManager::getDBPath()
{
    return QStandardPaths::writableLocation(QStandardPaths::AppDataLocation) + "/inventory.db";
}
bool BackupManager::createManualBackup(const QString &filePath)
{
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(nullptr, "Error", "Database is not connected");
        emit backupCompleted(false, "Database is not connected");
        return false;
    }

    db.close();
    bool success = QFile::copy(getDBPath(), filePath);
    db.open();

    if (success) {
        m_lastBackupDate = QDateTime::currentDateTime();
        emit backupCompleted(true, QString("Backup saved to %1").arg(filePath));
    } else {
        emit backupCompleted(false, "Failed to create backup");
    }

    return success;
}
bool BackupManager::restoreManualBackup(const QString &filePath)
{
    if (!QFile::exists(filePath)) {
        QMessageBox::critical(nullptr, "Error", "Backup file not found");
        return false;
    }

    QSqlDatabase::database().close();

    // Create emergency backup
    QString emergencyBackup = getDBPath() + ".emergency";
    QFile::remove(emergencyBackup);
    QFile::copy(getDBPath(), emergencyBackup);

    // Perform restore
    QFile::remove(getDBPath());
    if (QFile::copy(filePath, getDBPath())) {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(getDBPath());
        bool success = db.open();
        db.close();
        return success;
    }

    // Restore emergency backup if failed
    QFile::copy(emergencyBackup, getDBPath());
    return false;
}

QDateTime BackupManager::lastBackupDate() const
{
    return m_lastBackupDate;
}

void BackupManager::requestBackup()
{
    // Create emergency backup directory if it doesn't exist
    QString backupDir = QStandardPaths::writableLocation(QStandardPaths::AppDataLocation) + "/EmergencyBackups/";
    QDir().mkpath(backupDir);

    // Generate timestamped backup filename
    QString backupPath = backupDir + "emergency_backup_" +
                         QDateTime::currentDateTime().toString("yyyyMMdd_hhmmss") +
                         ".db";

    // Perform the backup
    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        qCritical() << "Database not open for emergency backup!";
        emit backupCompleted(false, "Database connection not open");
        return;
    }

    db.close();
    bool success = QFile::copy(getDBPath(), backupPath);
    db.open();

    if (success) {
        m_lastBackupDate = QDateTime::currentDateTime();
        qDebug() << "Emergency backup created at:" << backupPath;
        emit backupCompleted(true, "Emergency backup created at: " + backupPath);
    } else {
        qCritical() << "Failed to create emergency backup!";
        emit backupCompleted(false, "Failed to create emergency backup");
    }
}

