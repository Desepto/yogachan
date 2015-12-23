#include "connexion.h"

Connexion::Connexion(QString adresseFTP)
{
    //QNetworkRequest req(QUrl(adresseFTP));
    QNetworkRequest req(QUrl("ftp://ftp.qt.nokia.com/mirrors"));
    QNetworkReply* rep = this->nam.get(req);

    while (!rep->isFinished()){
        rep->waitForReadyRead(3000);
        QApplication::processEvents();
    }

    QString contenu = rep->readAll();
    qDebug() << contenu;
}
