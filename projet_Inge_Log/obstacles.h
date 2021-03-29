#ifndef OBSTACLES_H
#define OBSTACLES_H

#include <QObject>

using namespace std;

class Obstacles : public QObject
{
    Q_OBJECT
public:
    explicit Obstacles(QObject *parent = nullptr);

    void setCrossable(bool s) {
        crossable = s;
    }
    void setEffect(string s) {
        effect = s;
    }
    void setName(string s) {
        name = s;
    }
    void setAppearance(string s) {
        appearance = s;
    }
    void setMinimum(int s) {
        minimum = s;
    }
    void setMaximum(int s) {
        maximum = s;
    }

    bool getCrossable() {
        return crossable;
    }
    string getEffect() {
        return effect;
    }
    string getName() {
        return name;
    }
    string getAppearance() {
        return appearance;
    }
    int getMinimum() {
        return minimum;
    }
    int getMaximum() {
        return maximum;
    }

private:
    bool crossable;
    string effect;
    string name;
    string appearance;
    int minimum;
    int maximum;

signals:

};

#endif // OBSTACLES_H
