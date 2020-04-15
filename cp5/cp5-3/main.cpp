//5-3
#include <iostream>
using namespace std;

int main()
{
    cout << "请输入一个数字：";
    int num, sum = 0;
    cin >> num;

    while (num != 0)
    {
        sum = sum + num;
        cout << "目前输入的值累计为" << sum << "\n请继续输入数值(输入\"0\"退出累计)：";
        cin >> num;
    }

    cout << "done!\n";

    system("pause");
    return 0;
}