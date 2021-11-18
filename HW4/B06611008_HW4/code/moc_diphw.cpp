/****************************************************************************
** Meta object code from reading C++ file 'diphw.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "diphw.h"
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
    QByteArrayData data[16];
    char stringdata0[318];
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
QT_MOC_LITERAL(4, 51, 32), // "on_matrixBox_currentIndexChanged"
QT_MOC_LITERAL(5, 84, 5), // "index"
QT_MOC_LITERAL(6, 90, 30), // "on_sizeBox_currentIndexChanged"
QT_MOC_LITERAL(7, 121, 21), // "on_convButton_clicked"
QT_MOC_LITERAL(8, 143, 25), // "on_closeImgButton_clicked"
QT_MOC_LITERAL(9, 169, 19), // "on_zcButton_clicked"
QT_MOC_LITERAL(10, 189, 27), // "on_thresSlider_valueChanged"
QT_MOC_LITERAL(11, 217, 5), // "value"
QT_MOC_LITERAL(12, 223, 23), // "on_showFSButton_clicked"
QT_MOC_LITERAL(13, 247, 24), // "on_showPASButton_clicked"
QT_MOC_LITERAL(14, 272, 21), // "on_ifftButton_clicked"
QT_MOC_LITERAL(15, 294, 23) // "on_filterButton_clicked"

    },
    "diphw\0on_openButton_clicked\0\0"
    "on_exitButton_clicked\0"
    "on_matrixBox_currentIndexChanged\0index\0"
    "on_sizeBox_currentIndexChanged\0"
    "on_convButton_clicked\0on_closeImgButton_clicked\0"
    "on_zcButton_clicked\0on_thresSlider_valueChanged\0"
    "value\0on_showFSButton_clicked\0"
    "on_showPASButton_clicked\0on_ifftButton_clicked\0"
    "on_filterButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_diphw[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    1,   76,    2, 0x08 /* Private */,
       6,    1,   79,    2, 0x08 /* Private */,
       7,    0,   82,    2, 0x08 /* Private */,
       8,    0,   83,    2, 0x08 /* Private */,
       9,    0,   84,    2, 0x08 /* Private */,
      10,    1,   85,    2, 0x08 /* Private */,
      12,    0,   88,    2, 0x08 /* Private */,
      13,    0,   89,    2, 0x08 /* Private */,
      14,    0,   90,    2, 0x08 /* Private */,
      15,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
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
        case 2: _t->on_matrixBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_sizeBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_convButton_clicked(); break;
        case 5: _t->on_closeImgButton_clicked(); break;
        case 6: _t->on_zcButton_clicked(); break;
        case 7: _t->on_thresSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_showFSButton_clicked(); break;
        case 9: _t->on_showPASButton_clicked(); break;
        case 10: _t->on_ifftButton_clicked(); break;
        case 11: _t->on_filterButton_clicked(); break;
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
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
