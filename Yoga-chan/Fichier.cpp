using namespace std;

class Fichier{

public :
  QString nom();
  QString chemin();
  QString format();
  int taille = 0;
  QDate date(1,1,1);
  
  Fichier(String n, String f, int t, QDate d){
    this->nom = n;
    this->format = f;
    this->taille = t;
    this->date = d;
  }
  
  Fichier(String n, String c, String f, int t, QDate d){
    this->nom = n;
    this->chemin = c;
    this->format = f;
    this->taille = t;
    this->date = d;
  }
  
  bool equals(Fichier f){
    if(this->nom != f.nom || this->format != f.format || this->chemin != f.chemin || this.format != f.format || this.taille != f.taille || this.date != f.date)
      return false;
    return true;
  }
  

}