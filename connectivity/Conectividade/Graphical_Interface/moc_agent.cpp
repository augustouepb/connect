/****************************************************************************
** Meta object code from reading C++ file 'agent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adaptors_class/agent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Agent_t {
    QByteArrayData data[17];
    char stringdata0[210];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Agent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Agent_t qt_meta_stringdata_Agent = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Agent"
QT_MOC_LITERAL(1, 6, 15), // "deviceConnected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 7), // "address"
QT_MOC_LITERAL(4, 31, 18), // "deviceDisconnected"
QT_MOC_LITERAL(5, 50, 13), // "currentStatus"
QT_MOC_LITERAL(6, 64, 11), // "xmlMeasures"
QT_MOC_LITERAL(7, 76, 17), // "xmlConfigurations"
QT_MOC_LITERAL(8, 94, 19), // "xmlDeviceAttributes"
QT_MOC_LITERAL(9, 114, 9), // "Connected"
QT_MOC_LITERAL(10, 124, 6), // "device"
QT_MOC_LITERAL(11, 131, 10), // "Associated"
QT_MOC_LITERAL(12, 142, 7), // "xmlData"
QT_MOC_LITERAL(13, 150, 15), // "MeasurementData"
QT_MOC_LITERAL(14, 166, 16), // "DeviceAttributes"
QT_MOC_LITERAL(15, 183, 13), // "Disassociated"
QT_MOC_LITERAL(16, 197, 12) // "Disconnected"

    },
    "Agent\0deviceConnected\0\0address\0"
    "deviceDisconnected\0currentStatus\0"
    "xmlMeasures\0xmlConfigurations\0"
    "xmlDeviceAttributes\0Connected\0device\0"
    "Associated\0xmlData\0MeasurementData\0"
    "DeviceAttributes\0Disassociated\0"
    "Disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Agent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,
       4,    0,   77,    2, 0x06 /* Public */,
       5,    1,   78,    2, 0x06 /* Public */,
       6,    1,   81,    2, 0x06 /* Public */,
       7,    1,   84,    2, 0x06 /* Public */,
       8,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   90,    2, 0x0a /* Public */,
      11,    2,   95,    2, 0x0a /* Public */,
      13,    2,  100,    2, 0x0a /* Public */,
      14,    2,  105,    2, 0x0a /* Public */,
      15,    1,  110,    2, 0x0a /* Public */,
      16,    1,  113,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   10,   12,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void Agent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Agent *_t = static_cast<Agent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deviceConnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->deviceDisconnected(); break;
        case 2: _t->currentStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->xmlMeasures((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->xmlConfigurations((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->xmlDeviceAttributes((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->Connected((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->Associated((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->MeasurementData((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 9: _t->DeviceAttributes((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->Disassociated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: _t->Disconnected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Agent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Agent::deviceConnected)) {
                *result = 0;
            }
        }
        {
            typedef void (Agent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Agent::deviceDisconnected)) {
                *result = 1;
            }
        }
        {
            typedef void (Agent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Agent::currentStatus)) {
                *result = 2;
            }
        }
        {
            typedef void (Agent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Agent::xmlMeasures)) {
                *result = 3;
            }
        }
        {
            typedef void (Agent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Agent::xmlConfigurations)) {
                *result = 4;
            }
        }
        {
            typedef void (Agent::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Agent::xmlDeviceAttributes)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject Agent::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Agent.data,
      qt_meta_data_Agent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Agent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Agent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Agent.stringdata0))
        return static_cast<void*>(const_cast< Agent*>(this));
    return QObject::qt_metacast(_clname);
}

int Agent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Agent::deviceConnected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Agent::deviceDisconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void Agent::currentStatus(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Agent::xmlMeasures(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Agent::xmlConfigurations(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Agent::xmlDeviceAttributes(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
