QT  +=  core \
        gui \
        opengl \
        openglextensions

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET  =   qCCP
TEMPLATE    =   lib
INCLUDEPATH +=  . \
                $$PWD/../

#Input
HEADERS +=  CCPDlg.h \
            qCCP.h \
            $$PWD/../ccStdPluginInterface.h
FORMS   +=  CCPDlg.ui
SOURCES +=  CCPDlg.cpp \
            qCCP.cpp \
            $$PWD/../ccStdPluginInterface.cpp
RESOURCES   +=  qCCP.qrc

#CC
win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../CC/release/ -lCC_CORE_LIB
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../CC/debug/ -lCC_CORE_LIB
else:unix: LIBS += -L$$OUT_PWD/../../CC/ -lCC_CORE_LIB

INCLUDEPATH += $$PWD/../../CC/include
DEPENDPATH += $$PWD/../../CC/include

#qCC_db
win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../libs/qCC_db/release/ -lQCC_DB_LIB
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../libs/qCC_db/debug/ -lQCC_DB_LIB
else:unix: LIBS += -L$$OUT_PWD/../../libs/qCC_db/ -lQCC_DB_LIB

INCLUDEPATH += $$PWD/../../libs/qCC_db
DEPENDPATH += $$PWD/../../libs/qCC_db

#qCC_glwindow
win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../../libs/qCC_glWindow/release/ -lQCC_GL_LIB
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../../libs/qCC_glWindow/debug/ -lQCC_GL_LIB
else:unix: LIBS += -L$$OUT_PWD/../../libs/qCC_glWindow/ -lQCC_GL_LIB

INCLUDEPATH += $$PWD/../../libs/qCC_glWindow
DEPENDPATH += $$PWD/../../libs/qCC_glWindow
