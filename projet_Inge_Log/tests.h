#ifndef TESTS_H
#define TESTS_H

#include <QObject>
#include <QTimer>
#include <QPushButton>
#include <QString>
#include <QDate>

class Tests : public QObject
{
    Q_OBJECT

public:
   explicit Tests(QObject *parent = 0);

   void setResult(bool res){
       result = res;
   }

   bool getResult(){
       return result;
   }

private:
   QTimer *m_Timer;
   QString *m_Name;
   QDate *m_Date;
   bool result;

};

#endif // TESTS_H
