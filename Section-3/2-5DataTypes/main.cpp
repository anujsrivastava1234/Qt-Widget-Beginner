#include <QCoreApplication>
#include <QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::string hello = "Hello, World!";
    int count = 8;

    std::cout << "The message is : " << hello << std::endl;
    std::cout << "The count is : " << count << std::endl;

    std::cout <<"--------------------------------------------------" << std::endl;

    //data types size
    std::cout << "Size of int : " << sizeof(int) << std::endl;
    std::cout << "Size of float : " << sizeof(float) << std::endl;
    std::cout << "Size of bool : " << sizeof(bool) << std::endl;
    std::cout << "Size of double : " << sizeof(double) << std::endl;
    std::cout << "Size of char : " << sizeof(char) << std::endl;
    std::cout << "Size of wchar_t : " << sizeof(wchar_t) << std::endl;

    //Unsigned (positive only)
    unsigned int var1 = -200;
    std::cout << "var1 is : " << var1 << std::endl;
    return a.exec();
}
