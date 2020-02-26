//salesFunc.cpp
#include "salesInc.h"
#include <iostream>
namespace SALES
{
using std::cin;
using std::cout;
using std::endl;

Sales::Sales()
{
    sales[QUARTERS] = {0.0};
    average = 0.0;
    max = 0.0;
    min = 0.0;
}

//非交互式
Sales::Sales(const double ar[], int n)
{
    double tempTotal = 0, tempMax = 0, tempMin = ar[0];
    for (int i = 0; i < n; i++)
    {
        sales[i] = ar[i];
        tempTotal += sales[i];
        if (tempMax < sales[i])
            tempMax = sales[i];
        if (tempMin > sales[i])
            tempMin = sales[i];
    }
    average = tempTotal / n;
    max = tempMax;
    min = tempMin;
}
//交互式
Sales::Sales(Sales &s)
{
    cout << "Enter sales for 4 quarters:";
    double tempTotal = 0, tempMax = 0;
    for (int i = 0; i < QUARTERS; i++)
    {
        cin >> sales[i];
        tempTotal += sales[i];
        if (tempMax < sales[i])
            tempMax = sales[i];
    }
    double tempMin = sales[0];
    for (int i = 1; i < QUARTERS; i++)
    {
        if (tempMin > sales[i])
            tempMin = sales[i];
    }
    average = tempTotal / QUARTERS;
    max = tempMax;
    min = tempMin;
}

Sales::~Sales() {}
void Sales::showSales() const
{
    for (int i = 0; i < QUARTERS; i++)
        cout << "Quarter " << i + 1 << ": " << sales[i] << endl;
    cout << "Average: " << average << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
}
} // namespace SALES