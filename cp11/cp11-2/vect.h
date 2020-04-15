//vect.h
#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
#include <cmath>
using std::atan2;
using std::sqrt;

namespace VECTOR
{
class Vector
{
public:
    enum Mode
    {
        RECT,
        POL
    };

private:
    double x;
    double y;
    double mag() const { return sqrt(x * x + y * y); }
    double ang() const { return (x == 0.0 && y == 0.0) ? 0.0 : atan2(y, x); }
    Mode mode;

public:
    Vector();
    Vector(double n1, double n2, Mode form = RECT);
    void reset(double n1, double n2, Mode form = RECT);
    ~Vector();
    double xval() const { return x; }
    double yval() const { return y; }
    double magval() const { return mag(); }
    double angval() const { return ang(); }
    void polar_mode();
    void rect_mode();
    Vector operator+(const Vector &b) const;
    Vector operator-(const Vector &b) const;
    Vector operator-() const;
    Vector operator*(double n) const;
    friend Vector operator*(double n, const Vector &a);
    friend std::ostream &operator<<(std::ostream &os, const Vector &v);
    operator double() const;
};
} // namespace VECTOR
#endif // !VECTOR_H_