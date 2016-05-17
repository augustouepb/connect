/****************************************************************************
** Meta object code from reading C++ file 'bluetoothDeviceInterface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "interfaces_class/bluetoothDeviceInterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothDeviceInterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ConectividadeBluetoothDeviceInterface_t {
    QByteArrayData data[23];
    char stringdata0[331];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ConectividadeBluetoothDeviceInterface_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ConectividadeBluetoothDeviceInterface_t qt_meta_stringdata_ConectividadeBluetoothDeviceInterface = {
    {
QT_MOC_LITERAL(0, 0, 37), // "ConectividadeBluetoothDeviceI..."
QT_MOC_LITERAL(1, 38, 10), // "displayPin"
QT_MOC_LITERAL(2, 49, 0), // ""
QT_MOC_LITERAL(3, 50, 7), // "address"
QT_MOC_LITERAL(4, 58, 3), // "pin"
QT_MOC_LITERAL(5, 62, 20), // "finishedPairedDevice"
QT_MOC_LITERAL(6, 83, 14), // "finishedSearch"
QT_MOC_LITERAL(7, 98, 22), // "finishedUnpairedDevice"
QT_MOC_LITERAL(8, 121, 11), // "foundDevice"
QT_MOC_LITERAL(9, 133, 4), // "name"
QT_MOC_LITERAL(10, 138, 9), // "situation"
QT_MOC_LITERAL(11, 148, 9), // "pairError"
QT_MOC_LITERAL(12, 158, 19), // "pairingConfirmation"
QT_MOC_LITERAL(13, 178, 11), // "searchError"
QT_MOC_LITERAL(14, 190, 11), // "beginSearch"
QT_MOC_LITERAL(15, 202, 19), // "QDBusPendingReply<>"
QT_MOC_LITERAL(16, 222, 17), // "status_search_hdp"
QT_MOC_LITERAL(17, 240, 10), // "pairDevice"
QT_MOC_LITERAL(18, 251, 18), // "pairingAcceptation"
QT_MOC_LITERAL(19, 270, 12), // "confirmation"
QT_MOC_LITERAL(20, 283, 10), // "stopSearch"
QT_MOC_LITERAL(21, 294, 23), // "QDBusPendingReply<bool>"
QT_MOC_LITERAL(22, 318, 12) // "unpairDevice"

    },
    "ConectividadeBluetoothDeviceInterface\0"
    "displayPin\0\0address\0pin\0finishedPairedDevice\0"
    "finishedSearch\0finishedUnpairedDevice\0"
    "foundDevice\0name\0situation\0pairError\0"
    "pairingConfirmation\0searchError\0"
    "beginSearch\0QDBusPendingReply<>\0"
    "status_search_hdp\0pairDevice\0"
    "pairingAcceptation\0confirmation\0"
    "stopSearch\0QDBusPendingReply<bool>\0"
    "unpairDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ConectividadeBluetoothDeviceInterface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   84,    2, 0x06 /* Public */,
       5,    1,   89,    2, 0x06 /* Public */,
       6,    0,   92,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       8,    3,   96,    2, 0x06 /* Public */,
      11,    0,  103,    2, 0x06 /* Public */,
      12,    2,  104,    2, 0x06 /* Public */,
      13,    0,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  110,    2, 0x0a /* Public */,
      14,    1,  111,    2, 0x0a /* Public */,
      17,    1,  114,    2, 0x0a /* Public */,
      18,    1,  117,    2, 0x0a /* Public */,
      20,    0,  120,    2, 0x0a /* Public */,
      22,    1,  121,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    9,    3,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    0x80000000 | 15,
    0x80000000 | 15, QMetaType::Bool,   16,
    0x80000000 | 15, QMetaType::QString,    3,
    0x80000000 | 15, QMetaType::Bool,   19,
    0x80000000 | 21,
    0x80000000 | 15, QMetaType::QString,    3,

       0        // eod
};

void ConectividadeBluetoothDeviceInterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ConectividadeBluetoothDeviceInterface *_t = static_cast<ConectividadeBluetoothDeviceInterface *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->displayPin((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->finishedPairedDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->finishedSearch(); break;
        case 3: _t->finishedUnpairedDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->foundDevice((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 5: _t->pairError(); break;
        case 6: _t->pairingConfirmation((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->searchError(); break;
        case 8: { QDBusPendingReply<> _r = _t->beginSearch();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 9: { QDBusPendingReply<> _r = _t->beginSearch((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 10: { QDBusPendingReply<> _r = _t->pairDevice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 11: { QDBusPendingReply<> _r = _t->pairingAcceptation((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        case 12: { QDBusPendingReply<bool> _r = _t->stopSearch();
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<bool>*>(_a[0]) = _r; }  break;
        case 13: { QDBusPendingReply<> _r = _t->unpairDevice((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QDBusPendingReply<>*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::displayPin)) {
                *result = 0;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::finishedPairedDevice)) {
                *result = 1;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::finishedSearch)) {
                *result = 2;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::finishedUnpairedDevice)) {
                *result = 3;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::foundDevice)) {
                *result = 4;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::pairError)) {
                *result = 5;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::pairingConfirmation)) {
                *result = 6;
            }
        }
        {
            typedef void (ConectividadeBluetoothDeviceInterface::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ConectividadeBluetoothDeviceInterface::searchError)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject ConectividadeBluetoothDeviceInterface::staticMetaObject = {
    { &QDBusAbstractInterface::staticMetaObject, qt_meta_stringdata_ConectividadeBluetoothDeviceInterface.data,
      qt_meta_data_ConectividadeBluetoothDeviceInterface,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ConectividadeBluetoothDeviceInterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConectividadeBluetoothDeviceInterface::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ConectividadeBluetoothDeviceInterface.stringdata0))
        return static_cast<void*>(const_cast< ConectividadeBluetoothDeviceInterface*>(this));
    return QDBusAbstractInterface::qt_metacast(_clname);
}

int ConectividadeBluetoothDeviceInterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ConectividadeBluetoothDeviceInterface::displayPin(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ConectividadeBluetoothDeviceInterface::finishedPairedDevice(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ConectividadeBluetoothDeviceInterface::finishedSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void ConectividadeBluetoothDeviceInterface::finishedUnpairedDevice(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void ConectividadeBluetoothDeviceInterface::foundDevice(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ConectividadeBluetoothDeviceInterface::pairError()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void ConectividadeBluetoothDeviceInterface::pairingConfirmation(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void ConectividadeBluetoothDeviceInterface::searchError()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
