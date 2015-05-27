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

SOURCES += \
    Magic/spell.cpp \
    Item/item.cpp \
    Item/weapon.cpp \
    Item/magicweapon.cpp

HEADERS += \
    qtyaml.h \
    vec3.h \
    power.h \
    Item/types.h \
    Magic/types.h \
    Magic/spell.h \
    Item/item.h \
    Item/weapon.h \
    Item/magicweapon.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
