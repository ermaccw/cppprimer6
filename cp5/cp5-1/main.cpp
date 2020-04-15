//5-1
#include <iostream>
using namespace std;

int main()
{
    cout << "输入两个整数：";
    int min, max, sum = 0;

    cin >> min >> max;
    int i = min;

    while (i <= max)
    {
        sum = sum + i;
        i++;
    }

    cout << endl;
    cout << min << "~" << max << "之间所有整数的和为" << sum << endl;

    system("pause");
    return 0;
}