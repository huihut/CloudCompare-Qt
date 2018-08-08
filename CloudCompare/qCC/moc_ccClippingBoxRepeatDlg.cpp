/****************************************************************************
** Meta object code from reading C++ file 'ccClippingBoxRepeatDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccClippingBoxRepeatDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccClippingBoxRepeatDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccClippingBoxRepeatDlg_t {
    QByteArrayData data[6];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccClippingBoxRepeatDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccClippingBoxRepeatDlg_t qt_meta_stringdata_ccClippingBoxRepeatDlg = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ccClippingBoxRepeatDlg"
QT_MOC_LITERAL(1, 23, 12), // "onDimChecked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "onDimXChecked"
QT_MOC_LITERAL(4, 51, 13), // "onDimYChecked"
QT_MOC_LITERAL(5, 65, 13) // "onDimZChecked"

    },
    "ccClippingBoxRepeatDlg\0onDimChecked\0"
    "\0onDimXChecked\0onDimYChecked\0onDimZChecked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccClippingBoxRepeatDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x09 /* Protected */,
       3,    1,   37,    2, 0x09 /* Protected */,
       4,    1,   40,    2, 0x09 /* Protected */,
       5,    1,   43,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void ccClippingBoxRepeatDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccClippingBoxRepeatDlg *_t = static_cast<ccClippingBoxRepeatDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDimChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->onDimXChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onDimYChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->onDimZChecked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ccClippingBoxRepeatDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccClippingBoxRepeatDlg.data,
      qt_meta_data_ccClippingBoxRepeatDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccClippingBoxRepeatDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccClippingBoxRepeatDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccClippingBoxRepeatDlg.stringdata0))
        return static_cast<void*>(const_cast< ccClippingBoxRepeatDlg*>(this));
    if (!strcmp(_clname, "Ui::ClippingBoxRepeatDlg"))
        return static_cast< Ui::ClippingBoxRepeatDlg*>(const_cast< ccClippingBoxRepeatDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccClippingBoxRepeatDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
