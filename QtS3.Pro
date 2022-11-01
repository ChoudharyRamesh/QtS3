CONFIG += c++17 console
CONFIG -= app_bundle

include(qts3.pri)

SOURCES += \
    main.cpp \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
