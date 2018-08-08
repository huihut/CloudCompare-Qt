/****************************************************************************
** Meta object code from reading C++ file 'ccPointPropertiesDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccPointPropertiesDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPointPropertiesDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccPointPropertiesDlg_t {
    QByteArrayData data[18];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccPointPropertiesDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccPointPropertiesDlg_t qt_meta_stringdata_ccPointPropertiesDlg = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ccPointPropertiesDlg"
QT_MOC_LITERAL(1, 21, 8), // "newLabel"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 42, 7), // "onClose"
QT_MOC_LITERAL(5, 50, 30), // "activatePointPropertiesDisplay"
QT_MOC_LITERAL(6, 81, 23), // "activateDistanceDisplay"
QT_MOC_LITERAL(7, 105, 20), // "activateAngleDisplay"
QT_MOC_LITERAL(8, 126, 21), // "activate2DZonePicking"
QT_MOC_LITERAL(9, 148, 15), // "initializeState"
QT_MOC_LITERAL(10, 164, 18), // "exportCurrentLabel"
QT_MOC_LITERAL(11, 183, 12), // "update2DZone"
QT_MOC_LITERAL(12, 196, 1), // "x"
QT_MOC_LITERAL(13, 198, 1), // "y"
QT_MOC_LITERAL(14, 200, 16), // "Qt::MouseButtons"
QT_MOC_LITERAL(15, 217, 7), // "buttons"
QT_MOC_LITERAL(16, 225, 19), // "processClickedPoint"
QT_MOC_LITERAL(17, 245, 11) // "close2DZone"

    },
    "ccPointPropertiesDlg\0newLabel\0\0"
    "ccHObject*\0onClose\0activatePointPropertiesDisplay\0"
    "activateDistanceDisplay\0activateAngleDisplay\0"
    "activate2DZonePicking\0initializeState\0"
    "exportCurrentLabel\0update2DZone\0x\0y\0"
    "Qt::MouseButtons\0buttons\0processClickedPoint\0"
    "close2DZone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccPointPropertiesDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   72,    2, 0x09 /* Protected */,
       5,    0,   73,    2, 0x09 /* Protected */,
       6,    0,   74,    2, 0x09 /* Protected */,
       7,    0,   75,    2, 0x09 /* Protected */,
       8,    0,   76,    2, 0x09 /* Protected */,
       9,    0,   77,    2, 0x09 /* Protected */,
      10,    0,   78,    2, 0x09 /* Protected */,
      11,    3,   79,    2, 0x09 /* Protected */,
      16,    2,   86,    2, 0x09 /* Protected */,
      17,    0,   91,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, 0x80000000 | 14,   12,   13,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void,

       0        // eod
};

void ccPointPropertiesDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccPointPropertiesDlg *_t = static_cast<ccPointPropertiesDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newLabel((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 1: _t->onClose(); break;
        case 2: _t->activatePointPropertiesDisplay(); break;
        case 3: _t->activateDistanceDisplay(); break;
        case 4: _t->activateAngleDisplay(); break;
        case 5: _t->activate2DZonePicking(); break;
        case 6: _t->initializeState(); break;
        case 7: _t->exportCurrentLabel(); break;
        case 8: _t->update2DZone((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< Qt::MouseButtons(*)>(_a[3]))); break;
        case 9: _t->processClickedPoint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->close2DZone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccPointPropertiesDlg::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccPointPropertiesDlg::newLabel)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ccPointPropertiesDlg::staticMetaObject = {
    { &ccPointPickingGenericInterface::staticMetaObject, qt_meta_stringdata_ccPointPropertiesDlg.data,
      qt_meta_data_ccPointPropertiesDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccPointPropertiesDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccPointPropertiesDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccPointPropertiesDlg.stringdata0))
        return static_cast<void*>(const_cast< ccPointPropertiesDlg*>(this));
    if (!strcmp(_clname, "Ui::PointPropertiesDlg"))
        return static_cast< Ui::PointPropertiesDlg*>(const_cast< ccPointPropertiesDlg*>(this));
    return ccPointPickingGenericInterface::qt_metacast(_clname);
}

int ccPointPropertiesDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccPointPickingGenericInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void ccPointPropertiesDlg::newLabel(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
