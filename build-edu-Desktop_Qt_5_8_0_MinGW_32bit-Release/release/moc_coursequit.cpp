/****************************************************************************
** Meta object code from reading C++ file 'coursequit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../edu/coursequit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'coursequit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_coursequit_t {
    QByteArrayData data[6];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_coursequit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_coursequit_t qt_meta_stringdata_coursequit = {
    {
QT_MOC_LITERAL(0, 0, 10), // "coursequit"
QT_MOC_LITERAL(1, 11, 11), // "gobacktostu"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 11), // "gobacktosub"
QT_MOC_LITERAL(4, 36, 15), // "on_join_clicked"
QT_MOC_LITERAL(5, 52, 17) // "on_goback_clicked"

    },
    "coursequit\0gobacktostu\0\0gobacktosub\0"
    "on_join_clicked\0on_goback_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_coursequit[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    0,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Int,
    QMetaType::Int,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void coursequit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        coursequit *_t = static_cast<coursequit *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->gobacktostu();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 1: { int _r = _t->gobacktosub();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 2: _t->on_join_clicked(); break;
        case 3: _t->on_goback_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef int (coursequit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&coursequit::gobacktostu)) {
                *result = 0;
                return;
            }
        }
        {
            typedef int (coursequit::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&coursequit::gobacktosub)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject coursequit::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_coursequit.data,
      qt_meta_data_coursequit,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *coursequit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *coursequit::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_coursequit.stringdata0))
        return static_cast<void*>(const_cast< coursequit*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int coursequit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
int coursequit::gobacktostu()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int coursequit::gobacktosub()
{
    int _t0 = int();
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
