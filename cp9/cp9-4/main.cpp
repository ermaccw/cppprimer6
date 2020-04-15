//main.cpp
#include "salesInc.h"
#include <iostream>

int main()
{
    SALES::Sales s1, s2;
    double qt[SALES::QUARTERS] = {407.919, 605.599, 402.165, 603.629};
    SALES::setSales(s1, qt, SALES::QUARTERS); //非交互式
    SALES::setSales(s2);                      //交互式

    std::cout << std::endl;
    std::cout << "Display s1 contents:\n";
    SALES::showSales(s1);
    std::cout << std::endl;

    std::cout << "Display s2 contents:\n";
    SALES::showSales(s2);

    system("pause");
    return 0;
}