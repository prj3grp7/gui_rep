#-------------------------------------------------
#
# Project created by QtCreator 2018-12-03T19:10:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GUI
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    BallDispenserRead.cpp \
    BallDispenserWrite.cpp \
    Display.cpp \
    GameController.cpp \
    I2C.cpp \
    PlayersideRead.cpp \
    PlayersideWrite.cpp \
    Thread.cpp \
    ThreadFunctor.cpp \
    WebPage.cpp

HEADERS += \
        mainwindow.h \
    resource_list.h \
    MsgProtocol.h \
    UserInfo.h \
    BallDispenserRead.h \
    BallDispenserResponse.h \
    BallDispenserWrite.h \
    Display.h \
    DisplayRequest.h \
    EndGameCfm.h \
    GameController.h \
    GameControllerRequest.h \
    I2C.h \
    Message.h \
    MessageQueue.h \
    PlayersideRead.h \
    PlayersideResponse.h \
    PlayersideWrite.h \
    resource_list.h \
    Thread.h \
    ThreadFunctor.h \
    WebPage.h \
    WebPageResponse.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    pictures.qrc \
    pictures.qrc

SUBDIRS += \
    GUI.pro

DISTFILES += \
    GUI.pro.user \
    GUI.pro.user.f85a8cd
