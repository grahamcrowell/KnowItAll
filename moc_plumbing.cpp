/****************************************************************************
** Meta object code from reading C++ file 'plumbing.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "plumbing.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'plumbing.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Plumbing_t {
    QByteArrayData data[13];
    char stringdata[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Plumbing_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Plumbing_t qt_meta_stringdata_Plumbing = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Plumbing"
QT_MOC_LITERAL(1, 9, 11), // "typeChanged"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 12), // "typesChanged"
QT_MOC_LITERAL(4, 35, 15), // "filenameChanged"
QT_MOC_LITERAL(5, 51, 17), // "passphraseChanged"
QT_MOC_LITERAL(6, 69, 12), // "keyGenerated"
QT_MOC_LITERAL(7, 82, 7), // "success"
QT_MOC_LITERAL(8, 90, 11), // "generateKey"
QT_MOC_LITERAL(9, 102, 4), // "type"
QT_MOC_LITERAL(10, 107, 5), // "types"
QT_MOC_LITERAL(11, 113, 8), // "filename"
QT_MOC_LITERAL(12, 122, 10) // "passphrase"

    },
    "Plumbing\0typeChanged\0\0typesChanged\0"
    "filenameChanged\0passphraseChanged\0"
    "keyGenerated\0success\0generateKey\0type\0"
    "types\0filename\0passphrase"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Plumbing[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       4,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,
       5,    0,   47,    2, 0x06 /* Public */,
       6,    1,   48,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
      10, QMetaType::QStringList, 0x00495001,
      11, QMetaType::QString, 0x00495103,
      12, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,

       0        // eod
};

void Plumbing::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Plumbing *_t = static_cast<Plumbing *>(_o);
        switch (_id) {
        case 0: _t->typeChanged(); break;
        case 1: _t->typesChanged(); break;
        case 2: _t->filenameChanged(); break;
        case 3: _t->passphraseChanged(); break;
        case 4: _t->keyGenerated((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->generateKey(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Plumbing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Plumbing::typeChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (Plumbing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Plumbing::typesChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (Plumbing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Plumbing::filenameChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (Plumbing::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Plumbing::passphraseChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (Plumbing::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Plumbing::keyGenerated)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Plumbing::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Plumbing.data,
      qt_meta_data_Plumbing,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Plumbing::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Plumbing::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Plumbing.stringdata))
        return static_cast<void*>(const_cast< Plumbing*>(this));
    return QObject::qt_metacast(_clname);
}

int Plumbing::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = type(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = types(); break;
        case 2: *reinterpret_cast< QString*>(_v) = filename(); break;
        case 3: *reinterpret_cast< QString*>(_v) = filename(); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: setType(*reinterpret_cast< QString*>(_v)); break;
        case 2: setFilename(*reinterpret_cast< QString*>(_v)); break;
        case 3: setPassphrase(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
        _id -= 4;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Plumbing::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void Plumbing::typesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Plumbing::filenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void Plumbing::passphraseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void Plumbing::keyGenerated(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
