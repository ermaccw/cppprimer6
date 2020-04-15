//complex0.cpp
#include "complex0.h"
#include <iostream>

Complex::Complex()
{
    real = imag = 0.0;
}

Complex::Complex(double r, double i)
{
    real = r;
    imag = i;
}

Complex::~Complex() {}

Complex Complex::operator+(const Complex &c) const
{
    Complex plus;
    plus.real = real + c.real;
    plus.imag = imag + c.imag;
    return plus;
}

Complex Complex::operator-(const Complex &c) const
{
    Complex minus;
    minus.real = real - c.real;
    minus.imag = imag - c.imag;
    return minus;
}

Complex Complex::operator*(const Complex &c) const
{
    Complex multi;
    multi.real = real * c.real - imag * c.imag;
    multi.imag = real * c.imag + imag * c.real;
    return multi;
}

Complex operator*(const int x, const Complex &c)
{
    Complex rmulti;
    rmulti.real = x * c.real;
    rmulti.imag = x * c.imag;
    return rmulti;
}

Complex operator~(const Complex &c)
{
    Complex conj;
    conj.real = c.real;
    conj.imag = -c.imag;
    return conj;
}

std::ostream &operator<<(std::ostream &os, const Complex &c)
{
    os << "(" << c.real << "," << c.imag << "i)";
    return os;
}

std::istream &operator>>(std::istream &is, Complex &c)
{
    std::cout << "real: ";
    is >> c.real;
    if (!is)
    {
        std::cin.get();
        EXIT_SUCCESS;
    }
    else
    {
        std::cout << "imaginary: ";
        is >> c.imag;
        std::cin.get();
    }

    return is;
}