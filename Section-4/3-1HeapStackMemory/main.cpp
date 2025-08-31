#include <QCoreApplication>
#include "house.h"

void do_stuff()
{
    //Stack Intialization
    House h1(nullptr, "First");
    h1.get_info();

    //Heap Intialization
    House *h2 = new House(nullptr, "Second");
    h2->get_info();
    delete h2;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Function call
    do_stuff();

    qDebug() << "Done!";
    return a.exec();
}
