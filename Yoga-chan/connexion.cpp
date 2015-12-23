#include "connexion.h"

Connexion::Connexion(QString adresseFTP)
{
    QNetworkRequest req(QUrl(adresseFTP));
    QNetworkReply* rep = this->nam.get(req);

    while (!rep->isFinished()){
        rep->waitForReadyRead(3000);
        QApplication::processEvents();
       }

        QString contenu = rep->readAll();
        qDebug() << contenu;
}
