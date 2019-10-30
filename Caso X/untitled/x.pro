TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
SOURCES += \
        main.c \
    list.c
QMAKE_CXXFLAGS+= -openmp

DISTFILES +=

HEADERS += \
    mathroid.h \
    list.h
