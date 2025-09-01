#ifndef PERSON_H
#define PERSON_H

#include <QObject>

class Person : public QObject
{
public:
    Person();

public:
    double weight()const;
    void setWeight(double weight);
signals:
    void on_weight_changed();
private:
    double m_weight = 0.0;
};

#endif // PERSON_H
