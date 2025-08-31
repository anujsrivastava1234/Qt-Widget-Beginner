#include "house.h"

House::House(QObject *parent, const QString &descr)
    : QObject{parent}, m_desrc(descr)
{
    qDebug() << "House OBject Constructed" ;
}


House::~House()
{
    qDebug() << "House object destroyed : " << m_desrc;
}

void House::print_info()
{
    qDebug() << "House : " << m_desrc;
}

