/****************************************************************************
** Meta object code from reading C++ file 'agentAdaptor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "adaptors_class/agentAdaptor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'agentAdaptor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AgentAdaptor_t {
    QByteArrayData data[15];
    char stringdata0[1138];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AgentAdaptor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AgentAdaptor_t qt_meta_stringdata_AgentAdaptor = {
    {
QT_MOC_LITERAL(0, 0, 12), // "AgentAdaptor"
QT_MOC_LITERAL(1, 13, 15), // "D-Bus Interface"
QT_MOC_LITERAL(2, 29, 24), // "com.signove.health.agent"
QT_MOC_LITERAL(3, 54, 19), // "D-Bus Introspection"
QT_MOC_LITERAL(4, 74, 958), // "  <interface name=\"com.signo..."
QT_MOC_LITERAL(5, 934, 9), // "Connected"
QT_MOC_LITERAL(6, 944, 0), // ""
QT_MOC_LITERAL(7, 945, 6), // "device"
QT_MOC_LITERAL(8, 952, 7), // "address"
QT_MOC_LITERAL(9, 960, 10), // "Associated"
QT_MOC_LITERAL(10, 971, 7), // "xmlData"
QT_MOC_LITERAL(11, 979, 15), // "MeasurementData"
QT_MOC_LITERAL(12, 995, 16), // "DeviceAttributes"
QT_MOC_LITERAL(13, 1012, 13), // "Disassociated"
QT_MOC_LITERAL(14, 1026, 12) // "Disconnected"

    },
    "AgentAdaptor\0D-Bus Interface\0"
    "com.signove.health.agent\0D-Bus Introspection\0"
    "  <interface name=\"com.signove.health.agent\">\n    <method name=\"Co"
    "nnected\">\n      <arg direction=\"in\" type=\"s\" name=\"device\"/>\n"
    "      <arg direction=\"in\" type=\"s\" name=\"address\"/>\n    </metho"
    "d>\n    <method name=\"Associated\">\n      <arg direction=\"in\" type"
    "=\"s\" name=\"device\"/>\n      <arg direction=\"in\" type=\"s\" name="
    "\"xmlData\"/>\n    </method>\n    <method name=\"MeasurementData\">\n "
    "     <arg direction=\"in\" type=\"s\" name=\"device\"/>\n      <arg di"
    "rection=\"in\" type=\"s\" name=\"xmlData\"/>\n    </method>\n    <meth"
    "od name=\"DeviceAttributes\">\n      <arg direction=\"in\" type=\"s\" "
    "name=\"device\"/>\n      <arg direction=\"in\" type=\"s\" name=\"xmlDa"
    "ta\"/>\n    <\method>\n    <method name =\"Disassociated\">\n      <ar"
    "g direction=\"in\" type=\"s\" name=\"device\"/>\n    </method>\n    <m"
    "ethod name=\"Disconnect>\">\n      <arg direction=\"in\" type=\"s\" na"
    "me=\"device\"/>\n    </method>\n  </interface>\n\0"
    "Connected\0\0device\0address\0Associated\0"
    "xmlData\0MeasurementData\0DeviceAttributes\0"
    "Disassociated\0Disconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AgentAdaptor[] = {

 // content:
       7,       // revision
       0,       // classname
       2,   14, // classinfo
       6,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
       1,    2,
       3,    4,

 // slots: name, argc, parameters, tag, flags
       5,    2,   48,    6, 0x0a /* Public */,
       9,    2,   53,    6, 0x0a /* Public */,
      11,    2,   58,    6, 0x0a /* Public */,
      12,    2,   63,    6, 0x0a /* Public */,
      13,    1,   68,    6, 0x0a /* Public */,
      14,    1,   71,    6, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   10,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void AgentAdaptor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AgentAdaptor *_t = static_cast<AgentAdaptor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Connected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->Associated((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->MeasurementData((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 3: _t->DeviceAttributes((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 4: _t->Disassociated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->Disconnected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject AgentAdaptor::staticMetaObject = {
    { &QDBusAbstractAdaptor::staticMetaObject, qt_meta_stringdata_AgentAdaptor.data,
      qt_meta_data_AgentAdaptor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AgentAdaptor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AgentAdaptor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AgentAdaptor.stringdata0))
        return static_cast<void*>(const_cast< AgentAdaptor*>(this));
    return QDBusAbstractAdaptor::qt_metacast(_clname);
}

int AgentAdaptor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDBusAbstractAdaptor::qt_metacall(_c, _id, _a);
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
    return _id;
}
QT_END_MOC_NAMESPACE
