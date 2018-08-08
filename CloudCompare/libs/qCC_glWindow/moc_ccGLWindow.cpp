/****************************************************************************
** Meta object code from reading C++ file 'ccGLWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccGLWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGLWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccGLWindow_t {
    QByteArrayData data[61];
    char stringdata0[809];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccGLWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccGLWindow_t qt_meta_stringdata_ccGLWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ccGLWindow"
QT_MOC_LITERAL(1, 11, 22), // "entitySelectionChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 46, 24), // "entitiesSelectionChanged"
QT_MOC_LITERAL(5, 71, 23), // "std::unordered_set<int>"
QT_MOC_LITERAL(6, 95, 6), // "entIDs"
QT_MOC_LITERAL(7, 102, 10), // "itemPicked"
QT_MOC_LITERAL(8, 113, 6), // "entity"
QT_MOC_LITERAL(9, 120, 11), // "subEntityID"
QT_MOC_LITERAL(10, 132, 1), // "x"
QT_MOC_LITERAL(11, 134, 1), // "y"
QT_MOC_LITERAL(12, 136, 9), // "CCVector3"
QT_MOC_LITERAL(13, 146, 1), // "P"
QT_MOC_LITERAL(14, 148, 14), // "itemPickedFast"
QT_MOC_LITERAL(15, 163, 19), // "fastPickingFinished"
QT_MOC_LITERAL(16, 183, 14), // "viewMatRotated"
QT_MOC_LITERAL(17, 198, 11), // "ccGLMatrixd"
QT_MOC_LITERAL(18, 210, 6), // "rotMat"
QT_MOC_LITERAL(19, 217, 15), // "cameraDisplaced"
QT_MOC_LITERAL(20, 233, 3), // "ddx"
QT_MOC_LITERAL(21, 237, 3), // "ddy"
QT_MOC_LITERAL(22, 241, 17), // "mouseWheelRotated"
QT_MOC_LITERAL(23, 259, 14), // "wheelDelta_deg"
QT_MOC_LITERAL(24, 274, 23), // "perspectiveStateChanged"
QT_MOC_LITERAL(25, 298, 18), // "baseViewMatChanged"
QT_MOC_LITERAL(26, 317, 10), // "newViewMat"
QT_MOC_LITERAL(27, 328, 16), // "pixelSizeChanged"
QT_MOC_LITERAL(28, 345, 10), // "fovChanged"
QT_MOC_LITERAL(29, 356, 16), // "zNearCoefChanged"
QT_MOC_LITERAL(30, 373, 17), // "pivotPointChanged"
QT_MOC_LITERAL(31, 391, 10), // "CCVector3d"
QT_MOC_LITERAL(32, 402, 16), // "cameraPosChanged"
QT_MOC_LITERAL(33, 419, 11), // "translation"
QT_MOC_LITERAL(34, 431, 1), // "t"
QT_MOC_LITERAL(35, 433, 8), // "rotation"
QT_MOC_LITERAL(36, 442, 17), // "leftButtonClicked"
QT_MOC_LITERAL(37, 460, 18), // "rightButtonClicked"
QT_MOC_LITERAL(38, 479, 10), // "mouseMoved"
QT_MOC_LITERAL(39, 490, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(40, 507, 14), // "buttonReleased"
QT_MOC_LITERAL(41, 522, 9), // "drawing3D"
QT_MOC_LITERAL(42, 532, 12), // "filesDropped"
QT_MOC_LITERAL(43, 545, 8), // "newLabel"
QT_MOC_LITERAL(44, 554, 3), // "obj"
QT_MOC_LITERAL(45, 558, 26), // "exclusiveFullScreenToggled"
QT_MOC_LITERAL(46, 585, 10), // "zoomGlobal"
QT_MOC_LITERAL(47, 596, 6), // "redraw"
QT_MOC_LITERAL(48, 603, 6), // "only2D"
QT_MOC_LITERAL(49, 610, 8), // "resetLOD"
QT_MOC_LITERAL(50, 619, 12), // "onWheelEvent"
QT_MOC_LITERAL(51, 632, 18), // "startFrameRateTest"
QT_MOC_LITERAL(52, 651, 13), // "requestUpdate"
QT_MOC_LITERAL(53, 665, 18), // "renderNextLODLevel"
QT_MOC_LITERAL(54, 684, 17), // "stopFrameRateTest"
QT_MOC_LITERAL(55, 702, 16), // "onItemPickedFast"
QT_MOC_LITERAL(56, 719, 12), // "pickedEntity"
QT_MOC_LITERAL(57, 732, 15), // "pickedItemIndex"
QT_MOC_LITERAL(58, 748, 20), // "checkScheduledRedraw"
QT_MOC_LITERAL(59, 769, 19), // "handleLoggedMessage"
QT_MOC_LITERAL(60, 789, 19) // "QOpenGLDebugMessage"

    },
    "ccGLWindow\0entitySelectionChanged\0\0"
    "ccHObject*\0entitiesSelectionChanged\0"
    "std::unordered_set<int>\0entIDs\0"
    "itemPicked\0entity\0subEntityID\0x\0y\0"
    "CCVector3\0P\0itemPickedFast\0"
    "fastPickingFinished\0viewMatRotated\0"
    "ccGLMatrixd\0rotMat\0cameraDisplaced\0"
    "ddx\0ddy\0mouseWheelRotated\0wheelDelta_deg\0"
    "perspectiveStateChanged\0baseViewMatChanged\0"
    "newViewMat\0pixelSizeChanged\0fovChanged\0"
    "zNearCoefChanged\0pivotPointChanged\0"
    "CCVector3d\0cameraPosChanged\0translation\0"
    "t\0rotation\0leftButtonClicked\0"
    "rightButtonClicked\0mouseMoved\0"
    "Qt::MouseButtons\0buttonReleased\0"
    "drawing3D\0filesDropped\0newLabel\0obj\0"
    "exclusiveFullScreenToggled\0zoomGlobal\0"
    "redraw\0only2D\0resetLOD\0onWheelEvent\0"
    "startFrameRateTest\0requestUpdate\0"
    "renderNextLODLevel\0stopFrameRateTest\0"
    "onItemPickedFast\0pickedEntity\0"
    "pickedItemIndex\0checkScheduledRedraw\0"
    "handleLoggedMessage\0QOpenGLDebugMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccGLWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  199,    2, 0x06 /* Public */,
       4,    1,  202,    2, 0x06 /* Public */,
       7,    5,  205,    2, 0x06 /* Public */,
      14,    4,  216,    2, 0x06 /* Public */,
      15,    0,  225,    2, 0x06 /* Public */,
      16,    1,  226,    2, 0x06 /* Public */,
      19,    2,  229,    2, 0x06 /* Public */,
      22,    1,  234,    2, 0x06 /* Public */,
      24,    0,  237,    2, 0x06 /* Public */,
      25,    1,  238,    2, 0x06 /* Public */,
      27,    1,  241,    2, 0x06 /* Public */,
      28,    1,  244,    2, 0x06 /* Public */,
      29,    1,  247,    2, 0x06 /* Public */,
      30,    1,  250,    2, 0x06 /* Public */,
      32,    1,  253,    2, 0x06 /* Public */,
      33,    1,  256,    2, 0x06 /* Public */,
      35,    1,  259,    2, 0x06 /* Public */,
      36,    2,  262,    2, 0x06 /* Public */,
      37,    2,  267,    2, 0x06 /* Public */,
      38,    3,  272,    2, 0x06 /* Public */,
      40,    0,  279,    2, 0x06 /* Public */,
      41,    0,  280,    2, 0x06 /* Public */,
      42,    1,  281,    2, 0x06 /* Public */,
      43,    1,  284,    2, 0x06 /* Public */,
      45,    1,  287,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      46,    0,  290,    2, 0x0a /* Public */,
      47,    2,  291,    2, 0x0a /* Public */,
      47,    1,  296,    2, 0x2a /* Public | MethodCloned */,
      47,    0,  299,    2, 0x2a /* Public | MethodCloned */,
      50,    1,  300,    2, 0x0a /* Public */,
      51,    0,  303,    2, 0x0a /* Public */,
      52,    0,  304,    2, 0x0a /* Public */,
      53,    0,  305,    2, 0x09 /* Protected */,
      54,    0,  306,    2, 0x09 /* Protected */,
      55,    4,  307,    2, 0x09 /* Protected */,
      58,    0,  316,    2, 0x09 /* Protected */,
      59,    1,  317,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::Int, QMetaType::Int, 0x80000000 | 12,    8,    9,   10,   11,   13,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   20,   21,
    QMetaType::Void, QMetaType::Float,   23,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   26,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void, 0x80000000 | 31,    2,
    QMetaType::Void, 0x80000000 | 31,   34,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 39,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, 0x80000000 | 3,   44,
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   48,   49,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,   23,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,   56,   57,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 60,    2,

       0        // eod
};

void ccGLWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccGLWindow *_t = static_cast<ccGLWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entitySelectionChanged((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 1: _t->entitiesSelectionChanged((*reinterpret_cast< std::unordered_set<int>(*)>(_a[1]))); break;
        case 2: _t->itemPicked((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const CCVector3(*)>(_a[5]))); break;
        case 3: _t->itemPickedFast((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 4: _t->fastPickingFinished(); break;
        case 5: _t->viewMatRotated((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 6: _t->cameraDisplaced((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 7: _t->mouseWheelRotated((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 8: _t->perspectiveStateChanged(); break;
        case 9: _t->baseViewMatChanged((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 10: _t->pixelSizeChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 11: _t->fovChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 12: _t->zNearCoefChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 13: _t->pivotPointChanged((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 14: _t->cameraPosChanged((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 15: _t->translation((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 16: _t->rotation((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 17: _t->leftButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 18: _t->rightButtonClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 19: _t->mouseMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 20: _t->buttonReleased(); break;
        case 21: _t->drawing3D(); break;
        case 22: _t->filesDropped((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 23: _t->newLabel((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 24: _t->exclusiveFullScreenToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->zoomGlobal(); break;
        case 26: _t->redraw((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 27: _t->redraw((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->redraw(); break;
        case 29: _t->onWheelEvent((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 30: _t->startFrameRateTest(); break;
        case 31: _t->requestUpdate(); break;
        case 32: _t->renderNextLODLevel(); break;
        case 33: _t->stopFrameRateTest(); break;
        case 34: _t->onItemPickedFast((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 35: _t->checkScheduledRedraw(); break;
        case 36: _t->handleLoggedMessage((*reinterpret_cast< const QOpenGLDebugMessage(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QOpenGLDebugMessage >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccGLWindow::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::entitySelectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(std::unordered_set<int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::entitiesSelectionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(ccHObject * , unsigned  , int , int , const CCVector3 & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::itemPicked)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(ccHObject * , int , int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::itemPickedFast)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::fastPickingFinished)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const ccGLMatrixd & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::viewMatRotated)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::cameraDisplaced)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::mouseWheelRotated)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::perspectiveStateChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const ccGLMatrixd & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::baseViewMatChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::pixelSizeChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::fovChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::zNearCoefChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::pivotPointChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::cameraPosChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const CCVector3d & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::translation)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(const ccGLMatrixd & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::rotation)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::leftButtonClicked)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::rightButtonClicked)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(int , int , Qt::MouseButtons );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::mouseMoved)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::buttonReleased)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::drawing3D)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(QStringList );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::filesDropped)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::newLabel)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (ccGLWindow::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccGLWindow::exclusiveFullScreenToggled)) {
                *result = 24;
                return;
            }
        }
    }
}

const QMetaObject ccGLWindow::staticMetaObject = {
    { &ccGLWindowParent::staticMetaObject, qt_meta_stringdata_ccGLWindow.data,
      qt_meta_data_ccGLWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccGLWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccGLWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccGLWindow.stringdata0))
        return static_cast<void*>(const_cast< ccGLWindow*>(this));
    if (!strcmp(_clname, "ccGenericGLDisplay"))
        return static_cast< ccGenericGLDisplay*>(const_cast< ccGLWindow*>(this));
    return ccGLWindowParent::qt_metacast(_clname);
}

int ccGLWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccGLWindowParent::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
    }
    return _id;
}

// SIGNAL 0
void ccGLWindow::entitySelectionChanged(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccGLWindow::entitiesSelectionChanged(std::unordered_set<int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccGLWindow::itemPicked(ccHObject * _t1, unsigned  _t2, int _t3, int _t4, const CCVector3 & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ccGLWindow::itemPickedFast(ccHObject * _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ccGLWindow::fastPickingFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void ccGLWindow::viewMatRotated(const ccGLMatrixd & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ccGLWindow::cameraDisplaced(float _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ccGLWindow::mouseWheelRotated(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void ccGLWindow::perspectiveStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, Q_NULLPTR);
}

// SIGNAL 9
void ccGLWindow::baseViewMatChanged(const ccGLMatrixd & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void ccGLWindow::pixelSizeChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void ccGLWindow::fovChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void ccGLWindow::zNearCoefChanged(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void ccGLWindow::pivotPointChanged(const CCVector3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void ccGLWindow::cameraPosChanged(const CCVector3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void ccGLWindow::translation(const CCVector3d & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void ccGLWindow::rotation(const ccGLMatrixd & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void ccGLWindow::leftButtonClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void ccGLWindow::rightButtonClicked(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void ccGLWindow::mouseMoved(int _t1, int _t2, Qt::MouseButtons _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void ccGLWindow::buttonReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void ccGLWindow::drawing3D()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void ccGLWindow::filesDropped(QStringList _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void ccGLWindow::newLabel(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void ccGLWindow::exclusiveFullScreenToggled(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
