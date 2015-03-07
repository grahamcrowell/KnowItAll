CONFIG += c++11

TEMPLATE = app
TARGET = knowitall
QT += qml quick widgets
SOURCES += main.cpp plumbing.cpp
#OTHER_FILES += main.qml
RESOURCES += qml.qrc

HEADERS += plumbing.h
