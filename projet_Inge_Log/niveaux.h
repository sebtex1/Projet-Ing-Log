#ifndef NIVEAUX_H
#define NIVEAUX_H

#include <QObject>
#include <QDate>

using namespace std;

class niveaux:public QObject
{
    Q_OBJECT
public:
    niveaux();
private:
    int id;
    string name;
    string creator;
    QDate creation;
    QDate lastModication;
    map<int, map<int, string>> composition;
};

#endif // NIVEAUX_H
