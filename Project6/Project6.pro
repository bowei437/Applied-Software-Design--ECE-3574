######################################################################
# Automatically generated by qmake (3.0) Sat Apr 23 21:11:12 2016
######################################################################
CONFIG += c++11
QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = app
TARGET = matrix-multiply
INCLUDEPATH += .
LIBS += -pthread -lrt

# Input
HEADERS += matrix.h
SOURCES += matrix-multiply.cpp matrix.cpp

QMAKE_CXXFLAGS += -std=c++11 -pthread 

