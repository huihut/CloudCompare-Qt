/****************************************************************************
** Meta object code from reading C++ file 'ccColorScaleEditorDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccColorScaleEditorDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccColorScaleEditorDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccColorScaleEditorDialog_t {
    QByteArrayData data[20];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccColorScaleEditorDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccColorScaleEditorDialog_t qt_meta_stringdata_ccColorScaleEditorDialog = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ccColorScaleEditorDialog"
QT_MOC_LITERAL(1, 25, 17), // "colorScaleChanged"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 19), // "relativeModeChanged"
QT_MOC_LITERAL(4, 64, 14), // "onStepSelected"
QT_MOC_LITERAL(5, 79, 14), // "onStepModified"
QT_MOC_LITERAL(6, 94, 19), // "deletecSelectedStep"
QT_MOC_LITERAL(7, 114, 23), // "changeSelectedStepColor"
QT_MOC_LITERAL(8, 138, 23), // "changeSelectedStepValue"
QT_MOC_LITERAL(9, 162, 25), // "onCustomLabelsListChanged"
QT_MOC_LITERAL(10, 188, 22), // "toggleCustomLabelsList"
QT_MOC_LITERAL(11, 211, 16), // "copyCurrentScale"
QT_MOC_LITERAL(12, 228, 16), // "saveCurrentScale"
QT_MOC_LITERAL(13, 245, 18), // "deleteCurrentScale"
QT_MOC_LITERAL(14, 264, 18), // "renameCurrentScale"
QT_MOC_LITERAL(15, 283, 18), // "exportCurrentScale"
QT_MOC_LITERAL(16, 302, 11), // "importScale"
QT_MOC_LITERAL(17, 314, 14), // "createNewScale"
QT_MOC_LITERAL(18, 329, 7), // "onApply"
QT_MOC_LITERAL(19, 337, 7) // "onClose"

    },
    "ccColorScaleEditorDialog\0colorScaleChanged\0"
    "\0relativeModeChanged\0onStepSelected\0"
    "onStepModified\0deletecSelectedStep\0"
    "changeSelectedStepColor\0changeSelectedStepValue\0"
    "onCustomLabelsListChanged\0"
    "toggleCustomLabelsList\0copyCurrentScale\0"
    "saveCurrentScale\0deleteCurrentScale\0"
    "renameCurrentScale\0exportCurrentScale\0"
    "importScale\0createNewScale\0onApply\0"
    "onClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccColorScaleEditorDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x09 /* Protected */,
       3,    1,  107,    2, 0x09 /* Protected */,
       4,    1,  110,    2, 0x09 /* Protected */,
       5,    1,  113,    2, 0x09 /* Protected */,
       6,    0,  116,    2, 0x09 /* Protected */,
       7,    0,  117,    2, 0x09 /* Protected */,
       8,    1,  118,    2, 0x09 /* Protected */,
       9,    0,  121,    2, 0x09 /* Protected */,
      10,    1,  122,    2, 0x09 /* Protected */,
      11,    0,  125,    2, 0x09 /* Protected */,
      12,    0,  126,    2, 0x09 /* Protected */,
      13,    0,  127,    2, 0x09 /* Protected */,
      14,    0,  128,    2, 0x09 /* Protected */,
      15,    0,  129,    2, 0x09 /* Protected */,
      16,    0,  130,    2, 0x09 /* Protected */,
      17,    0,  131,    2, 0x09 /* Protected */,
      18,    0,  132,    2, 0x09 /* Protected */,
      19,    0,  133,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ccColorScaleEditorDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccColorScaleEditorDialog *_t = static_cast<ccColorScaleEditorDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->colorScaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->relativeModeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onStepSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onStepModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->deletecSelectedStep(); break;
        case 5: _t->changeSelectedStepColor(); break;
        case 6: _t->changeSelectedStepValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->onCustomLabelsListChanged(); break;
        case 8: _t->toggleCustomLabelsList((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->copyCurrentScale(); break;
        case 10: { bool _r = _t->saveCurrentScale();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 11: _t->deleteCurrentScale(); break;
        case 12: _t->renameCurrentScale(); break;
        case 13: _t->exportCurrentScale(); break;
        case 14: _t->importScale(); break;
        case 15: _t->createNewScale(); break;
        case 16: _t->onApply(); break;
        case 17: _t->onClose(); break;
        default: ;
        }
    }
}

const QMetaObject ccColorScaleEditorDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccColorScaleEditorDialog.data,
      qt_meta_data_ccColorScaleEditorDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccColorScaleEditorDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccColorScaleEditorDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccColorScaleEditorDialog.stringdata0))
        return static_cast<void*>(const_cast< ccColorScaleEditorDialog*>(this));
    if (!strcmp(_clname, "Ui::ColorScaleEditorDlg"))
        return static_cast< Ui::ColorScaleEditorDlg*>(const_cast< ccColorScaleEditorDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccColorScaleEditorDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
