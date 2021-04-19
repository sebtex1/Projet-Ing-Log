#include "mainwindow.h"
#include "bdd.h"

#include <QApplication>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    QString path = "D://Workspace//Projet-Ing-Log//pathfinder_database.db";     //Chemin BDD//
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(path);
    sqlitedb.open();
    QList list = sqlitedb.tables();
    cout << "tables:" << endl;
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << it -> toStdString() << endl;
    }

    if(sqlitedb.open()){
        cout << "SUCCESS" << endl;
    }else{
        cout << "FAILED" << endl;
    }

    // qry.exec("SELECT * from niveaux;")


    return a.exec();
}
