//8-2
#include <iostream>
#include <cstring>
using namespace std;

struct barBar
{
    char name[20];
    double weight;
    int num;
};

void inputbar(barBar &barInfo, char const *barName = "Millennium Munch", double barWeight = 2.85, int barNum = 350);
void showbar(const barBar &barInfo);

int main()
{
    barBar Bar;
    inputbar(Bar);
    showbar(Bar);

    inputbar(Bar, "Bill Gates", 3.99, 250);
    showbar(Bar);

    system("pause");
    return 0;
}

void inputbar(barBar &barInfo, char const *barName, double barWeight, int barNum)
{
    strcpy(barInfo.name, barName);
    barInfo.weight = barWeight;
    barInfo.num = barNum;
}

void showbar(const barBar &barInfo)
{
    cout << "name: " << barInfo.name
         << " weight: " << barInfo.weight
         << " num: " << barInfo.num << endl;
}