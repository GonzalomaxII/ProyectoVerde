QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    avon.cpp \
    calculadora.cpp \
    coche.cpp \
    demostra.cpp \
    elec.cpp \
    elecpbien.cpp \
    leccion_1.cpp \
    main.cpp \
    mainwindow.cpp \
    menu_lecciones.cpp \
    menu_opc.cpp \
    plastico.cpp \
    quiz.cpp

HEADERS += \
    avon.h \
    calculadora.h \
    coche.h \
    demostra.h \
    elec.h \
    elecpbien.h \
    leccion_1.h \
    mainwindow.h \
    menu_lecciones.h \
    menu_opc.h \
    plastico.h \
    quiz.h

FORMS += \
    avon.ui \
    calculadora.ui \
    coche.ui \
    demostra.ui \
    elec.ui \
    elecpbien.ui \
    leccion_1.ui \
    mainwindow.ui \
    menu_lecciones.ui \
    menu_opc.ui \
    plastico.ui \
    quiz.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
