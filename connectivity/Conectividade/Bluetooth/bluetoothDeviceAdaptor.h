/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp bluetoothdevice.xml -a bluetoothDeviceAdaptor
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef BLUETOOTHDEVICEADAPTOR_H_1451946296
#define BLUETOOTHDEVICEADAPTOR_H_1451946296

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface conectividade.BluetoothDevice
 */
class BluetoothDeviceAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "conectividade.BluetoothDevice")

public:
    BluetoothDeviceAdaptor(QObject *parent);
    virtual ~BluetoothDeviceAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void beginSearch();
    void beginSearch(bool status_search_hdp);
    void pairDevice(const QString &address);
    void pairingAcceptation(bool confirmation);
    bool stopSearch();
    void unpairDevice(const QString &address);
Q_SIGNALS: // SIGNALS
    void displayPin(const QString &address, const QString &pin);
    void finishedPairedDevice(const QString &address);
    void finishedSearch();
    void finishedUnpairedDevice(const QString &address);
    void foundDevice(const QString &name, const QString &address, bool situation);
    void pairError();
    void pairingConfirmation(const QString &address, const QString &pin);
    void searchError();
};

#endif
