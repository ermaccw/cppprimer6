//list.cpp
#include "list.h"
#include <iostream>

List::List()
{
    top = 0;
}

bool List::isempty() const
{
    return top == 0;
}
bool List::isfull() const
{
    return top == NUM;
}
void List::additem(const Item &it)
{
    if (!isfull())
        items[top++] = it;
    else
        std::cout << "列表已满!\n";
}
void List::show() const
{
    if (!isempty())
    {
        for (int i = 0; i < top; i++)
        {
            std::cout << "user:" << items[i].name << " age:"
                      << items[i].age << std::endl;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "列表是空的！\n";
}

void List::visit(void (*pf)(Item &it))
{
    for (int i = 0; i < top; i++)
        pf(items[i]);
}

void setitem(Item &it)
{
    it.name = "Mr." + it.name;
}