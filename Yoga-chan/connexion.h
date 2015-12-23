#ifndef CONNEXION_H
#define CONNEXION_H

#include <QtGui/QApplication>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QDebug>

class Connexion
{
public:
    Connexion(QString adresseFTP);
    QNetworkAccessManager nam;
};

#endif // CONNEXION_H
