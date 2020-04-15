//7-10
#include <iostream>
using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double calculate(double x, double y, double (*pf)(double x, double y));
double (*paf[3])(double, double) = {add, subtract, multiply};

int main()
{
    double x, y;
    cout << "输入两个值：";
    while (cin >> x >> y)
    {
        if (!cin)
        {
            cout << "输入错误类型，请重新输入：";
            cin.clear();
            while (cin.get() != '\n')
                continue;
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                switch (i)
                {
                case 0:
                    cout << x << "+" << y << "=" << calculate(x, y, paf[i]) << endl;
                    break;
                case 1:
                    cout << x << "-" << y << "=" << calculate(x, y, paf[i]) << endl;
                    break;
                case 2:
                    cout << x << "*" << y << "=" << calculate(x, y, paf[i]) << endl;
                    break;
                }
            }
            cout << "输入两个值：";
        }
    }
    cout << "Done.\n";

    system("pause");
    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiply(double x, double y)
{
    return x * y;
}

double calculate(double x, double y, double (*pf)(double x, double y))
{
    return pf(x, y);
}