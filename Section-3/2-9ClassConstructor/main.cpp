#include <iostream>

//Class Rectangle

class Rectangle{
public:
    Rectangle();
    Rectangle(double width, double height);
public:
    void set_width(double width);
    void set_height(double height);
    double get_area()const;
    double get_height();
    double get_width();
private:
    double m_width;
    double m_height;
};

Rectangle::Rectangle()
{
    std::cout << "No params contructor called" << std::endl;
}

Rectangle::Rectangle(double width, double height)
{
    m_width = width;
    m_height = height;
}


//class Box
class Box{
public:
    Box();
    Box(double width, double height, double length);
    void set_length(double length);

    double get_Volume();
private:
    Rectangle rectangle;
    double m_length;
};

Box::Box()
{
    std::cout << "No params Box constructor" << std::endl;
}

Box::Box(double width, double height, double length) : rectangle(width, height), m_length(length) //Intialize list
{
    std::cout << "Contrcutor params" << std::endl;
    std::cout << "Width : " << width << std::endl;
    std::cout << "Height : " << height << std::endl;
    std::cout << "length : " << length << std::endl;
}

void Rectangle::set_width(double width)
{
    this->m_width = width;
}

void Rectangle::set_height(double height){
    this->m_height = height;
}

double Rectangle::get_area()const{
    return m_width * m_height;
}

double Rectangle::get_width()
{
    return this->m_width;
}

double Rectangle::get_height()
{
    return this->m_height;
}

double Box::get_Volume()
{
    return rectangle.get_area() * m_length;
}

void Box::set_length(double length){
    this->m_length = length;
}

int main()
{
    Rectangle r(10.0, 34.4);
    std::cout << r.get_width() << std::endl;
    std::cout << r.get_height() << std::endl;

    Rectangle r1;
    r1.set_width(3.4);
    r1.set_height(4.5);
    std::cout << "Width : " << r1.get_width() << std::endl;
    std::cout << "Height : " << r1.get_height() << std::endl;
    std::cout << "Area : " << r1.get_area() << std::endl;

    Box b2(10,20, 40);
    std::cout << "Volume : " << b2.get_Volume() << std::endl;


    return 0;
}
