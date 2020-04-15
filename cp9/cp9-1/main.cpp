//main.cpp
#include <iostream>
#include "golf.h"
int main()
{
    golf ann, andy;
    //以非交互版本方法设置用户ann的信息
    setgolf(ann, "Ann Birdfree", 24);
    showgolf(ann);
    //以交互版本方法设置用户andy的信息
    setgolf(andy);
    showgolf(andy);
    std::cout << "reset " << andy.fullname << " rank 10:";
    handicap(andy, 10);
    showgolf(andy);
    //使用交互方法设置一组用户信息
    int GroupNum; //用户数
    std::cout << "Enter group numbers: ";
    std::cin >> GroupNum;
    std::cin.get();
    golf group[GroupNum];
    //如果用户未输入用户名或者用户组信息填满则退出
    for (int i = 0; i < GroupNum; i++)
    {
        int State = setgolf(group[i]);
        if (State == '0')
        {
            std::cout << "Group is full!\n";
            break;
        }
        else
        {
            std::cin.get();
            continue;
        }
    }
    //显示用户组中用户数据
    for (int i = 0; i < GroupNum; i++)
        showgolf(group[i]);
    system("pause");
    return 0;
}