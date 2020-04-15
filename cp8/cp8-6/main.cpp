//8-6
#include <iostream>
#include <cstring>
using namespace std;

template <typename T>
T maxn(T arry[], int num);

template <>
const char *maxn(const char *str[], int num);

int main()
{
    int inum[6] = {336, 885, 705, 533, 647, 213};
    double dnum[4] = {324.337, 78.0981, 475.27, 224.278};
    const char *pstr[5] = {"Steve Rogers", "Tony Stark", "Natasha Romanoff", "Thor Odinson", "Bruce Banner"};
    for (int x : inum)
        cout << x << "  ";
    cout << "最大的数是：" << maxn(inum, 6) << endl
         << endl;

    for (double x : dnum)
        cout << x << "  ";
    cout << "最大的数是：" << maxn(dnum, 4) << endl
         << endl;

    for (const char *x : pstr)
        cout << x << endl;
    cout << "字符串最长的是：" << maxn(pstr, 5) << endl
         << endl;

    system("pause");
    return 0;
}

template <typename T>
T maxn(T arry[], int num)
{
    T temp = 0;
    for (int i = 0; i < num; i++)
    {
        if (arry[i] > temp)
            temp = arry[i];
        else
            continue;
    }
    return temp;
}

template <>
const char *maxn(const char *str[], int num)
{
    size_t count = 0;
    const char *ptemp = "\0";
    for (int i = 0; i < num; i++)
    {
        if (strlen(str[i]) > count)
        {
            count = strlen(str[i]);
            ptemp = str[i];
        }
        else
            continue;
    }
    return ptemp;
}