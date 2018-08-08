/****************************************************************************
** Meta object code from reading C++ file 'ccShiftAndScaleCloudDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccShiftAndScaleCloudDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccShiftAndScaleCloudDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccShiftAndScaleCloudDlg_t {
    QByteArrayData data[9];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccShiftAndScaleCloudDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccShiftAndScaleCloudDlg_t qt_meta_stringdata_ccShiftAndScaleCloudDlg = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ccShiftAndScaleCloudDlg"
QT_MOC_LITERAL(1, 24, 18), // "onLoadIndexChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 26), // "onGlobalPosCheckBoxToggled"
QT_MOC_LITERAL(4, 71, 7), // "onClick"
QT_MOC_LITERAL(5, 79, 16), // "QAbstractButton*"
QT_MOC_LITERAL(6, 96, 6), // "button"
QT_MOC_LITERAL(7, 103, 27), // "updateGlobalAndLocalSystems"
QT_MOC_LITERAL(8, 131, 15) // "displayMoreInfo"

    },
    "ccShiftAndScaleCloudDlg\0onLoadIndexChanged\0"
    "\0onGlobalPosCheckBoxToggled\0onClick\0"
    "QAbstractButton*\0button\0"
    "updateGlobalAndLocalSystems\0displayMoreInfo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccShiftAndScaleCloudDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x09 /* Protected */,
       3,    1,   42,    2, 0x09 /* Protected */,
       4,    1,   45,    2, 0x09 /* Protected */,
       7,    0,   48,    2, 0x09 /* Protected */,
       8,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ccShiftAndScaleCloudDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccShiftAndScaleCloudDlg *_t = static_cast<ccShiftAndScaleCloudDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onLoadIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onGlobalPosCheckBoxToggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->onClick((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->updateGlobalAndLocalSystems(); break;
        case 4: _t->displayMoreInfo(); break;
        default: ;
        }
    }
}

const QMetaObject ccShiftAndScaleCloudDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccShiftAndScaleCloudDlg.data,
      qt_meta_data_ccShiftAndScaleCloudDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccShiftAndScaleCloudDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccShiftAndScaleCloudDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccShiftAndScaleCloudDlg.stringdata0))
        return static_cast<void*>(const_cast< ccShiftAndScaleCloudDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccShiftAndScaleCloudDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
