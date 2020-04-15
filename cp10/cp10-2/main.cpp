//main.cpp
#include "cpp10_2.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");

    std::cout << "one:\n";
    one.Show();
    one.FormalShow();
    cout << endl;

    std::cout << "two:\n";
    two.Show();
    two.FormalShow();
    cout << endl;

    std::cout << "three:\n";
    three.Show();
    three.FormalShow();
    cout << endl;

    system("pause");
    return 0;
}