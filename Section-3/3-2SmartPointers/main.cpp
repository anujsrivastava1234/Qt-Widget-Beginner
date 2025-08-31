#include <QCoreApplication>
#include "house.h"

void do_stuff()
{
    //Stack
    /*
    House h1(nullptr, "First");
    h1.print_info();
    */

    //Heap
    House *p_h1 = new House(nullptr, "Second");
    p_h1->print_info();
    delete p_h1;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do_stuff();

    qDebug() << "Done!";

    return a.exec();
}
