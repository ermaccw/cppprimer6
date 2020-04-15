//main.cpp
#include "list.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    Item it1 = {"user1", 18};
    Item it2 = {"user2", 28};
    List lst;
    lst.show();

    std::cout << "Add user1:\n";
    lst.additem(it1);
    lst.show();

    std::cout << "Add user2:\n";
    lst.additem(it2);
    lst.show();

    std::cout << "所有用户名称前加称谓：\n";
    lst.visit(setitem);
    lst.show();

    system("pause");
    return 0;
}