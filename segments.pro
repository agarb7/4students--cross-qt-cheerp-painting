#-------------------------------------------------
#
# Project created by QtCreator 2017-03-04T21:21:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = segments
TEMPLATE = app

CONFIG += c++14

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        widget.cpp \
    core/canvas.cpp \
    core/scene.cpp \
    core/paint.cpp \
    core/inputbuffer.cpp \
    qtimplementation/canvas_.cpp \
    mock/inputbuffer_.cpp

HEADERS  += widget.h \
    core/canvas.h \
    core/scene.h \
    core/paint.h \
    core/segment.h \
    core/point.h \
    core/inputbuffer.h \
    mock/inputbuffer.h \
    qtimplementation/canvas.h \
    core/color.h

FORMS    +=
