/****************************************************************************
** Meta object code from reading C++ file 'BundlerImportDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../InnerEyes_temp/CloudCompare/libs/qCC_io/BundlerImportDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BundlerImportDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BundlerImportDlg_t {
    QByteArrayData data[5];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BundlerImportDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BundlerImportDlg_t qt_meta_stringdata_BundlerImportDlg = {
    {
QT_MOC_LITERAL(0, 0, 16), // "BundlerImportDlg"
QT_MOC_LITERAL(1, 17, 23), // "browseImageListFilename"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 26), // "browseAltKeypointsFilename"
QT_MOC_LITERAL(4, 69, 21) // "acceptAndSaveSettings"

    },
    "BundlerImportDlg\0browseImageListFilename\0"
    "\0browseAltKeypointsFilename\0"
    "acceptAndSaveSettings"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BundlerImportDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x09 /* Protected */,
       3,    0,   30,    2, 0x09 /* Protected */,
       4,    0,   31,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BundlerImportDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BundlerImportDlg *_t = static_cast<BundlerImportDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->browseImageListFilename(); break;
        case 1: _t->browseAltKeypointsFilename(); break;
        case 2: _t->acceptAndSaveSettings(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject BundlerImportDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_BundlerImportDlg.data,
      qt_meta_data_BundlerImportDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BundlerImportDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BundlerImportDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BundlerImportDlg.stringdata0))
        return static_cast<void*>(const_cast< BundlerImportDlg*>(this));
    if (!strcmp(_clname, "Ui::BundlerImportDlg"))
        return static_cast< Ui::BundlerImportDlg*>(const_cast< BundlerImportDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int BundlerImportDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
