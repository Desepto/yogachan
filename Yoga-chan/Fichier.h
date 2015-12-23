#include <QDate>

class Fichier{

  // CODE NON TESTE
public :
  QString nom;
  QString chemin;
  QString format;
  int taille;
  QDate date;


  Fichier();
  
  Fichier(QString n, QString f, int t, QDate d);
  
  Fichier(QString n, QString c, QString f, int t, QDate d);
  
  bool equals(Fichier f);
  

};
