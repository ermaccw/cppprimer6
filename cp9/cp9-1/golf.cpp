//golf.cpp
#include <iostream>
#include <cstring>
#include "golf.h"
//非交互版本-用户信息以参数形式传递
void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}
//交互版本-标准输入输入用户信息
int setgolf(golf &g)
{
    std::cout << "Enter your name: ";
    std::cin.get(g.fullname, Len);
    if (g.fullname[0] != '\n')
    {
        std::cout << "Enter your handicap: ";
        std::cin >> g.handicap;
        return 1;
    }
    else
        return 0;
}
//重置用户等级
void handicap(golf &g, int hc)
{
    g.handicap = hc;
}
//显示用户内容
void showgolf(const golf &g)
{
    std::cout << g.fullname << " rank: " << g.handicap << std::endl;
}