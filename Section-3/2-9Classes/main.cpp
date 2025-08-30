#include <iostream>

class Rectangle{
public:
    void set_width(double width);
    void set_height(double height);
    double get_area()const;
private:
    double m_width;
    double m_height;
};

void Rectangle::set_width(double width)
{
    m_width = width;
}

void Rectangle::set_height(double height)
{
    m_height = height;
}

double Rectangle::get_area()const{
    return m_width * m_height;
}

int main()
{
    Rectangle rectangle;
    rectangle.set_width(30.0);
    rectangle.set_height(40.0);
    std::cout << "Rectangle : " << rectangle.get_area() << std::endl;
    return 0;
}
