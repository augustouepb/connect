#include "bluetoothdevice.h"
#include "bluetoothDeviceAdaptor.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    BluetoothDevice *bd = new BluetoothDevice();


    qDebug() << "OK **************************************************888";

    return a.exec();
}
