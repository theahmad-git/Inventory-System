#ifndef BACKUPMANAGER_H
#define BACKUPMANAGER_H

#include <QObject>
#include <QDateTime>

class BackupManager : public QObject
{
    Q_OBJECT
public:
    static BackupManager* instance();
    static QString getDBPath();

    bool createManualBackup(const QString &filePath);
    bool restoreManualBackup(const QString &filePath);
    QDateTime lastBackupDate() const;
    void requestBackup();
    void initialize();

    QString lastError() const { return m_lastError; }

    void setLastError(const QString& error) {
        m_lastError = error;
        qWarning() << "BackupManager Error:" << error;
    }

    void clearLastError() {
        m_lastError.clear();
    }

signals:
    void backupCompleted(bool success, const QString &message);

private:
    explicit BackupManager(QObject *parent = nullptr);
    static BackupManager* m_instance;
    QDateTime m_lastBackupDate;
    QString m_lastError;
};

#endif // BACKUPMANAGER_H
