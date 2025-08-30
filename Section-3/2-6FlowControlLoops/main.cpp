#include <iostream>
#include <chrono>
#include <thread>
int main()
{
    int a = 200;
    int b = 30;

    std::cout << "---------------------------------------" << std::endl;
    std::cout << "a + b " << a + b << std::endl;
    std::cout << "a - b " << a - b << std::endl;
    std::cout << "a * b " << a * b << std::endl;
    std::cout << "a / b " << (float)a / b << std::endl;
    std::cout << "a % b " << a % b << std::endl;


    std::cout << "---------------------------------------" << std::endl;
    if(a == b)
    {
        std::cout << "A is equal to B" << std::endl;
    }else{
        std::cout << "A is not equal to B" << std::endl;
    }


    std::cout << "---------------------------------------" << std::endl;
    for(int i = 0 ; i < 1000 ; i++)
    {
        std::cout << "Hello World!" << std::endl;
        //std::this_thread::sleep_for(std::chrono::seconds(5));
    }

    int i = 1;
    while(i <= 20)
    {
        std::cout << "Hello Anuj" << std::endl;
        i++;
    }

    do{
        std::cout << "Hello World" << std::endl;
        i++;
    }while(i < 100);

    return 0;
}
