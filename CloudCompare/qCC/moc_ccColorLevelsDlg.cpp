/****************************************************************************
** Meta object code from reading C++ file 'ccColorLevelsDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccColorLevelsDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccColorLevelsDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccColorLevelsDlg_t {
    QByteArrayData data[4];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccColorLevelsDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccColorLevelsDlg_t qt_meta_stringdata_ccColorLevelsDlg = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ccColorLevelsDlg"
QT_MOC_LITERAL(1, 17, 16), // "onChannelChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 7) // "onApply"

    },
    "ccColorLevelsDlg\0onChannelChanged\0\0"
    "onApply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccColorLevelsDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x09 /* Protected */,
       3,    0,   27,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void ccColorLevelsDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccColorLevelsDlg *_t = static_cast<ccColorLevelsDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onChannelChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onApply(); break;
        default: ;
        }
    }
}

const QMetaObject ccColorLevelsDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccColorLevelsDlg.data,
      qt_meta_data_ccColorLevelsDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccColorLevelsDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccColorLevelsDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccColorLevelsDlg.stringdata0))
        return static_cast<void*>(const_cast< ccColorLevelsDlg*>(this));
    if (!strcmp(_clname, "Ui::ColorLevelsDialog"))
        return static_cast< Ui::ColorLevelsDialog*>(const_cast< ccColorLevelsDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccColorLevelsDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
