//complex0.h
#ifndef COMPLEX0_H_
#define COMPLEX0_H_
#include <iostream>

class Complex
{
private:
    double real;
    double imag;

public:
    Complex();
    Complex(double r, double i);
    ~Complex();
    Complex operator+(const Complex &c) const;
    Complex operator-(const Complex &c) const;
    Complex operator*(const Complex &c) const;
    friend Complex operator*(const int x, const Complex &c);
    friend Complex operator~(const Complex &c);
    friend std::ostream &operator<<(std::ostream &os, const Complex &c);
    friend std::istream &operator>>(std::istream &is, Complex &c);
};

#endif // !COMPLEX0_H_
