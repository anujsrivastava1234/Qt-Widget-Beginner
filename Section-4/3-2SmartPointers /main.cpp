#include <QCoreApplication>
#include <memory.h>
#include "house.h"

void do_stuff()
{
    //Stack
    /*
    House h1(nullptr, "First");
    h1.print_info();
    */

    //Heap
    /*
    House *p_h1 = new House(nullptr, "Second");
    p_h1->print_info();
    delete p_h1;
    */

    //! Smart Pointers
    // Unique Pointers
    std::unique_ptr<House> up_prt1(new House(nullptr, "Third"));
    up_prt1->print_info();

    // std::unique_ptr<House> up_ptr2 = up_prt1;

    //Shared Pointer
    std::shared_ptr<House> shr_ptr1(new House(nullptr, "Fourth"));
    shr_ptr1->print_info();

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    do_stuff();

    qDebug() << "Done!";

    return a.exec();
}
