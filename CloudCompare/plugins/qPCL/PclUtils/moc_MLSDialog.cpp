/****************************************************************************
** Meta object code from reading C++ file 'MLSDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "filters/dialogs/MLSDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MLSDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MLSDialog_t {
    QByteArrayData data[8];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MLSDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MLSDialog_t qt_meta_stringdata_MLSDialog = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MLSDialog"
QT_MOC_LITERAL(1, 10, 12), // "activateMenu"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "name"
QT_MOC_LITERAL(4, 29, 13), // "toggleMethods"
QT_MOC_LITERAL(5, 43, 6), // "status"
QT_MOC_LITERAL(6, 50, 21), // "updateSquaredGaussian"
QT_MOC_LITERAL(7, 72, 6) // "radius"

    },
    "MLSDialog\0activateMenu\0\0name\0toggleMethods\0"
    "status\0updateSquaredGaussian\0radius"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MLSDialog[] = {

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
       6,    1,   35,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void, QMetaType::Double,    7,

       0        // eod
};

void MLSDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MLSDialog *_t = static_cast<MLSDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->activateMenu((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->toggleMethods((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateSquaredGaussian((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MLSDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MLSDialog.data,
      qt_meta_data_MLSDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MLSDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MLSDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MLSDialog.stringdata0))
        return static_cast<void*>(const_cast< MLSDialog*>(this));
    if (!strcmp(_clname, "Ui::MLSDialog"))
        return static_cast< Ui::MLSDialog*>(const_cast< MLSDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int MLSDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
