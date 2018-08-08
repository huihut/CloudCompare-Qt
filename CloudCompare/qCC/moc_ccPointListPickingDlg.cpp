/****************************************************************************
** Meta object code from reading C++ file 'ccPointListPickingDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccPointListPickingDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccPointListPickingDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccPointListPickingDlg_t {
    QByteArrayData data[13];
    char stringdata0[206];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccPointListPickingDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccPointListPickingDlg_t qt_meta_stringdata_ccPointListPickingDlg = {
    {
QT_MOC_LITERAL(0, 0, 21), // "ccPointListPickingDlg"
QT_MOC_LITERAL(1, 22, 12), // "applyAndExit"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 13), // "cancelAndExit"
QT_MOC_LITERAL(4, 50, 16), // "exportToNewCloud"
QT_MOC_LITERAL(5, 67, 19), // "exportToNewPolyline"
QT_MOC_LITERAL(6, 87, 15), // "removeLastEntry"
QT_MOC_LITERAL(7, 103, 17), // "exportToASCII_xyz"
QT_MOC_LITERAL(8, 121, 18), // "exportToASCII_ixyz"
QT_MOC_LITERAL(9, 140, 18), // "exportToASCII_lxyz"
QT_MOC_LITERAL(10, 159, 17), // "markerSizeChanged"
QT_MOC_LITERAL(11, 177, 17), // "startIndexChanged"
QT_MOC_LITERAL(12, 195, 10) // "updateList"

    },
    "ccPointListPickingDlg\0applyAndExit\0\0"
    "cancelAndExit\0exportToNewCloud\0"
    "exportToNewPolyline\0removeLastEntry\0"
    "exportToASCII_xyz\0exportToASCII_ixyz\0"
    "exportToASCII_lxyz\0markerSizeChanged\0"
    "startIndexChanged\0updateList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccPointListPickingDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    0,   71,    2, 0x09 /* Protected */,
       5,    0,   72,    2, 0x09 /* Protected */,
       6,    0,   73,    2, 0x09 /* Protected */,
       7,    0,   74,    2, 0x09 /* Protected */,
       8,    0,   75,    2, 0x09 /* Protected */,
       9,    0,   76,    2, 0x09 /* Protected */,
      10,    1,   77,    2, 0x09 /* Protected */,
      11,    1,   80,    2, 0x09 /* Protected */,
      12,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void ccPointListPickingDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccPointListPickingDlg *_t = static_cast<ccPointListPickingDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->applyAndExit(); break;
        case 1: _t->cancelAndExit(); break;
        case 2: _t->exportToNewCloud(); break;
        case 3: _t->exportToNewPolyline(); break;
        case 4: _t->removeLastEntry(); break;
        case 5: _t->exportToASCII_xyz(); break;
        case 6: _t->exportToASCII_ixyz(); break;
        case 7: _t->exportToASCII_lxyz(); break;
        case 8: _t->markerSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->startIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->updateList(); break;
        default: ;
        }
    }
}

const QMetaObject ccPointListPickingDlg::staticMetaObject = {
    { &ccPointPickingGenericInterface::staticMetaObject, qt_meta_stringdata_ccPointListPickingDlg.data,
      qt_meta_data_ccPointListPickingDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccPointListPickingDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccPointListPickingDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccPointListPickingDlg.stringdata0))
        return static_cast<void*>(const_cast< ccPointListPickingDlg*>(this));
    if (!strcmp(_clname, "Ui::PointListPickingDlg"))
        return static_cast< Ui::PointListPickingDlg*>(const_cast< ccPointListPickingDlg*>(this));
    return ccPointPickingGenericInterface::qt_metacast(_clname);
}

int ccPointListPickingDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
