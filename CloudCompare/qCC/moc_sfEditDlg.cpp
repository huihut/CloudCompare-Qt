/****************************************************************************
** Meta object code from reading C++ file 'sfEditDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "db_tree/sfEditDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sfEditDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_sfEditDlg_t {
    QByteArrayData data[15];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sfEditDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sfEditDlg_t qt_meta_stringdata_sfEditDlg = {
    {
QT_MOC_LITERAL(0, 0, 9), // "sfEditDlg"
QT_MOC_LITERAL(1, 10, 18), // "entitySFHasChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "minValSBChanged"
QT_MOC_LITERAL(4, 46, 15), // "maxValSBChanged"
QT_MOC_LITERAL(5, 62, 15), // "minSatSBChanged"
QT_MOC_LITERAL(6, 78, 15), // "maxSatSBChanged"
QT_MOC_LITERAL(7, 94, 18), // "minValHistoChanged"
QT_MOC_LITERAL(8, 113, 18), // "maxValHistoChanged"
QT_MOC_LITERAL(9, 132, 18), // "minSatHistoChanged"
QT_MOC_LITERAL(10, 151, 18), // "maxSatHistoChanged"
QT_MOC_LITERAL(11, 170, 16), // "nanInGrayChanged"
QT_MOC_LITERAL(12, 187, 18), // "alwaysShow0Changed"
QT_MOC_LITERAL(13, 206, 23), // "symmetricalScaleChanged"
QT_MOC_LITERAL(14, 230, 15) // "logScaleChanged"

    },
    "sfEditDlg\0entitySFHasChanged\0\0"
    "minValSBChanged\0maxValSBChanged\0"
    "minSatSBChanged\0maxSatSBChanged\0"
    "minValHistoChanged\0maxValHistoChanged\0"
    "minSatHistoChanged\0maxSatHistoChanged\0"
    "nanInGrayChanged\0alwaysShow0Changed\0"
    "symmetricalScaleChanged\0logScaleChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sfEditDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   80,    2, 0x0a /* Public */,
       4,    1,   83,    2, 0x0a /* Public */,
       5,    1,   86,    2, 0x0a /* Public */,
       6,    1,   89,    2, 0x0a /* Public */,
       7,    1,   92,    2, 0x0a /* Public */,
       8,    1,   95,    2, 0x0a /* Public */,
       9,    1,   98,    2, 0x0a /* Public */,
      10,    1,  101,    2, 0x0a /* Public */,
      11,    1,  104,    2, 0x0a /* Public */,
      12,    1,  107,    2, 0x0a /* Public */,
      13,    1,  110,    2, 0x0a /* Public */,
      14,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void sfEditDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sfEditDlg *_t = static_cast<sfEditDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->entitySFHasChanged(); break;
        case 1: _t->minValSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->maxValSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->minSatSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->maxSatSBChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->minValHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->maxValHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->minSatHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->maxSatHistoChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->nanInGrayChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->alwaysShow0Changed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->symmetricalScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->logScaleChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sfEditDlg::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sfEditDlg::entitySFHasChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject sfEditDlg::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_sfEditDlg.data,
      qt_meta_data_sfEditDlg,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sfEditDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sfEditDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sfEditDlg.stringdata0))
        return static_cast<void*>(const_cast< sfEditDlg*>(this));
    if (!strcmp(_clname, "Ui::SFEditDlg"))
        return static_cast< Ui::SFEditDlg*>(const_cast< sfEditDlg*>(this));
    return QWidget::qt_metacast(_clname);
}

int sfEditDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void sfEditDlg::entitySFHasChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
