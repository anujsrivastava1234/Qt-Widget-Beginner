#include <QCoreApplication>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    std::cout << "Hello, World" << std::endl;
    std::cerr << "There was an error" << std::endl;
    std::clog << "This is a log " << std::endl;

    std::string name;
    std::cout << "Please type in your name :" ;
    std::cin >> name;
    std::cout << "Your name is : " << name << std::endl;
    return a.exec();
}
