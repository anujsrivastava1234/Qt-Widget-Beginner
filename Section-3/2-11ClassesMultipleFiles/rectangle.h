#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

class Rectangle
{
public:
    Rectangle();
    Rectangle(double width, double length);
    double get_area();
    void set_width(double width);
    void set_heigth(double height);

private:
    double m_width;
    double m_height;
};

#endif // RECTANGLE_H
