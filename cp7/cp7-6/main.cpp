//7-6
#include <iostream>
using namespace std;

int SIZE = 0;
int count = 0;

int Fill_array(double ar[], int n);
void Show_array(const double ar[], int n);
void Reverse_array(double ar[], int n);

int main()
{
    cout << "输入最大个数：";
    cin >> SIZE;
    double arr[SIZE] = {0};
    int usednum = 0;
    usednum = Fill_array(arr, SIZE);

    cout << "数组中含数字：";
    Show_array(arr, usednum);

    cout << "依次首尾置换：";
    Reverse_array(arr, usednum);
    Show_array(arr, usednum);

    cout << "除掉首尾置换：";
    Reverse_array(arr + 1, usednum - 2);
    Show_array(arr, usednum);

    system("pause");
    return 0;
}

int Fill_array(double ar[], int n)
{
    int usenum = 0;
    cout << "输入数值：";
    for (int i = 0; i < n; i++)
    {
        if (cin >> ar[i])
        {
            usenum++;
            continue;
        }
        else
            break;
    }
    cout << "共输入" << usenum << "个数字\n";
    return usenum;
}

void Show_array(const double ar[], int n)
{
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
}

void Reverse_array(double ar[], int n)
{
    double buff;
    for (int i = 0, j = (n - 1); i < (n / 2); i++, j--)
    {
        buff = ar[i];
        ar[i] = ar[j];
        ar[j] = buff;
    }
}