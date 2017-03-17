#-------------------------------------------------
#
# Project created by QtCreator 2017-03-04T21:21:21
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = segments
TEMPLATE = app

CONFIG += c++14 \
    object_parallel_to_source

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    core/canvas.h \
    core/color.h \
    core/imagebuffer.h \
    core/inputbuffer.h \
    core/point.h \
    core/scene.h \
    core/segment.h \
    mock/inputbuffer.h \
    qtimplementation/canvas.h \
    qtimplementation/imagebuffer.h

SOURCES += \
    core/canvas.cpp \
    core/imagebuffer.cpp \
    core/inputbuffer.cpp \
    core/scene.cpp \
    mock/inputbuffer.cpp \
    qtapplication/main.cpp \
    qtimplementation/canvas.cpp \
    qtimplementation/imagebuffer.cpp
    core/color.cpp
