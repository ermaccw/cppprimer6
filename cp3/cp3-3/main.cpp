//3-3
#include <iostream>
using namespace std;

double toDegrees(double d, double m, double s)
{
    const int d2m = 60;
    const int m2s = 60;
    double allDegrees = d + m / d2m + s / m2s / d2m;
    return allDegrees;
}

int main()
{
    int degrees, minutes, seconds;

    cout << "以度、分、秒的形式输入纬度：\n";
    cout << "输入度：___\b\b\b";
    cin >> degrees;
    cout << "输入分：___\b\b\b";
    cin >> minutes;
    cout << "输入秒：___\b\b\b";
    cin >> seconds;
    cout << degrees << "度，"
         << minutes << "分，"
         << seconds << "秒 = "
         << toDegrees(degrees, minutes, seconds) << "度\n";

    system("pause");
    return 0;
}