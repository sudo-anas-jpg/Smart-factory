 #include "produit.h"

produit::produit()
{

}
produit::produit(int i,int n,QString m)
{

    id=i;
    prix=n;
    nom=m;


}
bool produit::ajouter()
{

    QSqlQuery query;
    query.prepare("INSERT INTO MATIEREPRIMAIRE (id,prix,nom) VALUES (:id,:prix,:nom)");
    QString res= QString::number(id);
    query.bindValue(":id",res);
    query.bindValue(":prix",prix);
    query.bindValue(":nom",nom);
    return query.exec();
}
