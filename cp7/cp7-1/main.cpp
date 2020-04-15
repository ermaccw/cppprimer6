//7-1
#include <iostream>
using namespace std;

double Harmonic(double x, double y);

int main()
{
    double x, y;
    cout << "请输入x、y的值（值为0时结束）：";
    while (cin >> x && cin >> y)
    {
        if (x == 0 || y == 0)
            break;
        else
        {
            cout << x << "和" << y << "的调和平均数是" << Harmonic(x, y) << endl;
            cout << "请输入x、y的值（值为0时结束）：";
        }
    }
    cout << "done!\n";

    system("pause");
    return 0;
}

double Harmonic(double x, double y)
{
    double har;
    har = 2.0 * x * y / (x + y);
    return har;
}