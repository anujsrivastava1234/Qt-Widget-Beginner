#include "house.h"

House::House(QObject *parent, const QString &descr)
    : QObject{parent}, m_descr(descr)
{
    qDebug() << "House Object constructed : " << m_descr;
}

House::~House()
{
    qDebug() << "House Object Destroyed : " << m_descr;
}

void House::get_info()
{
    qDebug() << "Info : " << m_descr;
}


