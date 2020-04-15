//7-7
#include <iostream>
using namespace std;

const int Max = 5;
double *fill_arry(double *begin, double *end);
void show_array(const double *begin, const double *fill_arry);
void revalue(double r, double *begin, double *fill_arry);

int main()
{
    double properties[Max];
    double *begin = properties;
    double *end = properties + Max;
    double *pend = fill_arry(begin, end);

    show_array(begin, pend);
    cout << "Enter revaluation factor:";

    double factor;
    while (!(cin >> factor))
    {
        cin.clear();
        while (cin.get() != '\n')
            continue;
        cout << "Bad input,please enter a number:";
    }

    revalue(factor, begin, pend);
    show_array(begin, pend);
    cout << "Done.\n";

    system("pause");
    return 0;
}

double *fill_arry(double *begin, double *end)
{
    double temp;
    double *pt;
    int i;
    for (i = 0, pt = begin; pt < end; pt++, i++)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        if (!(cin >> temp))
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input;input process terminated.\n";
            break;
        }
        else if (temp < 0)
            break;
        *pt = temp;
    }
    return pt;
}

void show_array(const double *begin, const double *end)
{
    int i;
    const double *pt;
    for (i = 0, pt = begin; pt < end; pt++, i++)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << *pt << endl;
    }
}

void revalue(double r, double *begin, double *end)
{
    double *pt;
    for (pt = begin; pt < end; pt++)
        *pt *= r;
}