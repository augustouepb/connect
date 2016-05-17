QDomDocument *getDoc(){// carrega o xml e retorna um QDomElement com o root
    QDomDocument *doc = new QDomDocument( "Configurations" );
    QFile file( "/home/romildo/Projects/Nutes/files/m1" );
    doc->setContent( &file );

    file.close();
    qDebug() << doc->toString();
    return doc;
}
