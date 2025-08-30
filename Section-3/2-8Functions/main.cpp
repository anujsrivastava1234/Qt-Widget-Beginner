#include <iostream>

int add(int a, int b)
{
    return a + b;
}

void sayHi(){
    std::cout << "Hello" << std::endl;
}

//function overloading
int add(float a, float b)
{
    return a + b;
}

int add(double a, double b)
{
    return a + b;
}

int main()
{
    int a {10};
    int b {20};
    int c {30};
    int result = add(a, b);
    std::cout << "Result : " << result << std::endl;

    int result1 = add(result, c);
    std::cout << "Result : " << result1 << std::endl;

    for(int i = 0 ; i < 20 ; i++)
    {
        sayHi();
    }

    std::cout << "Result : " << add(3.4f, 44.4f) << std::endl;
    std::cout << "Result : " << add(3.3, 4.3) << std::endl;
    return 0;
}
