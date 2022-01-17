#-------------------------------------------------
#
# Project created by QtCreator 2015-01-20T13:10:39
#
#-------------------------------------------------

QT       += core network

QT       -= gui

TARGET = DuMesengerLANServer
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    DuMessengerSocket.cpp \
    DuMessengerServer.cpp

QMAKE_CXXFLAGS += -std=gnu++14

HEADERS += \
    DuMessengerSocket.h \
    DuMessengerServer.h
