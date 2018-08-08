/****************************************************************************
** Meta object code from reading C++ file 'ccHistogramWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccHistogramWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccHistogramWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ccHistogramWindow_t {
    QByteArrayData data[6];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccHistogramWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccHistogramWindow_t qt_meta_stringdata_ccHistogramWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ccHistogramWindow"
QT_MOC_LITERAL(1, 18, 19), // "sfMinDispValChanged"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 19), // "sfMaxDispValChanged"
QT_MOC_LITERAL(4, 59, 18), // "sfMinSatValChanged"
QT_MOC_LITERAL(5, 78, 18) // "sfMaxSatValChanged"

    },
    "ccHistogramWindow\0sfMinDispValChanged\0"
    "\0sfMaxDispValChanged\0sfMinSatValChanged\0"
    "sfMaxSatValChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccHistogramWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       3,    1,   37,    2, 0x06 /* Public */,
       4,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void ccHistogramWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccHistogramWindow *_t = static_cast<ccHistogramWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sfMinDispValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->sfMaxDispValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->sfMinSatValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->sfMaxSatValChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccHistogramWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccHistogramWindow::sfMinDispValChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ccHistogramWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccHistogramWindow::sfMaxDispValChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (ccHistogramWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccHistogramWindow::sfMinSatValChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (ccHistogramWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccHistogramWindow::sfMaxSatValChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject ccHistogramWindow::staticMetaObject = {
    { &QCustomPlot::staticMetaObject, qt_meta_stringdata_ccHistogramWindow.data,
      qt_meta_data_ccHistogramWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccHistogramWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccHistogramWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccHistogramWindow.stringdata0))
        return static_cast<void*>(const_cast< ccHistogramWindow*>(this));
    return QCustomPlot::qt_metacast(_clname);
}

int ccHistogramWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QCustomPlot::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void ccHistogramWindow::sfMinDispValChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccHistogramWindow::sfMaxDispValChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ccHistogramWindow::sfMinSatValChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void ccHistogramWindow::sfMaxSatValChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_ccHistogramWindowDlg_t {
    QByteArrayData data[4];
    char stringdata0[52];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccHistogramWindowDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccHistogramWindowDlg_t qt_meta_stringdata_ccHistogramWindowDlg = {
    {
QT_MOC_LITERAL(0, 0, 20), // "ccHistogramWindowDlg"
QT_MOC_LITERAL(1, 21, 13), // "onExportToCSV"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 15) // "onExportToImage"

    },
    "ccHistogramWindowDlg\0onExportToCSV\0\0"
    "onExportToImage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccHistogramWindowDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x09 /* Protected */,
       3,    0,   25,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ccHistogramWindowDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccHistogramWindowDlg *_t = static_cast<ccHistogramWindowDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onExportToCSV(); break;
        case 1: _t->onExportToImage(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ccHistogramWindowDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_ccHistogramWindowDlg.data,
      qt_meta_data_ccHistogramWindowDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccHistogramWindowDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccHistogramWindowDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccHistogramWindowDlg.stringdata0))
        return static_cast<void*>(const_cast< ccHistogramWindowDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int ccHistogramWindowDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
