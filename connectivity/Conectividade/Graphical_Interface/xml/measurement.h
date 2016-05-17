#ifndef MEASUREMENT_H
#define MEASUREMENT_H
#include "xml.h"

class Measurement{

public:
    Measurement(DataList datalist, int inside_segment=0);
    QString unit(Entry entry);
    QPair<QString, QString> simple_nu(Entry entry);
    QPair<QString, QString> basic_nu(Entry entry);
    QPair<QString, QString> compound_basic_nu(Entry entry);
    static QPair<QString, QString> absolute_timestamp(Entry entry);
    QList<QPair<QString, QString> > describe();

private:
    DataList *data;
    int inside_segment;
};

#endif // MEASUREMENT_H
