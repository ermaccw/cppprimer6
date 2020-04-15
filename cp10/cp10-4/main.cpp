//main.cpp
#include "salesInc.h"
#include <iostream>

int main()
{
    double qt[3] = {407.919, 605.599, 402.165};
    SALES::Sales s1(qt, 3); //非交互式
    std::cout << "Display s1 contents:\n";
    s1.showSales();
    std::cout << std::endl;

    SALES::Sales s2(s2); //交互式
    std::cout << std::endl;
    std::cout << "Display s2 contents:\n";
    s2.showSales();

    std::system("pause");
    return 0;
}