#include <iostream>
#include <stdlib.h>
#include <ctime>

int main()
{
    //intialize random number -> rand will not work before this srand call as it seeds from 1
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    int result = std::rand() % 10 + 1;
    std::cout << "number " << result << std::endl;
    std::cout << "RAND_MAX : " << RAND_MAX << std::endl;

    int guess_number {0};
    do{
        std::cout << "Guess the number : ";
        std::cin >> guess_number;
        if(guess_number < result)
        {
            std::cout << "Number is much higher than that" << std::endl;
        }

        if(guess_number > result)
        {
            std::cout << "Number is much lower than that" << std::endl;
        }
    }while(guess_number != result);
    std::cout << "Congratulations! you guessed the number right!!" << std::endl;

    return 0;
}
