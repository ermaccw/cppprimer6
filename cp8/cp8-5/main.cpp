//8-5
#include <iostream>
using namespace std;

template <typename T>
T max5(T arry[5]);

int main()
{
    int inum[5] = {345, 52, 344, 227, 372};
    double dnum[5] = {328.27, 324.337, 78.0981, 475.27, 224.278};

    for (int x : inum)
        cout << x << " ";
    cout << " 中最大的数是：" << max5(inum) << endl;

    for (double x : dnum)
        cout << x << " ";
    cout << " 中最大的数是：" << max5(dnum) << endl;

    system("pause");
    return 0;
}

template <typename T>
T max5(T arry[5])
{
    T temp = 0;
    for (int i = 0; i < 5; i++)
    {
        if (arry[i] > temp)
            temp = arry[i];
        else
            continue;
    }
    return temp;
}