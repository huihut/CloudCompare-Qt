/****************************************************************************
** Meta object code from reading C++ file 'BaseFilter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filters/BaseFilter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BaseFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BaseFilter_t {
    QByteArrayData data[7];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BaseFilter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BaseFilter_t qt_meta_stringdata_BaseFilter = {
    {
QT_MOC_LITERAL(0, 0, 10), // "BaseFilter"
QT_MOC_LITERAL(1, 11, 16), // "entityHasChanged"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "ccHObject*"
QT_MOC_LITERAL(4, 40, 9), // "newEntity"
QT_MOC_LITERAL(5, 50, 15), // "newErrorMessage"
QT_MOC_LITERAL(6, 66, 13) // "performAction"

    },
    "BaseFilter\0entityHasChanged\0\0ccHObject*\0"
    "newEntity\0newErrorMessage\0performAction"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BaseFilter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,
       5,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   43,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Int,

       0        // eod
};

void BaseFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BaseFilter *_t = static_cast<BaseFilter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entityHasChanged((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 1: _t->newEntity((*reinterpret_cast< ccHObject*(*)>(_a[1]))); break;
        case 2: _t->newErrorMessage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: { int _r = _t->performAction();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BaseFilter::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseFilter::entityHasChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (BaseFilter::*_t)(ccHObject * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseFilter::newEntity)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (BaseFilter::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BaseFilter::newErrorMessage)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject BaseFilter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_BaseFilter.data,
      qt_meta_data_BaseFilter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BaseFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BaseFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BaseFilter.stringdata0))
        return static_cast<void*>(const_cast< BaseFilter*>(this));
    return QObject::qt_metacast(_clname);
}

int BaseFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void BaseFilter::entityHasChanged(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BaseFilter::newEntity(ccHObject * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BaseFilter::newErrorMessage(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
