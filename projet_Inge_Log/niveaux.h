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
    string Name;
    string Creator;
    QDate Creation;
    QDate LastModication;
    map<int, map<int, string>> Composition;
};

#endif // NIVEAUX_H
