/****************************************************************************
** Meta object code from reading C++ file 'bluetoothDeviceAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "bluetoothDeviceAdaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bluetoothDeviceAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_BluetoothDeviceAdaptor_t {
    QByteArrayData data[23];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BluetoothDeviceAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BluetoothDeviceAdaptor_t qt_meta_stringdata_BluetoothDeviceAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 22), // "BluetoothDeviceAdaptor"
QT_MOC_LITERAL(1, 23, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 39, 29), // "conectividade.BluetoothDevice"
QT_MOC_LITERAL(3, 69, 10), // "displayPin"
QT_MOC_LITERAL(4, 80, 0), // ""
QT_MOC_LITERAL(5, 81, 7), // "address"
QT_MOC_LITERAL(6, 89, 3), // "pin"
QT_MOC_LITERAL(7, 93, 20), // "finishedPairedDevice"
QT_MOC_LITERAL(8, 114, 14), // "finishedSearch"
QT_MOC_LITERAL(9, 129, 22), // "finishedUnpairedDevice"
QT_MOC_LITERAL(10, 152, 11), // "foundDevice"
QT_MOC_LITERAL(11, 164, 4), // "name"
QT_MOC_LITERAL(12, 169, 9), // "situation"
QT_MOC_LITERAL(13, 179, 9), // "pairError"
QT_MOC_LITERAL(14, 189, 19), // "pairingConfirmation"
QT_MOC_LITERAL(15, 209, 11), // "searchError"
QT_MOC_LITERAL(16, 221, 11), // "beginSearch"
QT_MOC_LITERAL(17, 233, 17), // "status_search_hdp"
QT_MOC_LITERAL(18, 251, 10), // "pairDevice"
QT_MOC_LITERAL(19, 262, 18), // "pairingAcceptation"
QT_MOC_LITERAL(20, 281, 12), // "confirmation"
QT_MOC_LITERAL(21, 294, 10), // "stopSearch"
QT_MOC_LITERAL(22, 305, 12) // "unpairDevice"

    },
    "BluetoothDeviceAdaptor\0D-Bus Interface\0"
    "conectividade.BluetoothDevice\0displayPin\0"
    "\0address\0pin\0finishedPairedDevice\0"
    "finishedSearch\0finishedUnpairedDevice\0"
    "foundDevice\0name\0situation\0pairError\0"
    "pairingConfirmation\0searchError\0"
    "beginSearch\0status_search_hdp\0pairDevice\0"
    "pairingAcceptation\0confirmation\0"
    "stopSearch\0unpairDevice"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BluetoothDeviceAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       1,   14, // classinfo
      14,   16, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // classinfo: key, value
       1,    2,

 // signals: name, argc, parameters, tag, flags
       3,    2,   86,    4, 0x06 /* Public */,
       7,    1,   91,    4, 0x06 /* Public */,
       8,    0,   94,    4, 0x06 /* Public */,
       9,    1,   95,    4, 0x06 /* Public */,
      10,    3,   98,    4, 0x06 /* Public */,
      13,    0,  105,    4, 0x06 /* Public */,
      14,    2,  106,    4, 0x06 /* Public */,
      15,    0,  111,    4, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  112,    4, 0x0a /* Public */,
      16,    1,  113,    4, 0x0a /* Public */,
      18,    1,  116,    4, 0x0a /* Public */,
      19,    1,  119,    4, 0x0a /* Public */,
      21,    0,  122,    4, 0x0a /* Public */,
      22,    1,  123,    4, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   11,    5,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void BluetoothDeviceAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        BluetoothDeviceAdaptor *_t = static_cast<BluetoothDeviceAdaptor *>(_o);
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
        case 8: _t->beginSearch(); break;
        case 9: _t->beginSearch((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->pairDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->pairingAcceptation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: { bool _r = _t->stopSearch();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 13: _t->unpairDevice((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (BluetoothDeviceAdaptor::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::displayPin)) {
                *result = 0;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::finishedPairedDevice)) {
                *result = 1;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::finishedSearch)) {
                *result = 2;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::finishedUnpairedDevice)) {
                *result = 3;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)(const QString & , const QString & , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::foundDevice)) {
                *result = 4;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::pairError)) {
                *result = 5;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::pairingConfirmation)) {
                *result = 6;
            }
        }
        {
            typedef void (BluetoothDeviceAdaptor::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&BluetoothDeviceAdaptor::searchError)) {
                *result = 7;
            }
        }
    }
}

const QMetaObject BluetoothDeviceAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_BluetoothDeviceAdaptor.data,
      qt_meta_data_BluetoothDeviceAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *BluetoothDeviceAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BluetoothDeviceAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_BluetoothDeviceAdaptor.stringdata0))
        return static_cast<void*>(const_cast< BluetoothDeviceAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int BluetoothDeviceAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
void BluetoothDeviceAdaptor::displayPin(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void BluetoothDeviceAdaptor::finishedPairedDevice(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BluetoothDeviceAdaptor::finishedSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void BluetoothDeviceAdaptor::finishedUnpairedDevice(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BluetoothDeviceAdaptor::foundDevice(const QString & _t1, const QString & _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void BluetoothDeviceAdaptor::pairError()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void BluetoothDeviceAdaptor::pairingConfirmation(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void BluetoothDeviceAdaptor::searchError()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
