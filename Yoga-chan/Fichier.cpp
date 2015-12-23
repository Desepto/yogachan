#include "Fichier.h"

Fichier::Fichier(){
  this->nom = "";
  this->format = "";
  this->format = "";
  this->taille = 0;
  this->date(1,1,1);
}

Fichier::Fichier(QString n, QString f, int t, QDate d){
    this->nom = n;
    this->format = f;
    this->taille = t;
    this->date = d;
}

Fichier::Fichier(QString n, QString c, QString f, int t, QDate d){
    this->nom = n;
    this->chemin = c;
    this->format = f;
    this->taille = t;
    this->date = d;
}

bool Fichier::equals(Fichier f){
    if(this->nom != f.nom || this->format != f.format || this->chemin != f.chemin || this.format != f.format || this.taille != f.taille || this.date != f.date)
      return false;
    return true;
}
