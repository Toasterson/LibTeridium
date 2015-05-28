#-------------------------------------------------
#
# Project created by QtCreator 2015-05-27T09:14:02
#
#-------------------------------------------------

QT       += svg core quick

QT       -= gui

TARGET = LibTeridium
TEMPLATE = lib
CONFIG += staticlib

INCLUDEPATH += $$PWD/../yaml-cpp/include

SOURCES += \
    Magic/spell.cpp \
    Item/item.cpp \
    Item/weapon.cpp \
    Item/magicweapon.cpp \
    Item/rangedweapon.cpp \
    Item/projectile.cpp \
    Characters/character.cpp \
    Characters/hero.cpp

HEADERS += \
    qtyaml.h \
    vec3.h \
    power.h \
    Item/types.h \
    Magic/types.h \
    Magic/spell.h \
    Item/item.h \
    Item/weapon.h \
    Item/magicweapon.h \
    Item/rangedweapon.h \
    Item/projectile.h \
    Characters/character.h \
    Characters/hero.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
