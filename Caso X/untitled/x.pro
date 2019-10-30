TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
SOURCES += \
        main.c
QMAKE_CXXFLAGS+= -openmp

DISTFILES +=

HEADERS += \
    linkdlst.h \
    mathroid.h \
    list.h
