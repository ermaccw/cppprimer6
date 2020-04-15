//main.cpp
#include "stonewt.h"
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    const int SIZE = 6;
    Stonewt stArray[SIZE] = {316.5, 154.0, 7.3};
    Stonewt eleven(0.0, 11, Stonewt::STN);
    eleven.setMode(Stonewt::PDS);
    Stonewt stMax, stMin = stArray[0];

    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {
        if (i >= 3)
        {
            double temp = 0.0;
            cout << "输入第" << i + 1 << "个pounds得值：";
            cin >> temp;
            stArray[i] = Stonewt(temp);
        }
        if (stArray[i] >= eleven)
            count++;
        stMax = stMax > stArray[i] ? stMax : stArray[i];
        stMin = stMin < stArray[i] ? stMin : stArray[i];
    }

    cout << "最大值：" << stMax << " 最小值：" << stMin
         << " 大于等于11英石共有" << count << "个\n";

    system("pause");
    return 0;
}