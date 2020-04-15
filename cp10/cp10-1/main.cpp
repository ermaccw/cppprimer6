// main.cpp
#include "bank.h"
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;

    Depositor user1 = Depositor("Steve Jobs", "stevej", 132.68);
    Depositor user2("Bill Gates", "billg", 378.23);

    user1.show();
    user2.show();

    std::cout << "\n用户 Steve Jobs 将存入200\n";
    user1.depositin(200.0);
    user1.show();

    std::cout << "\n用户Bill Gates 将取出500\n";
    user2.withdraw(500);
    user2.show();

    std::cout << "\n用户Bill Gates 将取出100\n";
    user2.withdraw(100);
    user2.show();

    system("pause");
    return 0;
}