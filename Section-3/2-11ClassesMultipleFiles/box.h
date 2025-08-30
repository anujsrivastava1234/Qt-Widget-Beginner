#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "rectangle.h"

class Box
{
public:
    Box(double width, double length, double height);
    double get_volume();
private:
    Rectangle rectangle;
    double m_height;
};

#endif // BOX_H
