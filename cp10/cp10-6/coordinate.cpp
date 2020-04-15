//coordinate.cpp
#include "coordinate.h"
#include <iostream>
Move::Move(double a, double b)
{
    x = a;
    y = b;
}
void Move::showmove() const
{
    std::cout << "x:" << x << " y:" << y << std::endl;
}
Move Move::add(const Move &m) const
{
    Move tempmv(this->x + m.x, this->y + m.y);
    return tempmv;
}
void Move::reset(double a, double b)
{
    x = a;
    y = b;
}