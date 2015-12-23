using namespace std;

class Fichier{

  // CODE NON TESTE
  
public :
  QString nom();
  QString chemin();
  QString format();
  int taille = 0;
  QDate date(1,1,1);
  
  Fichier(String n, String f, int t, QDate d);
  
  Fichier(String n, String c, String f, int t, QDate d);
  
  bool equals(Fichier f);
  

}