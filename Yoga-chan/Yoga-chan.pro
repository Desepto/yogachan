#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T11:13:39
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Yoga-chan
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    connexion.cpp \
    Fichier.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    connexion.h

FORMS    += mainwindow.ui \
    dialog.ui
