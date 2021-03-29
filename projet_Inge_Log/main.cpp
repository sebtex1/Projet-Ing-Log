#include "mainwindow.h"
#include "wall.h"

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
    return a.exec();
}
