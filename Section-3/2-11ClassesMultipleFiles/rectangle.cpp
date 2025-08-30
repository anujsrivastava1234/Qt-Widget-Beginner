#include "rectangle.h"

Rectangle::Rectangle() {
    std::cout << "No params constructor called" << std::endl;
}

Rectangle::Rectangle(double width, double height)
{
    std::cout << "Rect:::Params constructor called" << std::endl;
    m_width = width;
    m_height = height;
}

void Rectangle::set_width(double width)
{
    m_width = width;
}

void Rectangle::set_heigth(double height)
{
    m_height = height;
}

double Rectangle::get_area()
{
    return m_width * m_height;
}

