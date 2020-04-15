//5-6
#include <iostream>
using namespace std;

int main()
{
    char *month[12] =
        {"一月", "二月", "三月", "四月", "五月", "六月", "七月", "八月", "九月", "十月", "十一月", "十二月"};
    int sales[3][13] = {0};
    int sum_sales[3] = {0};
    int Total;

    for (int y = 0, m = 0; y < 3; y++)
    {
        cout << "输入年份：";
        cin >> sales[y][m];
        for (int i = 1; i < 13; i++)
        {
            cout << "输入" << sales[y][m] << "年" << month[i - 1] << "的销量：";
            cin >> sales[y][i];
            sum_sales[y] = sum_sales[y] + sales[y][i];
        }
        Total = Total + sum_sales[y];
    }

    for (int i = 0, j = 0; i < 3; i++)
        cout << sales[i][j] << "年销量共计：" << sum_sales[i] << endl;

    cout << "三年总销量是" << Total << endl;

    system("pause");
    return 0;
}