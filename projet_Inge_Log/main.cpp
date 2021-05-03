#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QList>
#include "bdd.h"
#include "labyrinth.h"
#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *window = new MainWindow();
    window->show();

    QString path = "D://Workspace//Projet-Ing-Log//AStarBDD.db";     //Chemin BDD//
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName(path);
    sqlitedb.open();
    QList<QString> list = sqlitedb.tables();
    // test pour vérifier la connexion à la BDD
    cout << "tables:" << endl;
    for (auto it = list.begin(); it != list.end(); it++) {
        cout << it -> toStdString() << endl;
    }

    if(sqlitedb.open()){
        cout << "SUCCESS" << endl;
    }else{
        cout << "FAILED" << endl;
    }

    return a.exec();
}
