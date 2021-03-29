#ifndef BDD_H
#define BDD_H

#include <QMainWindow>

#include <QFile>
#include <QIODevice>
#include <QTextStream>
#include <QTextBrowser>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QString>
#include <QDebug>

#include <iostream>
using namespace std;

class bdd : public QMainWindow
{
    Q_OBJECT
public:
    explicit bdd(QWidget *parent = nullptr);

signals:

};

#endif // BDD_H
