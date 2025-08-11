QT += core gui widgets network sql

CONFIG += c++17

CONFIG -= qtquickcompiler
QT += axcontainer
QT +=sql
QT += core gui sql
QT += widgets
# QXlsx Configuration (Choose ONE approach below)

# APPROACH 1: Link against pre-built QXlsx (Recommended)
DEFINES += QXLSX_STATIC
LIBS += -LE:/Inventory/Project1/QXlsx/QXlsx/release -lQXlsx
INCLUDEPATH += E:/Inventory/Project1/QXlsx/QXlsx/header

# Zint Barcode Library
INCLUDEPATH += E:/Inventory/Project1/zint/backend
LIBS += -LE:/Inventory/Project1/zint/build/backend -lzint

# Zint include paths
INCLUDEPATH += E:/Inventory/Project1/zint/backend_qt
#INCLUDEPATH += E:/Inventory/Project1/zint/backend
FORMS += E:/Inventory/Project1/zint/frontend_qt/mainWindow.ui


# QZXing integration
include($$PWD/qzxing/QZXing.pri)
INCLUDEPATH += $$PWD/qzxing/src

#HEADERS += $$files($$PWD/*.h, true)

QXLSX_SOURCEPATH = E:/Inventory/Project1/QXlsx/QXlsx/source/

HEADERS += \
    mainwindow.h \
    salesreportform_new.h \
    admineditableinv.h \
    editadmin.h \
    returnproduct.h \
    signup.h \
    signupadmin.h \
    stockavailibility.h \
    superadmin.h \
    superadminpanel.h \
    userchoice.h \
    userlogin.h \
    adminaction.h \
    adminpanel.h \
    checkoutform.h \
    baradmin.h \
    inventorypanel.h \
    adminlogin.h \
    payment.h \
    changepassword.h \
    forgetpassword.h \
    barcodescanner.h \
    backupmanager.h \


SOURCES += \
    salesreportform_new.cpp \
    admineditableinv.cpp \
    editadmin.cpp \
    returnproduct.cpp \
    signup.cpp \
    signupadmin.cpp \
    stockavailibility.cpp \
    superadmin.cpp \
    superadminpanel.cpp \
    userchoice.cpp \
    userlogin.cpp \
    adminaction.cpp \
    mainwindow.cpp \
    adminpanel.cpp \
    checkoutform.cpp \
    baradmin.cpp \
    inventorypanel.cpp \
    adminlogin.cpp \
    payment.cpp \
    changepassword.cpp \
    forgetpassword.cpp \
    barcodescanner.cpp \
    main.cpp \
    globals.cpp \
    backupmanager.cpp \
    $${QXLSX_SOURCEPATH}xlsxformat.cpp \
    $${QXLSX_SOURCEPATH}xlsxdocument.cpp


FORMS += $$files($$PWD/*.ui, true)

RESOURCES += \
    New_resource.qrc


