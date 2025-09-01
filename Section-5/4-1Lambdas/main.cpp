#include <iostream>

int main()
{
    //lambda function
    /*
     * [captureLists] (parameters list) -> return_value_types {function body}
     */

    auto func = [](){
        std::cout << "Hello , World" << std::endl;
    };


    func();

    //Method 2
    [](){
        std::cout << "Lambda directly after declaration" << std::endl;
    }();

    //with params
    [](int a, int b){
        std::cout << "a + b : " << a + b << std::endl;
    }(7,4);

    //with params with variables
    auto func1 = [](int a, int b) ->int {
        std::cout << " a +  b : " << a + b << std::endl;
        return a + b;
    };

    func1(4,5);

    auto value = func1(7,4);
    std::cout << "The sum is " << value << std::endl;

    //lamda with return type
    std::cout << [](int a, int b) -> int {
        return a + b;
    }(7,3) << std::endl;

    //capturing Lists
    int a = 7;
    int b = 4;

    [a, b]() -> int{
        std::cout << "a + b = " << a + b << std::endl;
        return a + b ;
    }();

    //capture by value
    int c = 42;
    int d = 6;

    auto func3 = [=]()
    {
        std::cout << "The value of inner c : " << c << std::endl;
        std::cout  << "a  : " << a << std::endl;
        std::cout << "b   : "  << b << std::endl;
        std::cout  <<"c  : " << c << std::endl;
        std::cout << "d  : " << d << std::endl;
    };

    for(int i = 0 ; i < 10 ; i++)
    {
        std::cout << "The value of outer c : " << c << std::endl;
        func3();
        c = c + 1;
    }

    //Capture by reference
    auto fun4 = [&]()
    {
        std::cout << "The value of inner c : " << c << std::endl;
    };

    for(int  i = 0 ; i < 5 ; i++)
    {
        std::cout << "The value of outer c : " << c << std::endl;
        c++;
        fun4();
    }



    return 0;
}
