######################################################################
# Automatically generated by qmake (3.0) Sat Apr 9 10:09:31 2016
######################################################################

CONFIG += c++11

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TEMPLATE = app
TARGET = external
INCLUDEPATH += .
LIBS += -lrt

# Input
HEADERS += message.h
SOURCES += main.cpp message.cpp 


#SOURCES += main.cpp

QMAKE_CXXFLAGS = -Wall -Wno-unused-parameter -Wno-uninitialized
QMAKE_CXXFLAGS += -Wno-unused-variable
QMAKE_CXXFLAGS += -Wno-unused-parameter
QMAKE_CXXFLAGS += -Wno-uninitialized