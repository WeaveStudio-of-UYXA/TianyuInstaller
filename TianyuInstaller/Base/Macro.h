#pragma once
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtNetwork>
#include <QTest>
#include <exception>

#ifndef TRUE
#define TRUE true
#define FALSE false
#endif

#ifndef Public
#define Public public:
#define Private private:
#define Protected protected:
#endif

#ifndef QSlot
#define QSlot public slots:
#endif

#ifndef QSignal
#define QSignal signals:
#endif

#ifdef WIN_DEPLOY
#define DEPLOY  1
#endif
#ifdef ANDROID_DEPLOY
#define DEPLOY 2
#include <QtAndroid>
#endif


