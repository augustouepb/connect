#include "measurement.h"
#include <QDate>

Measurement::Measurement(DataList datalist, int inside_segmente)
{
    data = &datalist;
    this->inside_segment=inside_segmente;
}

QString Measurement::unit(Entry entry)
{
    if(entry.getMeta().contains("unit"))
        return entry.getMeta().value("unit");

    return "(unit "+entry.getMeta().value("unitcode")+")";
}

QPair<QString,QString> Measurement::simple_nu(Entry entry)
{
    return QPair<QString,QString>(entry.getValue(), unit(entry));
}

QPair<QString,QString> Measurement::basic_nu(Entry entry)
{
    return QPair<QString,QString>(entry.getValue(), unit(entry));
}

QPair<QString,QString> Measurement::compound_basic_nu(Entry entry)
{
    QString unit = this->unit(entry);
    QString s("(");

    foreach(Entry sub,entry.getEntries()){
        if(s.length()>1)
            s+=", ";
        s += sub.getValue();
    }
    s+=")";
    return QPair<QString,QString>(s,unit);
}

// @DOC configura a data/hora da medição EX: Date: 01.02.2016 Time: 11:19:25.000
// @DOC olhe a aba saved data no programa e abre algum dos dados lá
QPair<QString,QString> Measurement::absolute_timestamp(Entry entry)
{
    const QList<QString> k= {"century", "year", "month", "day", "hour", "minute", "second", "sec_fractions"};

    QList<int> times;

    foreach(QString time,k){
        times.append(entry.getEntries_map().value(time).getValue().toInt());
    }

    int ano = (QString().setNum(times.at(0))+ QString().setNum(times.at(1))).toInt();

    QDate date(ano,times.at(2),times.at(3));
    QTime time(times.at(4),times.at(5),times.at(6),times.at(7));

    return QPair<QString,QString>("Date: "+date.toString("dd.MM.yyyy"),"Time: "+time.toString("hh:mm:ss.zzz"));
}

QList<QPair<QString,QString>> Measurement::describe()
{
    QList<QPair<QString,QString>> meditions;
    if(inside_segment==0){
//        qDebug() << "Measurement";
    }

    foreach(Entry entry, data->getEntries()){
        if(inside_segment==0)
            qDebug()<<"\t";
        if(entry.getEntries().isEmpty()){
            if(inside_segment==0)
                qDebug() << "(empty " << entry.getName() << ")";
            continue;
        }
        foreach(Entry sub, entry.getEntries()){
            if(sub.getName()=="Simple-Nu-Observed-Value")
                meditions.append(simple_nu(sub));
            if(sub.getName()=="Basic-Nu-Observed-Value")
                meditions.append(basic_nu(sub));
            if(sub.getName()=="Compound-Basic-Nu-Observed-Value" ||
                sub.getName()=="Compound-Simple-Nu-Observed-Value")

                meditions.append(compound_basic_nu(sub));
            if(sub.getName()=="Absolute-Time-Stamp")
                meditions.append(absolute_timestamp(sub));
        }
        if(inside_segment == 0)
            qDebug();
    }
    return meditions;
}


