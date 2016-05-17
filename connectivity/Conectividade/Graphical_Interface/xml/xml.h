#ifndef DATALIST_H
#define DATALIST_H

#include <QList>
#include <QMap>
#include <QDomDocumentType>
#include <QDebug>
#include <QFile>
#include <QMessageBox>
class Entry;
class DataList;

class DataList
{
public:
    DataList(QString xml);
    QList<Entry> getEntries() const;
    QMap<QString, Entry> getEntries_map() const;

private:
    bool valid;
    QList<Entry> entries;
    QMap<QString,Entry> entries_map;


};

class Entry
{
public:
    Entry();
    Entry(QDomElement entry);
    QMap<QString, QString> parse_meta(QDomElement node); // X
    QPair<QString,QString> parse_metadata(QDomElement meta); // V
    QPair<bool,QDomElement> detect_type(QDomElement node); // V
    QString parse_name(QDomElement node); // V
    QPair<QList<Entry>, QMap<QString, Entry> > parse_children(QDomElement node); // X
    QPair<QString, QString> parse_simple(QDomElement node); // V

    QString getName();
    QList<Entry> getEntries() const;
    QString getValue() const;
    QMap<QString, QString> getMeta() const;
    QMap<QString, Entry> getEntries_map() const;

private:
    QMap<QString,QString> meta;
    QPair<bool,QDomElement> node;
    QString name;
    bool compound;
    QString dtype,value;
    QList<Entry>entries;
    QMap<QString,Entry>entries_map;
};



#endif // DATALIST_H
