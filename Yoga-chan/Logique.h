using namespace std;
#include "connexion.h"

class Logique{
  
  public:
  
  QList<QList<Fichier>> ListeFichiers;
  Qlist<QString> ListeNoms;
  Connexion C;
  
  Logique(QList<QList<Fichier>> lf, QList<QString> ln, Connexion co);
  
  void Ajout(Fichier f); // Ajoute un fichier dans notre dossier
  void Suppression(Fichier f); // Supprime un fichier de notre dossier
  void update(Fichier f); // Supprime puis ajoute le fichier modifié
  void ajoutIP(); // Ajoute notre ip dans le fichier
  void retraitIP(); // retire l'ip dans le fichier
  void verifNosFichiers(); // vérifie que tous nos fichiers sont bien disponibles
  void recupFichiersAutres(): // récupère la liste des fichiers des autres utilisateurs
  void download(Fichier f);
  void upload (Fichier f);
}