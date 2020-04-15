//stack.cpp
#include "stack.h"
#include <cstring>
#include <iostream>
Stack::Stack()
{
    items[MAX] = {'\0', 0.0};
    top = 0;
    total = 0.0;
}
bool Stack::isempty() const
{
    return top == 0;
}
bool Stack::isfull() const
{
    return top == MAX;
}
bool Stack::push(const Item &item)
{
    if (top < MAX)
    {
        std::strcpy(items[top].fullname, item.fullname);
        items[top].payment = item.payment;
        top++;
        return true;
    }
    else
        return false;
}
bool Stack::pop(Item &item)
{
    if (top > 0)
    {
        --top;
        total += items[top].payment;
        std::cout << "total: " << total << std::endl;
        std::strcpy(item.fullname, items[top].fullname);
        item.payment = items[top].payment;
        return true;
    }
    return false;
}
Stack::~Stack(){};