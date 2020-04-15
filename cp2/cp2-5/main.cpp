//2-5
#include <iostream>
using namespace std;

double covert(double);

int main()
{
    double degree;

    cout << "输入温度值（摄氏度）：";
    cin >> degree;
    cout << degree << " 摄氏度 = ";
    degree = covert(degree);
    cout << degree << " 华氏度" << endl;

    system("pause");
    return 0;
}

double covert(double c2f)
{
    return 1.8 * c2f + 32.0;
}