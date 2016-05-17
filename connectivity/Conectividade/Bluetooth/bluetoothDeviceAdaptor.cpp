/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp bluetoothdevice.xml -a bluetoothDeviceAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "bluetoothDeviceAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class BluetoothDeviceAdaptor
 */

BluetoothDeviceAdaptor::BluetoothDeviceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

BluetoothDeviceAdaptor::~BluetoothDeviceAdaptor()
{
    // destructor
}

void BluetoothDeviceAdaptor::beginSearch()
{
    // handle method call conectividade.BluetoothDevice.beginSearch
    QMetaObject::invokeMethod(parent(), "beginSearch");
}

void BluetoothDeviceAdaptor::beginSearch(bool status_search_hdp)
{
    // handle method call conectividade.BluetoothDevice.beginSearch
    QMetaObject::invokeMethod(parent(), "beginSearch", Q_ARG(bool, status_search_hdp));
}

void BluetoothDeviceAdaptor::pairDevice(const QString &address)
{
    // handle method call conectividade.BluetoothDevice.pairDevice
    QMetaObject::invokeMethod(parent(), "pairDevice", Q_ARG(QString, address));
}

void BluetoothDeviceAdaptor::pairingAcceptation(bool confirmation)
{
    // handle method call conectividade.BluetoothDevice.pairingAcceptation
    QMetaObject::invokeMethod(parent(), "pairingAcceptation", Q_ARG(bool, confirmation));
}

bool BluetoothDeviceAdaptor::stopSearch()
{
    // handle method call conectividade.BluetoothDevice.stopSearch
    bool out0;
    QMetaObject::invokeMethod(parent(), "stopSearch", Q_RETURN_ARG(bool, out0));
    return out0;
}

void BluetoothDeviceAdaptor::unpairDevice(const QString &address)
{
    // handle method call conectividade.BluetoothDevice.unpairDevice
    QMetaObject::invokeMethod(parent(), "unpairDevice", Q_ARG(QString, address));
}

