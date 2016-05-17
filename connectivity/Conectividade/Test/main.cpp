#include <QCoreApplication>
#include <QDomDocumentType>
#include <QDomElement>
//#include "../Graphical_Interface/xml/xml.h"
#include <iostream>;

using namespace std;

QTextStream& qStdOut();
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDomDocumentType doc =  QDomDocumentType( QString( "new Doc" ) );
    QDomElement element =  QDomElement();
    element.setTagName( "meta-data" );
    doc.appendChild( element );
    qStdOut() << doc.firstChild().toElement().text() ;

    qDebug();
    return a.exec();
}






QTextStream& qStdOut()
{
    static QTextStream ts( stdout );
    return ts;
}
