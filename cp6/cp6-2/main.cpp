//6-2
#include <climits>
#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    double num[SIZE] = {0};
    double sum;
    int countTotal = 0, countAve = 0, Averg;

    for (int i = 0; i < SIZE; i++)
    {
        cout << "输入值：";
        cin >> num[i];
        if (num[i] >= __DBL_MIN__ && num[i] <= __DBL_MAX__)
        {
            sum += num[i];
            countTotal++;
        }
        else
            break;
    }

    Averg = sum / countTotal;
    for (int j = 0; j < countTotal; j++)
    {
        if (num[j] > Averg)
            countAve++;
    }

    cout << "\n平均值：" << Averg << endl;
    cout << "共有" << countAve << "个数字大于平均值\n";

    system("pause");
    return 0;
}