/****************************************************************************
** Meta object code from reading C++ file 'LoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "LoginDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_LoginDialog_t {
    QByteArrayData data[10];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginDialog_t qt_meta_stringdata_LoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 11), // "LoginDialog"
QT_MOC_LITERAL(1, 12, 13), // "connectedUser"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 18), // "QPair<int,QString>"
QT_MOC_LITERAL(4, 46, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 70, 9), // "otherUser"
QT_MOC_LITERAL(6, 80, 5), // "index"
QT_MOC_LITERAL(7, 86, 12), // "SignUpClosed"
QT_MOC_LITERAL(8, 99, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 121, 28) // "on_commandLinkButton_clicked"

    },
    "LoginDialog\0connectedUser\0\0"
    "QPair<int,QString>\0on_pushButton_2_clicked\0"
    "otherUser\0index\0SignUpClosed\0"
    "on_pushButton_clicked\0"
    "on_commandLinkButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginDialog *_t = static_cast<LoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connectedUser((*reinterpret_cast< QPair<int,QString>(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->otherUser((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->SignUpClosed(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_commandLinkButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (LoginDialog::*_t)(QPair<int,QString> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&LoginDialog::connectedUser)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject LoginDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_LoginDialog.data,
      qt_meta_data_LoginDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *LoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_LoginDialog.stringdata0))
        return static_cast<void*>(const_cast< LoginDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int LoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LoginDialog::connectedUser(QPair<int,QString> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
