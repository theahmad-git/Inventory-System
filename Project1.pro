QT += core gui
QT +=sql
QT += core gui network
QT += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminaction.cpp \
    admineditableinv.cpp \
    adminlogin.cpp \
    adminpanel.cpp \
    baradmin.cpp \
    barcodescanner.cpp \
    changepassword.cpp \
    checkoutform.cpp \
    editadmin.cpp \
    forgetpassword.cpp \
    globals.cpp \
    inventorypanel.cpp \
    main.cpp \
    mainwindow.cpp \
    payment.cpp \
    returnproduct.cpp \
    salesreportform.cpp \
    signup.cpp \
    signupadmin.cpp \
    stockavailibility.cpp \
    superadmin.cpp \
    superadminpanel.cpp \
    userchoice.cpp \
    userlogin.cpp

HEADERS += \
    adminaction.h \
    admineditableinv.h \
    adminlogin.h \
    adminpanel.h \
    baradmin.h \
    barcodescanner.h \
    changepassword.h \
    checkoutform.h \
    editadmin.h \
    forgetpassword.h \
    globals.h \
    inventorypanel.h \
    mainwindow.h \
    payment.h \
    returnproduct.h \
    salesreportform.h \
    signup.h \
    signupadmin.h \
    stockavailibility.h \
    superadmin.h \
    superadminpanel.h \
    userchoice.h \
    userlogin.h

FORMS += \
    adminaction.ui \
    admineditableinv.ui \
    adminlogin.ui \
    adminpanel.ui \
    baradmin.ui \
    changepassword.ui \
    checkoutform.ui \
    editadmin.ui \
    forgetpassword.ui \
    inventorypanel.ui \
    mainwindow.ui \
    payment.ui \
    returnproduct.ui \
    salesreportform.ui \
    signup.ui \
    signupadmin.ui \
    stockavailibility.ui \
    superadmin.ui \
    superadminpanel.ui \
    userchoice.ui \
    userlogin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    New_resource.qrc
