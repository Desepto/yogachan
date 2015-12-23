#include <QDate>

class Fichier{

  // CODE NON TESTE

  QString nom;
  QString chemin;
  QString format;
  int taille;
  QDate date(1,1,1);

public :
  Fichier(QString n, QString f, int t, QDate d);
  
  Fichier(QString n, QString c, QString f, int t, QDate d);
  
  bool equals(Fichier f);
  

};
