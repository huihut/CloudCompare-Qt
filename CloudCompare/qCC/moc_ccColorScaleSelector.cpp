/****************************************************************************
** Meta object code from reading C++ file 'ccColorScaleSelector.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccColorScaleSelector.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccColorScaleSelector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccColorScaleSelector_t {
    QByteArrayData data[4];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccColorScaleSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccColorScaleSelector_t qt_meta_stringdata_ccColorScaleSelector = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ccColorScaleSelector"
QT_MOC_LITERAL(1, 21, 18), // "colorScaleSelected"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 24) // "colorScaleEditorSummoned"

    },
    "ccColorScaleSelector\0colorScaleSelected\0"
    "\0colorScaleEditorSummoned"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccColorScaleSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       3,    0,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void ccColorScaleSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccColorScaleSelector *_t = static_cast<ccColorScaleSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorScaleSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->colorScaleEditorSummoned(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccColorScaleSelector::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccColorScaleSelector::colorScaleSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ccColorScaleSelector::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccColorScaleSelector::colorScaleEditorSummoned)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ccColorScaleSelector::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_ccColorScaleSelector.data,
      qt_meta_data_ccColorScaleSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccColorScaleSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccColorScaleSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccColorScaleSelector.stringdata0))
        return static_cast<void*>(const_cast< ccColorScaleSelector*>(this));
    return QFrame::qt_metacast(_clname);
}

int ccColorScaleSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void ccColorScaleSelector::colorScaleSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccColorScaleSelector::colorScaleEditorSummoned()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
