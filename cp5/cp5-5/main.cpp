//5-5
#include <iostream>
using namespace std;

int main()
{
    const int size = 12;
    char *month[size] =
        {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int sales[size];
    int sum_sales = 0;

    for (int i = 0; i < 12; i++)
    {
        cout << "输入" << month[i] << "的销量：";
        cin >> sales[i];
        sum_sales = sum_sales + sales[i];
    }

    cout << "本年度销量共计：" << sum_sales << endl;

    system("pause");
    return 0;
}