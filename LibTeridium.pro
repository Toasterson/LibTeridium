#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T09:14:02
#
#-------------------------------------------------

QT       += svg

QT       -= gui

TARGET = LibTeridium
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += $$PWD/../yaml-cpp/include

SOURCES +=

HEADERS += \
    qtyaml.h \
    vec3.h \
    power.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
