#include "person.h"

Person::Person() {}

double Person::weight() const
{
    return m_weight;
}

void Person::setWeight(double weight)
{
    if(m_weight != weight){
        m_weight = weight;
        emit on_weight_changed();
    }
}
