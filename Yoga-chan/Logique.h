using namespace std;
#include "connexion.h"

class Logique{
  
  public:
  
  QList<QList<Fichier>> ListeFichiers;
  Qlist<QString> ListeNoms;
  Connexion C;
  
  Logique(QList<QList<Fichier>> lf, QList<QString>, Connexion co);
  
}