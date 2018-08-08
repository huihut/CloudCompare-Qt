/****************************************************************************
** Meta object code from reading C++ file 'ccColorScaleEditorWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ccColorScaleEditorWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ccColorScaleEditorWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ColorBarWidget_t {
    QByteArrayData data[4];
    char stringdata0[41];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ColorBarWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ColorBarWidget_t qt_meta_stringdata_ColorBarWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ColorBarWidget"
QT_MOC_LITERAL(1, 15, 12), // "pointClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 11) // "relativePos"

    },
    "ColorBarWidget\0pointClicked\0\0relativePos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ColorBarWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void ColorBarWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ColorBarWidget *_t = static_cast<ColorBarWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointClicked((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ColorBarWidget::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ColorBarWidget::pointClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ColorBarWidget::staticMetaObject = {
    { &ColorScaleEditorBaseWidget::staticMetaObject, qt_meta_stringdata_ColorBarWidget.data,
      qt_meta_data_ColorBarWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ColorBarWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ColorBarWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ColorBarWidget.stringdata0))
        return static_cast<void*>(const_cast< ColorBarWidget*>(this));
    return ColorScaleEditorBaseWidget::qt_metacast(_clname);
}

int ColorBarWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorScaleEditorBaseWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void ColorBarWidget::pointClicked(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_SlidersWidget_t {
    QByteArrayData data[5];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SlidersWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SlidersWidget_t qt_meta_stringdata_SlidersWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SlidersWidget"
QT_MOC_LITERAL(1, 14, 14), // "sliderModified"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "index"
QT_MOC_LITERAL(4, 36, 14) // "sliderSelected"

    },
    "SlidersWidget\0sliderModified\0\0index\0"
    "sliderSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SlidersWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    1,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void SlidersWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SlidersWidget *_t = static_cast<SlidersWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->sliderSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SlidersWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlidersWidget::sliderModified)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SlidersWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SlidersWidget::sliderSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject SlidersWidget::staticMetaObject = {
    { &ColorScaleEditorBaseWidget::staticMetaObject, qt_meta_stringdata_SlidersWidget.data,
      qt_meta_data_SlidersWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SlidersWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SlidersWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SlidersWidget.stringdata0))
        return static_cast<void*>(const_cast< SlidersWidget*>(this));
    return ColorScaleEditorBaseWidget::qt_metacast(_clname);
}

int SlidersWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorScaleEditorBaseWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void SlidersWidget::sliderModified(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SlidersWidget::sliderSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_ccColorScaleEditorWidget_t {
    QByteArrayData data[10];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ccColorScaleEditorWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ccColorScaleEditorWidget_t qt_meta_stringdata_ccColorScaleEditorWidget = {
    {
QT_MOC_LITERAL(0, 0, 24), // "ccColorScaleEditorWidget"
QT_MOC_LITERAL(1, 25, 12), // "stepSelected"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 5), // "index"
QT_MOC_LITERAL(4, 45, 12), // "stepModified"
QT_MOC_LITERAL(5, 58, 14), // "onPointClicked"
QT_MOC_LITERAL(6, 73, 11), // "relativePos"
QT_MOC_LITERAL(7, 85, 16), // "onSliderModified"
QT_MOC_LITERAL(8, 102, 11), // "sliderIndex"
QT_MOC_LITERAL(9, 114, 16) // "onSliderSelected"

    },
    "ccColorScaleEditorWidget\0stepSelected\0"
    "\0index\0stepModified\0onPointClicked\0"
    "relativePos\0onSliderModified\0sliderIndex\0"
    "onSliderSelected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ccColorScaleEditorWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   45,    2, 0x09 /* Protected */,
       7,    1,   48,    2, 0x09 /* Protected */,
       9,    1,   51,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void ccColorScaleEditorWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ccColorScaleEditorWidget *_t = static_cast<ccColorScaleEditorWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stepSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->stepModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onPointClicked((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->onSliderModified((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->onSliderSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ccColorScaleEditorWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccColorScaleEditorWidget::stepSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (ccColorScaleEditorWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ccColorScaleEditorWidget::stepModified)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ccColorScaleEditorWidget::staticMetaObject = {
    { &ColorScaleEditorBaseWidget::staticMetaObject, qt_meta_stringdata_ccColorScaleEditorWidget.data,
      qt_meta_data_ccColorScaleEditorWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ccColorScaleEditorWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ccColorScaleEditorWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ccColorScaleEditorWidget.stringdata0))
        return static_cast<void*>(const_cast< ccColorScaleEditorWidget*>(this));
    return ColorScaleEditorBaseWidget::qt_metacast(_clname);
}

int ccColorScaleEditorWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ColorScaleEditorBaseWidget::qt_metacall(_c, _id, _a);
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
void ccColorScaleEditorWidget::stepSelected(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ccColorScaleEditorWidget::stepModified(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
