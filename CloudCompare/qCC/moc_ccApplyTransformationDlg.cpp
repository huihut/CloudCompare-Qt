/****************************************************************************
** Meta object code from reading C++ file 'ccApplyTransformationDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccApplyTransformationDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccApplyTransformationDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccApplyTransformationDlg_t {
    QByteArrayData data[8];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccApplyTransformationDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccApplyTransformationDlg_t qt_meta_stringdata_ccApplyTransformationDlg = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ccApplyTransformationDlg"
QT_MOC_LITERAL(1, 25, 28), // "checkMatrixValidityAndAccept"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 18), // "onMatrixTextChange"
QT_MOC_LITERAL(4, 74, 22), // "onRotAngleValueChanged"
QT_MOC_LITERAL(5, 97, 19), // "onEulerValueChanged"
QT_MOC_LITERAL(6, 117, 17), // "loadFromASCIIFile"
QT_MOC_LITERAL(7, 135, 17) // "loadFromClipboard"

    },
    "ccApplyTransformationDlg\0"
    "checkMatrixValidityAndAccept\0\0"
    "onMatrixTextChange\0onRotAngleValueChanged\0"
    "onEulerValueChanged\0loadFromASCIIFile\0"
    "loadFromClipboard"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccApplyTransformationDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    1,   46,    2, 0x09 /* Protected */,
       5,    1,   49,    2, 0x09 /* Protected */,
       6,    0,   52,    2, 0x09 /* Protected */,
       7,    0,   53,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ccApplyTransformationDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccApplyTransformationDlg *_t = static_cast<ccApplyTransformationDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->checkMatrixValidityAndAccept(); break;
        case 1: _t->onMatrixTextChange(); break;
        case 2: _t->onRotAngleValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onEulerValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->loadFromASCIIFile(); break;
        case 5: _t->loadFromClipboard(); break;
        default: ;
        }
    }
}

const QMetaObject ccApplyTransformationDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccApplyTransformationDlg.data,
      qt_meta_data_ccApplyTransformationDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccApplyTransformationDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccApplyTransformationDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccApplyTransformationDlg.stringdata0))
        return static_cast<void*>(const_cast< ccApplyTransformationDlg*>(this));
    if (!strcmp(_clname, "Ui::ApplyTransformationDialog"))
        return static_cast< Ui::ApplyTransformationDialog*>(const_cast< ccApplyTransformationDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccApplyTransformationDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
