#-------------------------------------------------
#
# Project created by QtCreator 2014-12-24T17:24:32
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = I3P
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    Widget.cpp

HEADERS  += dialog.h \
    widget.h

FORMS    += dialog.ui
