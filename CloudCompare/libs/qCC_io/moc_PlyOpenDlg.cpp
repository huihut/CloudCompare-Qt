/****************************************************************************
** Meta object code from reading C++ file 'PlyOpenDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../InnerEyes_temp/CloudCompare/libs/qCC_io/PlyOpenDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PlyOpenDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlyOpenDlg_t {
    QByteArrayData data[7];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlyOpenDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlyOpenDlg_t qt_meta_stringdata_PlyOpenDlg = {
    {
QT_MOC_LITERAL(0, 0, 10), // "PlyOpenDlg"
QT_MOC_LITERAL(1, 11, 13), // "fullyAccepted"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "addSFComboBox"
QT_MOC_LITERAL(4, 40, 13), // "selectedIndex"
QT_MOC_LITERAL(5, 54, 5), // "apply"
QT_MOC_LITERAL(6, 60, 8) // "applyAll"

    },
    "PlyOpenDlg\0fullyAccepted\0\0addSFComboBox\0"
    "selectedIndex\0apply\0applyAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlyOpenDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   40,    2, 0x0a /* Public */,
       3,    0,   43,    2, 0x2a /* Public | MethodCloned */,
       5,    0,   44,    2, 0x09 /* Protected */,
       6,    0,   45,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlyOpenDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlyOpenDlg *_t = static_cast<PlyOpenDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fullyAccepted(); break;
        case 1: _t->addSFComboBox((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->addSFComboBox(); break;
        case 3: _t->apply(); break;
        case 4: _t->applyAll(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (PlyOpenDlg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&PlyOpenDlg::fullyAccepted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject PlyOpenDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PlyOpenDlg.data,
      qt_meta_data_PlyOpenDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *PlyOpenDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlyOpenDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_PlyOpenDlg.stringdata0))
        return static_cast<void*>(const_cast< PlyOpenDlg*>(this));
    if (!strcmp(_clname, "Ui::PlyOpenDlg"))
        return static_cast< Ui::PlyOpenDlg*>(const_cast< PlyOpenDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int PlyOpenDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void PlyOpenDlg::fullyAccepted()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
