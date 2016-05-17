#include "deviceattributes.h"

//constructor de DeviceAtributtes
DeviceAttributes::DeviceAttributes(DataList datalist)
{
    data = &datalist; // configura a lista de dados
}

// @DOC configura uma lista de dispositivos, EX: [[fabricante,<NFAB>][Modelo,<Model>],[tipo,<type>], [id,<id>]...]
// olhe a aba saved data no programa, para ter uma idéia melhor
QList<QPair<QString,QString>> DeviceAttributes::describe()
{
    QList<QPair<QString,QString>> results;


    foreach(Entry entry, data->getEntries_map().value("MDS").getEntries()){
        if(entry.getName()=="System-Model")
            results.append(system_model(entry));
        else if(entry.getName()=="System-Id")
                results.append(system_id(entry));
        else if(entry.getName() =="System-Type-Spec-List")
                    results.append(system_type(entry));
    }
    return results;
}

//@DOC configura o modelo do sistema, provalmente o sistema é um dispositivo médico
QList<QPair<QString,QString>> DeviceAttributes::system_model(Entry entry)
{
    QList<QPair<QString,QString>> aux;

    QString value =entry.getEntries_map().value("manufacturer").getValue();
    aux.append(QPair<QString,QString>("Manufacturer",value));

    value = entry.getEntries_map().value("model-number").getValue();
    aux.append(QPair<QString,QString>("Model",value));

    return aux;
}

QPair<QString,QString> DeviceAttributes::system_id(Entry entry)
{
    QPair<QString,QString> aux("System ID",entry.getValue());

    return aux;
}

QPair<QString,QString> DeviceAttributes::system_type(Entry entry)
{
    QPair<QString,QString>aux;
    aux.first = "Specializations";

    foreach(Entry espc, entry.getEntries()){
        //Colocar em hexadecimal
        int num = espc.getEntries_map().value("type").getValue().toInt();
        aux.second = num;
    }
    return aux;
}


