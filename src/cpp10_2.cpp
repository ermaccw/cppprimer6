// cpp10_2.cpp
#include "cpp10_2.h"
#include <iostream>
#include <cstring>

Person::Person(const string &ln, const char *fn)
{
    lname = ln;
    for (int i = 0; i < strlen(fn); i++)
        fname[i] = fn[i];
}

void Person::Show() const
{
    for (int i = 0; i < strlen(fname); i++)
        std::cout << fname[i];
    std::cout << " " << lname << std::endl;
}

void Person::FormalShow() const
{
    std::cout << lname << " ";
    for (int i = 0; i < strlen(fname); i++)
        std::cout << fname[i];
    std::cout << std::endl;
}