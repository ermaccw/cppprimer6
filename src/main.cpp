//main.cpp
#include <iostream>
#include "golf.h"
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    Golf ann, andy;
    //以非交互版本方法设置用户ann的信息
    ann = Golf("Ann Birdfree", 24);
    ann.showgolf();

    //以交互版本方法设置用户andy的信息
    andy.setgolf(ann);
    andy.showgolf();
    cout << "reset andy rank 10:";
    andy.sethandicap(10);
    cout << endl;
    andy.showgolf();

    //使用交互方法设置一组用户信息
    int GroupNum; //用户数
    cout << "Enter group numbers: ";
    cin >> GroupNum;
    cin.get();
    Golf group[GroupNum];
    Golf temp;
    for (int i = 0; i < GroupNum; i++)
        group[i].setgolf(temp);
    //显示用户组中用户数据
    for (int i = 0; i < GroupNum; i++)
        group[i].showgolf();

    system("pause");
    return 0;
}