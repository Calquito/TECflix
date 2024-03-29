TEMPLATE = app
TARGET = curl
QT       += core gui network  widgets webenginewidgets webengine multimediawidgets multimedia multimediawidgets webengine

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# CONFIG += link_pkgconfig
# PKGCONFIG += curl

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    abridor.cpp \
    filedownloader.cpp \
    intentos_de_paginacion.cpp \
    main.cpp \
    mainwindow.cpp \
    memory_manager.cpp \
    no_paginacion.cpp \
    paginacion.cpp \
    scroll_infinito.cpp \
    streaming.cpp

HEADERS += \
    abridor.h \
    filedownloader.h \
    mainwindow.h \
    memory_manager.h \
    no_paginacion.h \
    paginacion.h \
    scroll_infinito.h \
    curl.h\
    streaming.h

FORMS += \
    mainwindow.ui \
    no_paginacion.ui \
    paginacion.ui \
    scroll_infinito.ui \
    streaming.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    web_view.qml
