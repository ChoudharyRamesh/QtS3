INCLUDEPATH += $$PWD
INCLUDEPATH += $$PWD/Xml2Json/Wrapper

QT += core network

HEADERS += \
    $$PWD/qts3.h \
    $$PWD/qts3qnam_p.h \
    $$PWD/qts3_p.h \
    $$PWD/Xml2Json/Wrapper/XmlToJson.h \
    
SOURCES += \
    $$PWD/qts3.cpp \
    $$PWD/qts3qnam.cpp \
    $$PWD/qts3_p.cpp \
    $$PWD/Xml2Json/Wrapper/XmlToJson.cpp \
