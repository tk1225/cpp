#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
}

Point::Point(const Point   &PointClass)
{
    this->_x = PointClass._x;
    this->_y = PointClass._y;
}

Point::Point(const float a, const float b) : _x(Fixed(a)), _y(Fixed(b))
{
}

Point& Point::operator=(const Point &PointClass)
{
    if (this != &PointClass)
    {
        this->_x = PointClass._x;
        this->_y = PointClass._y;
    }
    return *this;
}

Fixed Point::get_x(void)
{
    return (this->_x);
}

Fixed Point::get_y(void)
{
    return (this->_y);
}

Point::~Point()
{
}
