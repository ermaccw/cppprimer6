//betelgeusean_plorg.cpp
#include "betelgeusean_plorg.h"
#include <iostream>
#include <cstring>

Plorg::Plorg(const char *ar, int num)
{
    if (std::strlen(ar) > 20)
    {
        std::cout << "名称字符请勿超过19个！操作失败\n";
        exit(0);
    }
    else
    {
        std::strcpy(name, ar);
        CI = num;
    }
}

void Plorg::setCI(int num)
{
    CI = num;
}

void Plorg::show() const
{
    std::cout << "name:" << name << " CI:" << CI << std::endl;
}