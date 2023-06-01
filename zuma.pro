QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adventuremenu.cpp \
    cball.cpp \
    cfrog.cpp \
    cpath.cpp \
    cpoint.cpp \
    gauntmenu.cpp \
    level1.cpp \
    main.cpp \
    menu.cpp

HEADERS += \
    adventuremenu.h \
    cball.h \
    cfrog.h \
    cpath.h \
    cpoint.h \
    gauntmenu.h \
    level1.h \
    menu.h

FORMS += \
    adventuremenu.ui \
    gauntmenu.ui \
    level1.ui \
    menu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    images.qrc
