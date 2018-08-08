/****************************************************************************
** Meta object code from reading C++ file 'ccGraphicalTransformationTool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccGraphicalTransformationTool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccGraphicalTransformationTool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccGraphicalTransformationTool_t {
    QByteArrayData data[11];
    char stringdata0[120];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccGraphicalTransformationTool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccGraphicalTransformationTool_t qt_meta_stringdata_ccGraphicalTransformationTool = {
    {
QT_MOC_LITERAL(0, 0, 29), // "ccGraphicalTransformationTool"
QT_MOC_LITERAL(1, 30, 5), // "apply"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 5), // "reset"
QT_MOC_LITERAL(4, 43, 6), // "cancel"
QT_MOC_LITERAL(5, 50, 5), // "pause"
QT_MOC_LITERAL(6, 56, 11), // "glTranslate"
QT_MOC_LITERAL(7, 68, 10), // "CCVector3d"
QT_MOC_LITERAL(8, 79, 8), // "glRotate"
QT_MOC_LITERAL(9, 88, 11), // "ccGLMatrixd"
QT_MOC_LITERAL(10, 100, 19) // "onShortcutTriggered"

    },
    "ccGraphicalTransformationTool\0apply\0"
    "\0reset\0cancel\0pause\0glTranslate\0"
    "CCVector3d\0glRotate\0ccGLMatrixd\0"
    "onShortcutTriggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccGraphicalTransformationTool[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x09 /* Protected */,
       3,    0,   50,    2, 0x09 /* Protected */,
       4,    0,   51,    2, 0x09 /* Protected */,
       5,    1,   52,    2, 0x09 /* Protected */,
       6,    1,   55,    2, 0x09 /* Protected */,
       8,    1,   58,    2, 0x09 /* Protected */,
      10,    1,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void ccGraphicalTransformationTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccGraphicalTransformationTool *_t = static_cast<ccGraphicalTransformationTool *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->apply(); break;
        case 1: _t->reset(); break;
        case 2: _t->cancel(); break;
        case 3: _t->pause((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->glTranslate((*reinterpret_cast< const CCVector3d(*)>(_a[1]))); break;
        case 5: _t->glRotate((*reinterpret_cast< const ccGLMatrixd(*)>(_a[1]))); break;
        case 6: _t->onShortcutTriggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject ccGraphicalTransformationTool::staticMetaObject = {
    { &ccOverlayDialog::staticMetaObject, qt_meta_stringdata_ccGraphicalTransformationTool.data,
      qt_meta_data_ccGraphicalTransformationTool,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccGraphicalTransformationTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccGraphicalTransformationTool::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccGraphicalTransformationTool.stringdata0))
        return static_cast<void*>(const_cast< ccGraphicalTransformationTool*>(this));
    if (!strcmp(_clname, "Ui::GraphicalTransformationDlg"))
        return static_cast< Ui::GraphicalTransformationDlg*>(const_cast< ccGraphicalTransformationTool*>(this));
    return ccOverlayDialog::qt_metacast(_clname);
}

int ccGraphicalTransformationTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ccOverlayDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
