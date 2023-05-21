#include<string>
#include<iostream>
#include<math.h>
#include "Fixed.hpp"

class Point
{
    private:
    Fixed _x;
    Fixed _y;
    public:
    Point();
    Point(const float a, const float b);
    Point(const Point   &PointClass);
    Point &operator=(const Point &PointClass);
    Fixed get_x(void);
    Fixed get_y(void);
    ~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
