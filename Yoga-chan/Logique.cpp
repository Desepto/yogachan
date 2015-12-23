#include "Logique.h"

Logique::Logique(QList<QList<Fichier>> lf, QList<QString> ln, Connexion co){
  this->ListeFichiers = lf;
  this->ListeNoms = ln;
  this->connexion = co;
  
}
