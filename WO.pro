#-------------------------------------------------
#
# Project created by QtCreator 2020-03-04T09:33:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = WO
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        bodybuilding.cpp \
        buildmuscle.cpp \
        exercise.cpp \
        goal.cpp \
        main.cpp \
        mainwindow.cpp \
        runing.cpp \
        stressrelief.cpp \
        testclass.cpp \
        testitem.cpp \
        user.cpp \
        walking.cpp \
        weightloss.cpp \
        workout.cpp \
        yoga.cpp

HEADERS += \
        bodybuilding.h \
        bodypart.h \
        buildmuscle.h \
        exercise.h \
        goal.h \
        mainwindow.h \
        movement.h \
        position.h \
        runing.h \
        stressrelief.h \
        testclass.h \
        testitem.h \
        user.h \
        walking.h \
        weightloss.h \
        workout.h \
        yoga.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
