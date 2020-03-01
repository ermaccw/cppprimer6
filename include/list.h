//10-8
//list.h
#ifndef LIST_H_
#define LIST_H_
#include <string>

struct Userinfo
{
    std::string name;
    int age;
};
typedef Userinfo Item;

class List
{
private:
    static const int NUM = 5;
    Item items[NUM];
    int top;

public:
    List();
    bool isempty() const;
    bool isfull() const;
    void additem(const Item &it);
    void show() const;
    void visit(void (*pf)(Item &));
};

void setitem(Item &it);
#endif // !LIST_H_
