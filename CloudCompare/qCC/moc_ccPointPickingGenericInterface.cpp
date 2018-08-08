/****************************************************************************
** Meta object code from reading C++ file 'ccPointPickingGenericInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccPointPickingGenericInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPointPickingGenericInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccPointPickingGenericInterface_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccPointPickingGenericInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccPointPickingGenericInterface_t qt_meta_stringdata_ccPointPickingGenericInterface = {
    {
QT_MOC_LITERAL(0, 0, 30), // "ccPointPickingGenericInterface"
QT_MOC_LITERAL(1, 31, 16), // "handlePickedItem"
QT_MOC_LITERAL(2, 48, 0), // ""
QT_MOC_LITERAL(3, 49, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 60, 6), // "entity"
QT_MOC_LITERAL(5, 67, 7), // "itemIdx"
QT_MOC_LITERAL(6, 75, 1), // "x"
QT_MOC_LITERAL(7, 77, 1), // "y"
QT_MOC_LITERAL(8, 79, 9) // "CCVector3"

    },
    "ccPointPickingGenericInterface\0"
    "handlePickedItem\0\0ccHObject*\0entity\0"
    "itemIdx\0x\0y\0CCVector3"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccPointPickingGenericInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    5,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::UInt, QMetaType::Int, QMetaType::Int, 0x80000000 | 8,    4,    5,    6,    7,    2,

       0        // eod
};

void ccPointPickingGenericInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccPointPickingGenericInterface *_t = static_cast<ccPointPickingGenericInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->handlePickedItem((*reinterpret_cast< ccHObject*(*)>(_a[1])),(*reinterpret_cast< uint(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< const CCVector3(*)>(_a[5]))); break;
        default: ;
        }
    }
}

const QMetaObject ccPointPickingGenericInterface::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccPointPickingGenericInterface.data,
      qt_meta_data_ccPointPickingGenericInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccPointPickingGenericInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccPointPickingGenericInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccPointPickingGenericInterface.stringdata0))
        return static_cast<void*>(const_cast< ccPointPickingGenericInterface*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccPointPickingGenericInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
