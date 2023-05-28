#include "Point.hpp"

static Fixed sign (Point p1, Point p2, Point p3)
{
    return (p1.get_x() - p3.get_x()) * (p2.get_y() - p3.get_y()) - (p2.get_x() - p3.get_x()) * (p1.get_y() - p3.get_y());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    bool b1, b2, b3;
    Fixed tmp = Fixed(0);

    b1 = sign(point, a, b) < tmp;
    b2 = sign(point, b, c) < tmp;
    b3 = sign(point, c, a) < tmp;

    return ((b1 == b2) && (b2 == b3) && (sign(point, a, b) != tmp));
}
