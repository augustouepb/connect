#-------------------------------------------------
#
# Project created by QtCreator 2015-10-28T14:56:12
#
#-------------------------------------------------

QT       += core gui dbus xml sql
QT += bluetooth
CONFIG += console

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Interface_Bluetooth
TEMPLATE = app

LIBS += -lpthread -lgtest -pthread
SOURCES +=   xml/xml.cpp \
    xml/measurement.cpp \
    xml/configuration.cpp \
    xml/deviceattributes.cpp \
    xml/xmltest.cpp \

    #xml/xm.cpp
    #adaptors_class/agent.cpp \
    #adaptors_class/agentAdaptor.cpp \
    #interfaces_class/bluetoothDeviceInterface.cpp \
    #LoginDialog.cpp \
    #SignUp.cpp \
    #interface.cpp \




HEADERS  += xml/xml.h \
    xml/measurement.h \
    xml/configuration.h \
    xml/deviceattributes.h \

   # libraries.h \
   # interface.h \
   # adaptors_class/agent.h \
   # adaptors_class/agentAdaptor.h \
   # interfaces_class/bluetoothDeviceInterface.h \
   # LoginDialog.h \
   # SignUp.h



FORMS    += \
   # interface.ui \
   # LoginDialog.ui \
   # SignUp.ui

RESOURCES += \
    myrsc.qrc \
    translation.qrc

QMAKE_CXXFLAGS += -std=gnu++0x

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../lib/adaptor_interface/release/ -l_adapters_interfaces
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../lib/adaptor_interface/debug/ -l_adapters_interfaces
#else:unix: LIBS += -L$$PWD/../lib/adaptor_interface/ -l_adapters_interfaces

#INCLUDEPATH += $$PWD/../include/adaptor_interface
#DEPENDPATH += $$PWD/../include/adaptor_interface

#win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../lib/adaptor_interface/release/lib_adapters_interfaces.a
#else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../lib/adaptor_interface/debug/lib_adapters_interfaces.a
#else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$PWD/../lib/adaptor_interface/release/_adapters_interfaces.lib
#else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$PWD/../lib/adaptor_interface/debug/_adapters_interfaces.lib
#else:unix: PRE_TARGETDEPS += $$PWD/../lib/adaptor_interface/lib_adapters_interfaces.a


