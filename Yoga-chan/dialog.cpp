#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QString path = QCoreApplication::applicationDirPath();//Pour connaître le répertoire du programme
    path += "/yogachanDB.sqlite";
    maBDD = QSqlDatabase::addDatabase("QSQLITE");
    maBDD.setDatabaseName(path);

    QFileInfo verifier_BDD(path);

    if(!verifier_BDD.isFile()){
        QMessageBox::warning(this, "Warning", "Base de donnée inexistante");
        this->close();
    }
    else
        if(maBDD.open()){}
    else
        QMessageBox::warning(this, "Warning", "Erreur lors du chargement de la base de donnée");

}

Dialog::~Dialog()
{
    delete ui;
    maBDD.close();
}

void Dialog::on_btn_ok_clicked()
{

    QString nom, mdp;
    nom = ui->edit_user->text();
    mdp = ui->edit_passwd->text();
   if(!maBDD.isOpen()){
        QMessageBox::warning(this, "Echec !", "Base de donnée non ouverte");
    }
    QSqlQuery requette;
    if(requette.exec("SELECT username, password FROM userInfo WHERE username='" + nom +
                     "' AND password='" + mdp + "'")){
        if(requette.next()){
            QMessageBox::warning(this, "Réussite !", "Connexion réussie");
            //Si le compte existe, on ouvre la 2ème fenêtre
            this->close();
            MainWindow* MW = new MainWindow(nom, this);
            MW->show();
        }else{
            QMessageBox::warning(this, "Echec !", "Mauvais mot de passe ou nom");
        }
    }

}
