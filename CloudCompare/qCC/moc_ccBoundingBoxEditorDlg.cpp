/****************************************************************************
** Meta object code from reading C++ file 'ccBoundingBoxEditorDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccBoundingBoxEditorDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccBoundingBoxEditorDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccBoundingBoxEditorDlg_t {
    QByteArrayData data[15];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccBoundingBoxEditorDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccBoundingBoxEditorDlg_t qt_meta_stringdata_ccBoundingBoxEditorDlg = {
    {
QT_MOC_LITERAL(0, 0, 22), // "ccBoundingBoxEditorDlg"
QT_MOC_LITERAL(1, 23, 4), // "exec"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "squareModeActivated"
QT_MOC_LITERAL(4, 49, 14), // "resetToDefault"
QT_MOC_LITERAL(5, 64, 11), // "resetToLast"
QT_MOC_LITERAL(6, 76, 6), // "cancel"
QT_MOC_LITERAL(7, 83, 16), // "saveBoxAndAccept"
QT_MOC_LITERAL(8, 100, 12), // "updateXWidth"
QT_MOC_LITERAL(9, 113, 12), // "updateYWidth"
QT_MOC_LITERAL(10, 126, 12), // "updateZWidth"
QT_MOC_LITERAL(11, 139, 17), // "updateCurrentBBox"
QT_MOC_LITERAL(12, 157, 5), // "dummy"
QT_MOC_LITERAL(13, 163, 14), // "reflectChanges"
QT_MOC_LITERAL(14, 178, 18) // "onAxisValueChanged"

    },
    "ccBoundingBoxEditorDlg\0exec\0\0"
    "squareModeActivated\0resetToDefault\0"
    "resetToLast\0cancel\0saveBoxAndAccept\0"
    "updateXWidth\0updateYWidth\0updateZWidth\0"
    "updateCurrentBBox\0dummy\0reflectChanges\0"
    "onAxisValueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccBoundingBoxEditorDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x0a /* Public */,
       3,    1,   85,    2, 0x09 /* Protected */,
       4,    0,   88,    2, 0x09 /* Protected */,
       5,    0,   89,    2, 0x09 /* Protected */,
       6,    0,   90,    2, 0x09 /* Protected */,
       7,    0,   91,    2, 0x09 /* Protected */,
       8,    1,   92,    2, 0x09 /* Protected */,
       9,    1,   95,    2, 0x09 /* Protected */,
      10,    1,   98,    2, 0x09 /* Protected */,
      11,    1,  101,    2, 0x09 /* Protected */,
      11,    0,  104,    2, 0x29 /* Protected | MethodCloned */,
      13,    1,  105,    2, 0x09 /* Protected */,
      13,    0,  108,    2, 0x29 /* Protected | MethodCloned */,
      14,    1,  109,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void ccBoundingBoxEditorDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccBoundingBoxEditorDlg *_t = static_cast<ccBoundingBoxEditorDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->exec();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->squareModeActivated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->resetToDefault(); break;
        case 3: _t->resetToLast(); break;
        case 4: _t->cancel(); break;
        case 5: _t->saveBoxAndAccept(); break;
        case 6: _t->updateXWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->updateYWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->updateZWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->updateCurrentBBox((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->updateCurrentBBox(); break;
        case 11: _t->reflectChanges((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->reflectChanges(); break;
        case 13: _t->onAxisValueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ccBoundingBoxEditorDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccBoundingBoxEditorDlg.data,
      qt_meta_data_ccBoundingBoxEditorDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccBoundingBoxEditorDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccBoundingBoxEditorDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccBoundingBoxEditorDlg.stringdata0))
        return static_cast<void*>(const_cast< ccBoundingBoxEditorDlg*>(this));
    if (!strcmp(_clname, "Ui::BoundingBoxEditorDialog"))
        return static_cast< Ui::BoundingBoxEditorDialog*>(const_cast< ccBoundingBoxEditorDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccBoundingBoxEditorDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
