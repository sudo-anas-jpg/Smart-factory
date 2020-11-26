#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QSqlQuery>
#include <QVariant>
#include <QSqlQueryModel>


class produit
{
    int id;
    int prix;
    QString nom;
public:
    produit();
    produit(int,int,QString);
    QString get_nom(){return nom;}
    int get_id(){return id;}
    int get_prix(){return prix;}
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
 };

#endif // PRODUIT_H
