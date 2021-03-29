#include "mainwindow.h"
#include "wall.h"
#include "bdd.h"

#include <QApplication>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    wall wall;
    string var = wall.getEffect();
    MainWindow w;
    w.show();

    QString path = "D://Workspace//Projet-Ing-Log//eae.db";     //Chemin BDD//
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(path);
    sqlitedb.open();

    if(sqlitedb.open()){
        cout << "SUCCESS" << endl;
    }else{
        cout << "FAILED" << endl;
    }


    return a.exec();
}
