//main.cpp
#include "coordinate.h"
#include <iostream>

int main()
{
    Move mv1(2.3, 4.5);
    Move mv2(1.8, 9.7), mv3;
    std::cout << "mv1初始化的值：";
    mv1.showmove();
    std::cout << "mv2初始化的值：";
    mv2.showmove();

    std::cout << "mv3的值(mv2调用add mv1)：";
    mv3 = mv2.add(mv1);
    mv3.showmove();

    std::cout << "重置mv3后的值：";
    mv3.reset();
    mv3.showmove();

    system("pause");
    return 0;
}