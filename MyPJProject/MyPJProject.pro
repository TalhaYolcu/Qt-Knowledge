QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/main.cpp \
    src/mainwindow.cpp \


HEADERS += \
    include/mainwindow.h \


FORMS += \
    form/mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target





INCLUDEPATH += $$PWD/include/pjsip
DEPENDPATH += $$PWD/include/pjsip


#unix:!macx: LIBS += -L$$PWD/lib -lpjsua2 -lpjsua -lpjsip-ua -lpjsip-simple -lpj -lpjsip -lpjmedia-codec -lpjmedia -lpjmedia-audiodev -lpjnath -lpjlib-util

unix:!macx: LIBS += -L$$PWD/lib/unix -lpjsua2-x86_64-unknown-linux-gnu \
-lpjsua-x86_64-unknown-linux-gnu \
-lpjsip-ua-x86_64-unknown-linux-gnu \
-lpjsip-simple-x86_64-unknown-linux-gnu \
-lpjsip-x86_64-unknown-linux-gnu \
-lpjmedia-codec-x86_64-unknown-linux-gnu \
-lpjmedia-x86_64-unknown-linux-gnu \
-lpjmedia-videodev-x86_64-unknown-linux-gnu \
-lpjmedia-audiodev-x86_64-unknown-linux-gnu \
-lpjmedia-x86_64-unknown-linux-gnu \
-lpjnath-x86_64-unknown-linux-gnu \
-lpjlib-util-x86_64-unknown-linux-gnu \
-lsrtp-x86_64-unknown-linux-gnu \
-lresample-x86_64-unknown-linux-gnu \
-lgsmcodec-x86_64-unknown-linux-gnu \
-lspeex-x86_64-unknown-linux-gnu \
-lilbccodec-x86_64-unknown-linux-gnu \
-lg7221codec-x86_64-unknown-linux-gnu \
-lyuv-x86_64-unknown-linux-gnu \
-lwebrtc-x86_64-unknown-linux-gnu \
-lpj-x86_64-unknown-linux-gnu -lssl -lcrypto -luuid




win32: LIBS += -L$$PWD/lib/win/ -lpjlib-x86_64-x64-vc14-Release \
-lpjlib-util-x86_64-x64-vc14-Release \
-lpjmedia-audiodev-x86_64-x64-vc14-Release \
-lpjmedia-codec-x86_64-x64-vc14-Release \
-lpjmedia-x86_64-x64-vc14-Release \
-lpjmedia-videodev-x86_64-x64-vc14-Release \
-lpjnath-x86_64-x64-vc14-Release \
-lpjsip-core-x86_64-x64-vc14-Release \
-lpjsip-simple-x86_64-x64-vc14-Release \
-lpjsip-ua-x86_64-x64-vc14-Release \
-lpjsua2-lib-x86_64-x64-vc14-Release \
-lpjsua-lib-x86_64-x64-vc14-Release \
-llibbaseclasses-x86_64-x64-vc14-Release \
-llibg7221codec-x86_64-x64-vc14-Release \
-llibgsmcodec-x86_64-x64-vc14-Release \
-llibilbccodec-x86_64-x64-vc14-Release \
-llibmilenage-x86_64-x64-vc14-Release \
-llibresample-x86_64-x64-vc14-Release \
-llibspeex-x86_64-x64-vc14-Release \
-llibsrtp-x86_64-x64-vc14-Release \
-llibwebrtc-x86_64-x64-vc14-Release \
-llibyuv-x86_64-x64-vc14-Release \
-lws2_32 -lole32



DISTFILES +=


