/****************************************************************************
** Meta object code from reading C++ file 'diphw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../diphw.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'diphw.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_diphw_t {
    QByteArrayData data[12];
    char stringdata0[235];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_diphw_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_diphw_t qt_meta_stringdata_diphw = {
    {
QT_MOC_LITERAL(0, 0, 5), // "diphw"
QT_MOC_LITERAL(1, 6, 21), // "on_openButton_clicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 21), // "on_exitButton_clicked"
QT_MOC_LITERAL(4, 51, 25), // "on_closeImgButton_clicked"
QT_MOC_LITERAL(5, 77, 21), // "on_trapButton_clicked"
QT_MOC_LITERAL(6, 99, 26), // "on_highSlider_valueChanged"
QT_MOC_LITERAL(7, 126, 5), // "value"
QT_MOC_LITERAL(8, 132, 27), // "on_widthSlider_valueChanged"
QT_MOC_LITERAL(9, 160, 21), // "on_wavyButton_clicked"
QT_MOC_LITERAL(10, 182, 26), // "on_freqSlider_valueChanged"
QT_MOC_LITERAL(11, 209, 25) // "on_circularButton_clicked"

    },
    "diphw\0on_openButton_clicked\0\0"
    "on_exitButton_clicked\0on_closeImgButton_clicked\0"
    "on_trapButton_clicked\0on_highSlider_valueChanged\0"
    "value\0on_widthSlider_valueChanged\0"
    "on_wavyButton_clicked\0on_freqSlider_valueChanged\0"
    "on_circularButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_diphw[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    1,   63,    2, 0x08 /* Private */,
       8,    1,   66,    2, 0x08 /* Private */,
       9,    0,   69,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,

       0        // eod
};

void diphw::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<diphw *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_openButton_clicked(); break;
        case 1: _t->on_exitButton_clicked(); break;
        case 2: _t->on_closeImgButton_clicked(); break;
        case 3: _t->on_trapButton_clicked(); break;
        case 4: _t->on_highSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_widthSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_wavyButton_clicked(); break;
        case 7: _t->on_freqSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_circularButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject diphw::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_diphw.data,
    qt_meta_data_diphw,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *diphw::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *diphw::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_diphw.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int diphw::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
