#include "box.h"

Box::Box(double width, double length, double height) : rectangle(width, length), m_height(height) //Intialize list
{
    std::cout << "Box:::Params constructor called" << std::endl;
}

double Box::get_volume()
{
    return rectangle.get_area() * m_height;
}
