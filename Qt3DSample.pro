#-------------------------------------------------
#
# Project created by QtCreator 2011-07-11T15:05:42
#
#-------------------------------------------------

QT       += core gui opengl

TARGET = Qt3DSample
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    viewport.cpp

HEADERS  += mainwindow.h \
    viewport.h

FORMS    += mainwindow.ui

LIBS += -l"/Developer/Applications/QtSDK/QtLabs/qt3d/lib/libQt3D.1.0.0.dylib"
