TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    assign4.cpp

QMAKE_CXXFLAGS += -pedantic
QMAKE_CXXFLAGS += -pedantic-errors


QMAKE_CXXFLAGS += -Werror
QMAKE_CXXFLAGS += -Wno-error=unused-variable
