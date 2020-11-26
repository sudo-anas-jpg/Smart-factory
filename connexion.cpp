#include "connexion.h"

// Test Tutoriel Git

connexion::connexion()
{

}

bool connexion::creat_cnx(){


    bool test=false;
    QSqlDatabase db=QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("factory");
    db.setUserName("anass");
    db.setPassword("anass");

    if(db.open())
        test=true;


    return test;



}
