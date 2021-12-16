#-------------------------------------------------
#
# Project created by QtCreator 2014-08-29T21:55:23
#
#-------------------------------------------------

QT       += \
    core gui\
    charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += \
    dwt2.cpp \
    imgprocess.cpp \
    main.cpp\
    diphw.cpp

HEADERS  += diphw.h \
    dwt2.h \
    imgprocess.h

FORMS    += diphw.ui


#mac open this --------------------------------------------------

unix {
    TARGET = code
    TEMPLATE = app

#    win32:CONFIG(release, debug|release): LIBS += -L/usr/local/Cellar/opencv@3/3.4.15/lib/release/ -lopencv_imgproc -lopencv_core -lopencv_highgui -lopencv_imgcodecs
#    else:win32:CONFIG(debug, debug|release): LIBS += -L/usr/local/Cellar/opencv@3/3.4.15/lib/debug/ -lopencv_imgproc -lopencv_core -lopencv_highgui -lopencv_imgcodecs
    unix: LIBS += -L/usr/local/Cellar/opencv@3/3.4.15/lib/ -lopencv_imgproc -lopencv_core -lopencv_highgui -lopencv_imgcodecs -lopencv_calib3d -lopencv_videoio

    INCLUDEPATH += /usr/local/Cellar/opencv@3/3.4.15/include
    DEPENDPATH += /usr/local/Cellar/opencv@3/3.4.15/include

}

#----------------------------------------------------------------



#windows open this --------------------------------------------------

win32 {
    CONFIG += c++11

    qnx: target.path = /tmp/$${TARGET}/bin
    else: unix:!android: target.path = /opt/$${TARGET}/bin
    !isEmpty(target.path): INSTALLS += target

    win32:CONFIG(release, debug|release): LIBS += -LD:/opencv3412/build/x64/vc15/lib/ -lopencv_world3412
    else:win32:CONFIG(debug, debug|release): LIBS += -LD:/opencv3412/build/x64/vc15/lib/ -lopencv_world3412d

    INCLUDEPATH += D:/opencv3412/build/include

    DEPENDPATH += D:/opencv3412/build/include

}
#----------------------------------------------------------------


