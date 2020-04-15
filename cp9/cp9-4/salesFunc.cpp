//salesFunc.cpp
#include "salesInc.h"
#include <iostream>

namespace SALES
{
using std::cin;
using std::cout;
using std::endl;
//非交互式
void setSales(Sales &s, const double ar[], int n)
{
    double tempTotal = 0, tempMax = 0, tempMin = ar[0];
    for (int i = 0; i < n; i++)
    {
        s.sales[i] = ar[i];
        tempTotal += s.sales[i];
        if (tempMax < s.sales[i])
            tempMax = s.sales[i];
        if (tempMin > s.sales[i])
            tempMin = s.sales[i];
    }
    s.average = tempTotal / n;
    s.max = tempMax;
    s.min = tempMin;
}
//交互式
void setSales(Sales &s)
{
    cout << "Enter sales for 4 quarters:";
    double tempTotal = 0, tempMax = 0;
    for (int i = 0; i < QUARTERS; i++)
    {
        cin >> s.sales[i];
        tempTotal += s.sales[i];
        if (tempMax < s.sales[i])
            tempMax = s.sales[i];
    }
    double tempMin = s.sales[0];
    for (int i = 1; i < QUARTERS; i++)
    {
        if (tempMin > s.sales[i])
            tempMin = s.sales[i];
    }
    s.average = tempTotal / QUARTERS;
    s.max = tempMax;
    s.min = tempMin;
}
void showSales(const Sales &s)
{
    for (int i = 0; i < QUARTERS; i++)
        cout << "Quarter " << i + 1 << ": " << s.sales[i] << endl;
    cout << "Average: " << s.average << endl;
    cout << "Max: " << s.max << endl;
    cout << "Min: " << s.min << endl;
}
} // namespace SALES