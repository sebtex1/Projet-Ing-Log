#include "widget.h"
#include <QApplication>
#include <QDebug>
#include <QList>
#include "labyrinth.h"
#include "mainwindow.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
