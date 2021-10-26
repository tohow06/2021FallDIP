/****************************************************************************
** Meta object code from reading C++ file 'openimagefile.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../openimagefile.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openimagefile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OpenImageFile_t {
    QByteArrayData data[15];
    char stringdata0[312];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenImageFile_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenImageFile_t qt_meta_stringdata_OpenImageFile = {
    {
QT_MOC_LITERAL(0, 0, 13), // "OpenImageFile"
QT_MOC_LITERAL(1, 14, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(4, 59, 25), // "on_actionExit_2_triggered"
QT_MOC_LITERAL(5, 85, 18), // "on_exitBtn_clicked"
QT_MOC_LITERAL(6, 104, 20), // "on_grayABBtn_clicked"
QT_MOC_LITERAL(7, 125, 22), // "on_thresButton_clicked"
QT_MOC_LITERAL(8, 148, 21), // "on_minuButton_clicked"
QT_MOC_LITERAL(9, 170, 21), // "on_spatButton_clicked"
QT_MOC_LITERAL(10, 192, 22), // "on_histoButton_clicked"
QT_MOC_LITERAL(11, 215, 22), // "on_graLeButton_clicked"
QT_MOC_LITERAL(12, 238, 32), // "on_horizontalSlider_valueChanged"
QT_MOC_LITERAL(13, 271, 5), // "value"
QT_MOC_LITERAL(14, 277, 34) // "on_horizontalSlider_2_valueCh..."

    },
    "OpenImageFile\0on_pushButton_clicked\0"
    "\0on_action_3_triggered\0on_actionExit_2_triggered\0"
    "on_exitBtn_clicked\0on_grayABBtn_clicked\0"
    "on_thresButton_clicked\0on_minuButton_clicked\0"
    "on_spatButton_clicked\0on_histoButton_clicked\0"
    "on_graLeButton_clicked\0"
    "on_horizontalSlider_valueChanged\0value\0"
    "on_horizontalSlider_2_valueChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenImageFile[] = {

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
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    0,   81,    2, 0x08 /* Private */,
      10,    0,   82,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,
      12,    1,   84,    2, 0x08 /* Private */,
      14,    1,   87,    2, 0x08 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void OpenImageFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OpenImageFile *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_action_3_triggered(); break;
        case 2: _t->on_actionExit_2_triggered(); break;
        case 3: _t->on_exitBtn_clicked(); break;
        case 4: _t->on_grayABBtn_clicked(); break;
        case 5: _t->on_thresButton_clicked(); break;
        case 6: _t->on_minuButton_clicked(); break;
        case 7: _t->on_spatButton_clicked(); break;
        case 8: _t->on_histoButton_clicked(); break;
        case 9: _t->on_graLeButton_clicked(); break;
        case 10: _t->on_horizontalSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_horizontalSlider_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject OpenImageFile::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_OpenImageFile.data,
    qt_meta_data_OpenImageFile,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *OpenImageFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenImageFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OpenImageFile.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int OpenImageFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
