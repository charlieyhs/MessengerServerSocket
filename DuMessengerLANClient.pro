#-------------------------------------------------
#
# Project created by QtCreator 2015-01-20T13:46:11
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DuMessengerLANClient
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    DuMessengerConnectionDialog.cpp

HEADERS  += widget.h \
    DuMessengerConnectionDialog.h

FORMS    += widget.ui \
    DuMessengerConnectionDialog.ui

QMAKE_CXXFLAGS += -std=gnu++14
