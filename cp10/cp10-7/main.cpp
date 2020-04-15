//main.cpp
#include "betelgeusean_plorg.h"
#include <iostream>
int main()
{
    Plorg p1;
    std::cout << "P1 infomation# ";
    p1.show();

    Plorg p2("user1", 25);
    std::cout << "P2 infomation# ";
    p2.show();

    p1.setCI(30);
    std::cout << "P1 set CI# ";
    p1.show();

    std::cout << "P3 infomation# ";
    Plorg p3("hfaohfoahfohafafaffgad", 20);
    p3.show();

    system("pause");
    return 0;
}