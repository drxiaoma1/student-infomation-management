/****************************************************************************
** Meta object code from reading C++ file 'subteacher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../edu/subteacher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subteacher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_subteacher_t {
    QByteArrayData data[11];
    char stringdata0[177];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_subteacher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_subteacher_t qt_meta_stringdata_subteacher = {
    {
QT_MOC_LITERAL(0, 0, 10), // "subteacher"
QT_MOC_LITERAL(1, 11, 6), // "goback"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 17), // "on_logout_clicked"
QT_MOC_LITERAL(4, 37, 18), // "on_destroy_clicked"
QT_MOC_LITERAL(5, 56, 19), // "on_checkout_clicked"
QT_MOC_LITERAL(6, 76, 21), // "on_joincourse_clicked"
QT_MOC_LITERAL(7, 98, 15), // "on_quit_clicked"
QT_MOC_LITERAL(8, 114, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 136, 21), // "on_messagecre_clicked"
QT_MOC_LITERAL(10, 158, 18) // "on_grading_clicked"

    },
    "subteacher\0goback\0\0on_logout_clicked\0"
    "on_destroy_clicked\0on_checkout_clicked\0"
    "on_joincourse_clicked\0on_quit_clicked\0"
    "on_pushButton_clicked\0on_messagecre_clicked\0"
    "on_grading_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_subteacher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int,

 // slots: parameters
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

void subteacher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        subteacher *_t = static_cast<subteacher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->goback();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: _t->on_logout_clicked(); break;
        case 2: _t->on_destroy_clicked(); break;
        case 3: _t->on_checkout_clicked(); break;
        case 4: _t->on_joincourse_clicked(); break;
        case 5: _t->on_quit_clicked(); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_messagecre_clicked(); break;
        case 8: _t->on_grading_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (subteacher::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&subteacher::goback)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject subteacher::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_subteacher.data,
      qt_meta_data_subteacher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *subteacher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *subteacher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_subteacher.stringdata0))
        return static_cast<void*>(const_cast< subteacher*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int subteacher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
int subteacher::goback()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
