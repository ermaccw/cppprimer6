//golf.cpp
#include <iostream>
#include <cstring>
#include "golf.h"

Golf::Golf()
{
    fullname[0] = '\0';
    handicap = 0;
}
//非交互版本-用户信息以参数形式传递
Golf::Golf(const char *name, int hc)
{
    strcpy(fullname, name);
    handicap = hc;
}
//交互版本-标准输入输入用户信息
Golf &Golf::setgolf()
{
    std::cout << "Enter your name: ";
    std::cin.get(fullname, Len);
    if (fullname[0] != '\n')
    {
        std::cout << "Enter your handicap: ";
        std::cin >> handicap;
        std::cin.get();
    }
    return *this;
}
Golf::~Golf() {}
//重置用户等级
void Golf::sethandicap(int hc)
{
    handicap = hc;
}
//显示用户内容
void Golf::showgolf() const
{
    std::cout << fullname << " rank: " << handicap << std::endl;
}