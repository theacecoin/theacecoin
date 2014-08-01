#ifndef ACESEND_H
#define ACESEND_H

#include <QObject>
#include "httpsocket.h"

class acesend : public QObject
{
    Q_OBJECT
public:
    explicit acesend(QObject *parent = 0);
    QString fromAddress;
    QString destinationAddress;
    QString amount;
    QString getAceedAddress(); //returns the aceed address assuming object variables set correctly.
    bool useProxy;
    QString proxyAddress;
    int proxyPort;
signals:

public slots:

private:
    httpsocket *socket;
};

#endif // ACESEND_H
