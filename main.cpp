// main.cpp
#include "stock10.h"
#include <iostream>

int main()
{
    using std::cout;
    Stock stock1;
    stock1.show();
    Stock stock2("User1", 15, 23.6);
    stock2.buy(3, 10.6);
    stock2.show;
    system("pause");
    return 0;
}