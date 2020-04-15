//3-1
#include <iostream>
using namespace std;

int main()
{
    int height;

    cout << "输入你的身高（英寸）：____\b\b\b\b";
    cin >> height;

    const unsigned short a = 12;
    unsigned short inch = height / a;
    unsigned short in = height % a;

    cout << "你的身高是：" << inch << "英尺" << in << "英寸\n";

    system("pause");
    return 0;
}