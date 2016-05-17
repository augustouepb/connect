#include "xml.h"
#include <QApplication>
#include <QDomDocument>
#include <QFileInfo>
#include <QFile>
#include "gtest/gtest.h"
#include "deviceattributes.h"
#include "configuration.h"
#include "measurement.h"



QDomDocument *getDoc( QString fileName ){// carrega o xml e retorna um QDomElement com o root
    QDomDocument *doc = new QDomDocument( "xml" );
    QFileInfo filem("..");
    QFile file( filem.absolutePath()+"/" + fileName );
    doc->setContent( &file );

    file.close();

    return doc;
}
QDomDocument getEmptyDoc(){
    QDomDocument *doc = new QDomDocument( "emptyDoc" );
    return *doc;
}

Entry getEntry(){// retorna um objeto Entry
    QDomElement datalist(getDoc( "md.txt" )->firstChildElement("data-list"));

    QDomElement entry(datalist.firstChildElement());

    return entry;
}
QDomElement getElement( QString s ){
    return getEmptyDoc().createElement( s );

}
void addAttr( QDomElement e, QString attr, QString v ){
    e.setAttribute( attr, v );
}

DataList getData( QString fileName ){
    DataList d( getDoc( fileName )->
                toString() );
    return d;
}


TEST (deviceAttributes , systemModel){
    Entry ent = getEntry();

    DataList dataList = getData( "md.txt" );
    DeviceAttributes *da = new DeviceAttributes(dataList);
    QList<QPair<QString,QString>> n = da->system_model(ent);
    int qtd =  n.length();
    EXPECT_LT(0 , qtd);
}
TEST (deviceAttributes , systemId){
    Entry ent = getEntry();

    DataList dataList = getData( "md.txt" );
    DeviceAttributes *da = new DeviceAttributes(dataList);
    QPair<QString,QString> n = da->system_id(ent);
    //int qtd =  n.first;
    EXPECT_EQ( n.second , ent.getValue() );
}
//TEST (deviceAttributes , systemType){
//    Entry ent = getEntry();

//    DataList dataList = getData();
//    DeviceAttributes *da = new DeviceAttributes(dataList);
//    QPair<QString,QString> n = da->system_type(ent);
//    int qtd =  n.length();
//    EXPECT_LT(0 , qtd);
//}



// testa o método parse_metadata de Entry
TEST( parseMetaData, positive ){
    QDomDocument doc = getEmptyDoc();

    QDomElement el = getElement( "NAME" );
    el.setAttribute( QString("name"), QString("NAME") );
    el.appendChild( doc.createTextNode( "TEXT" ) );

    Entry entry( el );

    EXPECT_EQ( "NAME", entry.parse_metadata( el ).first );
    EXPECT_EQ( "TEXT", entry.parse_metadata( el ).second );
}
TEST( parseMetaData, negative ){
    QDomElement el = getElement( "NAME" );
    el.setAttribute( QString("name"), QString("NAME") );

    Entry entry( el );

    EXPECT_NE( "", entry.parse_metadata( el ).first );
    EXPECT_EQ( "", entry.parse_metadata( el ).second );
}
TEST( parseName, positive ){
    QDomElement el = getElement( "Super" );
    QDomElement n = getElement( "name" );
    el.appendChild( n );
    Entry entry( el );

    EXPECT_EQ( "", entry.parse_name(el) );

    n.appendChild( getEmptyDoc().createTextNode( "NAME_TEXT" ) );
    EXPECT_EQ( "NAME_TEXT", entry.parse_name(el) );

}
TEST( detectType, positive ){
    QDomElement el = getEmptyDoc().createElement( "ELEMENT" );
    QDomElement simple = getEmptyDoc().createElement( "simple" );
    QDomElement compound = getEmptyDoc().createElement( "compound" );

    Entry entry(el);

    el.appendChild( simple );
    ASSERT_EQ( simple, entry.detect_type(el).second );
    ASSERT_FALSE( entry.detect_type(el).first );

    el.appendChild( compound );
    ASSERT_EQ( compound, entry.detect_type(el).second );
    ASSERT_TRUE( entry.detect_type(el).first );

    el.removeChild( el.firstChild() );
    el.removeChild( el.firstChild() );

    ASSERT_EQ( getEmptyDoc().createElement(""), entry.detect_type(el).second );

    QDomElement l = getEmptyDoc().createElement( "NODE" );
    el.appendChild( l );
    ASSERT_NE( l, entry.detect_type(el).second );

}

TEST( parse_simple, positive ){
    QDomElement el = getEmptyDoc().createElement( "SOME" );
    QDomElement v = getEmptyDoc().createElement( "value" );
    QDomElement t = getEmptyDoc().createElement( "type" );

    v.appendChild( getEmptyDoc().createTextNode( "VALUE_TEXT" ) );
    t.appendChild( getEmptyDoc().createTextNode( "TYPE_TEXT" ) );
    el.appendChild( v );
    el.appendChild( t );
    Entry entry( el );

    ASSERT_TRUE( entry.parse_simple(el).first.operator ==( "TYPE_TEXT" ) );
    ASSERT_TRUE( entry.parse_simple(el).second.operator ==( "VALUE_TEXT" ) );

    el.removeChild( el.firstChild() );
    ASSERT_TRUE( entry.parse_simple(el).second.operator ==( "" ) );
}

TEST( DataList, getEntries ){
    const DataList d = getData( "md.txt" );
    const QString st( "code" );

    qDebug() << d.getEntries().at(0).getValue() ;

    ASSERT_FALSE( d.getEntries().isEmpty() );
}

TEST( getEntries, EntryClass ){
    const DataList d = getData( "configurations.xml" );

    ASSERT_EQ( 1, d.getEntries().size() );
    ASSERT_EQ( "Numeric", d.getEntries().first().getName() );
}



/*
*   Testes da Classe Configuration
*/

TEST( describe, testDescribeM ){
    const DataList data = getData( "configurations.xml" );
    Configuration con = Configuration( data );

    ASSERT_EQ( "1731", con.describe().at( 0 ).second );
}
/* FIM Configuration*/


/*
* Testes Classe Measurement
*/

//TEST/*( unit, testUnit ){
//    const DataList data = getData( "measurements.xml" );
//    Entry entry = data.getEntries().at( 0 );
//    Measurement ms = Measurement( data );

//    qDebug() << ms.unit( entry );

//    ASSERT_TRUE( ms.unit( entry.getEntries().at(1) ).length() > 7 );
//}*/

TEST( compound_basic_nu, measurement ){
    const DataList data = getData( "measurements.xml" );
    Entry entry = data.getEntries().at( 0 );
    Measurement ms = Measurement( data );

    ASSERT_TRUE( ms.compound_basic_nu( entry ).first.length() > 2 );
}
TEST( absolute_timestamp, measurement ){
    const DataList data = getData( "measurement_com.xml" );
    Entry entry = data.getEntries().at( 0 );
    Measurement ms = Measurement( data );

    ASSERT_TRUE( ms.absolute_timestamp( entry.getEntries().at(1) ).first.length() > 10 );
}



int main(int argc, char *argv[])
{
    testing::InitGoogleTest( &argc, argv );
    return RUN_ALL_TESTS();
}
