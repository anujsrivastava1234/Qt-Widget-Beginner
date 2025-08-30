#include <iostream>
#include "rectangle.h"
#include "box.h"

int main()
{
    Rectangle *r1 = new Rectangle(10.3, 20.0);
    std::cout << r1->get_area() << std::endl;
    delete r1;

    Box *cube = new Box(10.2,11.2, 23.3);
    std::cout << "Volume : " << cube->get_volume() << std::endl;
    return 0;
}
