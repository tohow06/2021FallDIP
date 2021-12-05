/****************************************************************************
** Meta object code from reading C++ file 'diphw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../HW6/B06611008_HW6/code/diphw.h"
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
    char stringdata0[228];
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
QT_MOC_LITERAL(5, 77, 20), // "on_cmyButton_clicked"
QT_MOC_LITERAL(6, 98, 20), // "on_hsiButton_clicked"
QT_MOC_LITERAL(7, 119, 20), // "on_xyzButton_clicked"
QT_MOC_LITERAL(8, 140, 20), // "on_labButton_clicked"
QT_MOC_LITERAL(9, 161, 20), // "on_yuvButton_clicked"
QT_MOC_LITERAL(10, 182, 23), // "on_pseudoButton_clicked"
QT_MOC_LITERAL(11, 206, 21) // "on_pushButton_clicked"

    },
    "diphw\0on_openButton_clicked\0\0"
    "on_exitButton_clicked\0on_closeImgButton_clicked\0"
    "on_cmyButton_clicked\0on_hsiButton_clicked\0"
    "on_xyzButton_clicked\0on_labButton_clicked\0"
    "on_yuvButton_clicked\0on_pseudoButton_clicked\0"
    "on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_diphw[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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
        case 3: _t->on_cmyButton_clicked(); break;
        case 4: _t->on_hsiButton_clicked(); break;
        case 5: _t->on_xyzButton_clicked(); break;
        case 6: _t->on_labButton_clicked(); break;
        case 7: _t->on_yuvButton_clicked(); break;
        case 8: _t->on_pseudoButton_clicked(); break;
        case 9: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
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
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
