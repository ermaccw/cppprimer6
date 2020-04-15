//4-9
#include <cstring>
#include <iostream>
using namespace std;

struct CandyBar
{
    char brand[20];
    double weight;
    int carolet;
};

int main()
{
    CandyBar *snack = new CandyBar[3]{
        {"test1", 1.1, 10},
        {"test2", 2.2, 20},
        {"test3", 3.3, 30}};

    cout << snack->brand << endl;
    cout << (snack + 1)->weight << endl;
    cout << (snack + 2)->carolet << endl;

    delete[] snack;

    system("pause");
    return 0;
}