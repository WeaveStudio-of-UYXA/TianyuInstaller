QT       += core gui widgets testlib network androidextras

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += ./Base/Exception.h \
    ./Base/Macro.h \
    ./UI/Launch/LaunchWidget.h \
    ./UI/SideWidget.h \
    ./Base/AndroidAPI.h \
    ./Base/BaseAPI.h \
    ./UI/MainWindow.h
SOURCES += ./Base/BaseAPI.cpp \
    ./main.cpp
RESOURCES += Resource.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/res/values/libs.xml

contains(ANDROID_TARGET_ARCH,arm64-v8a) {
    ANDROID_PACKAGE_SOURCE_DIR = \
        $$PWD/android
}
