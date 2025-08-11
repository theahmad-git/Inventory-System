#include "mainwindow.h"
#include "backupmanager.h"
#include <QApplication>
#include <windows.h>
#include <dbghelp.h>
#include <QDebug>
#include <QSqlDatabase>

LONG WINAPI crashHandler(struct _EXCEPTION_POINTERS *exceptionInfo)
{
    qDebug() << "Crash handler invoked";

    // Optional: Call your backup logic
    BackupManager::instance()->requestBackup();

    // Create crash dump file
    HANDLE hFile = CreateFileW(L"crash.dmp", GENERIC_WRITE, 0, nullptr,
                               CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, nullptr);

    if (hFile == INVALID_HANDLE_VALUE)
        return EXCEPTION_EXECUTE_HANDLER;

    // Dynamically load dbghelp.dll
    HMODULE hDbgHelp = LoadLibraryW(L"dbghelp.dll");
    if (!hDbgHelp) {
        CloseHandle(hFile);
        return EXCEPTION_EXECUTE_HANDLER;
    }

    // Resolve MiniDumpWriteDump function dynamically
    auto pMiniDumpWriteDump = (decltype(&MiniDumpWriteDump))GetProcAddress(hDbgHelp, "MiniDumpWriteDump");
    if (pMiniDumpWriteDump) {
        MINIDUMP_EXCEPTION_INFORMATION mdei;
        mdei.ThreadId = GetCurrentThreadId();
        mdei.ExceptionPointers = exceptionInfo;
        mdei.ClientPointers = FALSE;

        pMiniDumpWriteDump(GetCurrentProcess(), GetCurrentProcessId(),
                           hFile, MiniDumpNormal, &mdei, nullptr, nullptr);
    }

    CloseHandle(hFile);
    FreeLibrary(hDbgHelp);

    return EXCEPTION_EXECUTE_HANDLER;
}

int main(int argc, char *argv[])
{
    // Set the crash handler for unhandled exceptions
    SetUnhandledExceptionFilter(crashHandler);

    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(BackupManager::getDBPath());  // ✅ now public accessor

    if (!db.open()) {
        qCritical() << "Failed to open main database!";
        return -1;
    }

    BackupManager::instance()->initialize();

    MainWindow w;
    w.show();
    return a.exec();
}
