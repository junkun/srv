#-------------------------------------------------
#
# Project created by QtCreator 2011-04-21T00:25:31
#
#-------------------------------------------------



TARGET = srv
TEMPLATE = app

DEPENDPATH += tvr-glibc-src
INCLUDEPATH += . tvr-glibc-src

CONFIG += link_pkgconfig
PKGCONFIG += gstreamer-0.10

SOURCES += main.cpp\
        widget.cpp \
    tvruiwidget.cpp \
    tvr-gst-src/player.c \
    tvr-gst-src/recorder.c \
    idruiwidget.cpp

target.path = /usr/bin

HEADERS  += widget.h \
    tvruiwidget.h \
    tvr-gst-src/player.h \
    tvr-gst-src/recorder.h \
    idruiwidget.h

FORMS    += widget.ui \
    tvr.ui \
    idr.ui

QT          += sql      \
            phonon
 # install
 target.path = $$[QT_INSTALL_EXAMPLES]/phonon/qmusicplayer
 sources.files = $$SOURCES $$HEADERS $$FORMS $$RESOURCES *.pro *.png images
 sources.path = $$[QT_INSTALL_EXAMPLES]/phonon/qmusicplayer
 sources.path = $$[QT_INSTALL_EXAMPLES]/multimedia/audioinput

INSTALLS += target

 wince*{
 DEPLOYMENT_PLUGIN += phonon_ds9 phonon_waveout
 }

 symbian:TARGET.UID3 = 0xA000CF6A
symbian {
     TARGET.UID3 = 0xA000D7BF
     TARGET.CAPABILITY += UserEnvironment
     include($$QT_SOURCE_TREE/examples/symbianpkgrules.pri)
 }

RESOURCES += \
    resources/tvr-res.qrc

OTHER_FILES += \
    gst.supp
