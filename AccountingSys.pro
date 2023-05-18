QT       += core gui sql network core5compat

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    actreg.cpp \
    bankform.cpp \
    infwindow.cpp \
    invoiceform.cpp \
    main.cpp \
    reg.cpp

HEADERS += \
    OS_CHECK.h \
    actreg.h \
    bankform.h \
    infwindow.h \
    invoiceform.h \
    reg.h

FORMS += \
    actreg.ui \
    bankform.ui \
    infwindow.ui \
    invoiceform.ui \
    reg.ui


win32:RC_FILE = acc2.rc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    data_base.qrc \
    resource.qrc


INCLUDEPATH += $$PWD/include
LIBS += -L$$PWD/lib -llibminizip -llibaes -llibzlibstatic

