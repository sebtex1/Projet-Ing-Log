QT       += core gui sql core
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    bdd.cpp \
    finish.cpp \
    main.cpp \
    mainwindow.cpp \
    mud.cpp \
    niveaux.cpp \
    obstacles.cpp \
    start.cpp \
    tests.cpp \
    trap.cpp \
    wall.cpp

HEADERS += \
    bdd.h \
    finish.h \
    mainwindow.h \
    mud.h \
    niveaux.h \
    obstacles.h \
    start.h \
    tests.h \
    trap.h \
    wall.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
