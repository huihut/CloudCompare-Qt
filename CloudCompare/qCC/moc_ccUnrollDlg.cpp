/****************************************************************************
** Meta object code from reading C++ file 'ccUnrollDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccUnrollDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccUnrollDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccUnrollDlg_t {
    QByteArrayData data[7];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccUnrollDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccUnrollDlg_t qt_meta_stringdata_ccUnrollDlg = {
    {
QT_MOC_LITERAL(0, 0, 11), // "ccUnrollDlg"
QT_MOC_LITERAL(1, 12, 16), // "shapeTypeChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 20), // "axisDimensionChanged"
QT_MOC_LITERAL(5, 57, 20), // "axisAutoStateChanged"
QT_MOC_LITERAL(6, 78, 10) // "checkState"

    },
    "ccUnrollDlg\0shapeTypeChanged\0\0index\0"
    "axisDimensionChanged\0axisAutoStateChanged\0"
    "checkState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccUnrollDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x09 /* Protected */,
       4,    1,   32,    2, 0x09 /* Protected */,
       5,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void ccUnrollDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccUnrollDlg *_t = static_cast<ccUnrollDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shapeTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->axisDimensionChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->axisAutoStateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ccUnrollDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccUnrollDlg.data,
      qt_meta_data_ccUnrollDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccUnrollDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccUnrollDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccUnrollDlg.stringdata0))
        return static_cast<void*>(const_cast< ccUnrollDlg*>(this));
    if (!strcmp(_clname, "Ui::UnrollDialog"))
        return static_cast< Ui::UnrollDialog*>(const_cast< ccUnrollDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccUnrollDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
