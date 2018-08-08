/****************************************************************************
** Meta object code from reading C++ file 'ccVolumeCalcTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccVolumeCalcTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccVolumeCalcTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccVolumeCalcTool_t {
    QByteArrayData data[18];
    char stringdata0[350];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccVolumeCalcTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccVolumeCalcTool_t qt_meta_stringdata_ccVolumeCalcTool = {
    {
QT_MOC_LITERAL(0, 0, 16), // "ccVolumeCalcTool"
QT_MOC_LITERAL(1, 17, 21), // "saveSettingsAndAccept"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 12), // "saveSettings"
QT_MOC_LITERAL(4, 53, 20), // "projectionDirChanged"
QT_MOC_LITERAL(5, 74, 23), // "sfProjectionTypeChanged"
QT_MOC_LITERAL(6, 98, 17), // "showGridBoxEditor"
QT_MOC_LITERAL(7, 116, 34), // "groundFillEmptyCellStrategyCh..."
QT_MOC_LITERAL(8, 151, 32), // "ceilFillEmptyCellStrategyChanged"
QT_MOC_LITERAL(9, 184, 17), // "gridOptionChanged"
QT_MOC_LITERAL(10, 202, 14), // "updateGridInfo"
QT_MOC_LITERAL(11, 217, 20), // "updateGridAndDisplay"
QT_MOC_LITERAL(12, 238, 9), // "swapRoles"
QT_MOC_LITERAL(13, 248, 19), // "groundSourceChanged"
QT_MOC_LITERAL(14, 268, 17), // "ceilSourceChanged"
QT_MOC_LITERAL(15, 286, 17), // "exportToClipboard"
QT_MOC_LITERAL(16, 304, 17), // "exportGridAsCloud"
QT_MOC_LITERAL(17, 322, 27) // "setDisplayedNumberPrecision"

    },
    "ccVolumeCalcTool\0saveSettingsAndAccept\0"
    "\0saveSettings\0projectionDirChanged\0"
    "sfProjectionTypeChanged\0showGridBoxEditor\0"
    "groundFillEmptyCellStrategyChanged\0"
    "ceilFillEmptyCellStrategyChanged\0"
    "gridOptionChanged\0updateGridInfo\0"
    "updateGridAndDisplay\0swapRoles\0"
    "groundSourceChanged\0ceilSourceChanged\0"
    "exportToClipboard\0exportGridAsCloud\0"
    "setDisplayedNumberPrecision"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccVolumeCalcTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x09 /* Protected */,
       3,    0,   95,    2, 0x09 /* Protected */,
       4,    1,   96,    2, 0x09 /* Protected */,
       5,    1,   99,    2, 0x09 /* Protected */,
       6,    0,  102,    2, 0x09 /* Protected */,
       7,    1,  103,    2, 0x09 /* Protected */,
       8,    1,  106,    2, 0x09 /* Protected */,
       9,    0,  109,    2, 0x09 /* Protected */,
      10,    0,  110,    2, 0x09 /* Protected */,
      11,    0,  111,    2, 0x09 /* Protected */,
      12,    0,  112,    2, 0x09 /* Protected */,
      13,    1,  113,    2, 0x09 /* Protected */,
      14,    1,  116,    2, 0x09 /* Protected */,
      15,    0,  119,    2, 0x09 /* Protected */,
      16,    0,  120,    2, 0x09 /* Protected */,
      17,    1,  121,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ccVolumeCalcTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccVolumeCalcTool *_t = static_cast<ccVolumeCalcTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saveSettingsAndAccept(); break;
        case 1: _t->saveSettings(); break;
        case 2: _t->projectionDirChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->sfProjectionTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: { bool _r = _t->showGridBoxEditor();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 5: _t->groundFillEmptyCellStrategyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->ceilFillEmptyCellStrategyChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->gridOptionChanged(); break;
        case 8: _t->updateGridInfo(); break;
        case 9: _t->updateGridAndDisplay(); break;
        case 10: _t->swapRoles(); break;
        case 11: _t->groundSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->ceilSourceChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->exportToClipboard(); break;
        case 14: _t->exportGridAsCloud(); break;
        case 15: _t->setDisplayedNumberPrecision((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ccVolumeCalcTool::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccVolumeCalcTool.data,
      qt_meta_data_ccVolumeCalcTool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccVolumeCalcTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccVolumeCalcTool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccVolumeCalcTool.stringdata0))
        return static_cast<void*>(const_cast< ccVolumeCalcTool*>(this));
    if (!strcmp(_clname, "cc2Point5DimEditor"))
        return static_cast< cc2Point5DimEditor*>(const_cast< ccVolumeCalcTool*>(this));
    if (!strcmp(_clname, "Ui::VolumeCalcDialog"))
        return static_cast< Ui::VolumeCalcDialog*>(const_cast< ccVolumeCalcTool*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccVolumeCalcTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
