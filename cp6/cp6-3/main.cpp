//6-3
#include <iostream>
using namespace std;

int main()
{
    cout << "输入选项：\n";
    cout << "c) carnivore\t\tp) pianist\n"
            "t) tree\t\t\tg) ganme\n";
    char choice;

    while (cin >> choice)
    {
        switch (choice)
        {
        case 'c':
            cout << "A maple is a carnivore.\n输入选项：";
            break;
        case 'p':
            cout << "A maple is a pianist.\n输入选项：";
            break;
        case 't':
            cout << "A maple is a tree.\n输入选项：";
            break;
        case 'g':
            cout << "A maple is a game.\n输入选项：";
            break;
        default:
            cout << "请输入c、p、t或g其中之一选项：";
            continue;
        }
    }

    cout << "Bye!\n";

    system("pause");
    return 0;
}