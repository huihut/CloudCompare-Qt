/****************************************************************************
** Meta object code from reading C++ file 'ccAlignDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccAlignDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccAlignDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccAlignDlg_t {
    QByteArrayData data[13];
    char stringdata0[192];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccAlignDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccAlignDlg_t qt_meta_stringdata_ccAlignDlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "ccAlignDlg"
QT_MOC_LITERAL(1, 11, 16), // "swapModelAndData"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "modelSliderReleased"
QT_MOC_LITERAL(4, 49, 18), // "dataSliderReleased"
QT_MOC_LITERAL(5, 68, 24), // "modelSamplingRateChanged"
QT_MOC_LITERAL(6, 93, 5), // "value"
QT_MOC_LITERAL(7, 99, 23), // "dataSamplingRateChanged"
QT_MOC_LITERAL(8, 123, 13), // "estimateDelta"
QT_MOC_LITERAL(9, 137, 20), // "changeSamplingMethod"
QT_MOC_LITERAL(10, 158, 5), // "index"
QT_MOC_LITERAL(11, 164, 21), // "toggleNbMaxCandidates"
QT_MOC_LITERAL(12, 186, 5) // "activ"

    },
    "ccAlignDlg\0swapModelAndData\0\0"
    "modelSliderReleased\0dataSliderReleased\0"
    "modelSamplingRateChanged\0value\0"
    "dataSamplingRateChanged\0estimateDelta\0"
    "changeSamplingMethod\0index\0"
    "toggleNbMaxCandidates\0activ"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccAlignDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x09 /* Protected */,
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    1,   57,    2, 0x09 /* Protected */,
       7,    1,   60,    2, 0x09 /* Protected */,
       8,    0,   63,    2, 0x09 /* Protected */,
       9,    1,   64,    2, 0x09 /* Protected */,
      11,    1,   67,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void ccAlignDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccAlignDlg *_t = static_cast<ccAlignDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->swapModelAndData(); break;
        case 1: _t->modelSliderReleased(); break;
        case 2: _t->dataSliderReleased(); break;
        case 3: _t->modelSamplingRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->dataSamplingRateChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->estimateDelta(); break;
        case 6: _t->changeSamplingMethod((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->toggleNbMaxCandidates((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ccAlignDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccAlignDlg.data,
      qt_meta_data_ccAlignDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccAlignDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccAlignDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccAlignDlg.stringdata0))
        return static_cast<void*>(const_cast< ccAlignDlg*>(this));
    if (!strcmp(_clname, "Ui::AlignDialog"))
        return static_cast< Ui::AlignDialog*>(const_cast< ccAlignDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccAlignDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
