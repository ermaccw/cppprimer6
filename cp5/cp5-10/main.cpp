//5-10
#include <iostream>
using namespace std;

int main()
{
    cout << "输入行号：";
    int num;
    cin >> num;

    for (int row = 1; row <= num; row++)
    {
        for (int j = num; j > row; j--)
            cout << ".";
        for (int i = 1; i <= row; i++)
            cout << "*";
        cout << endl;
    }

    system("pause");
    return 0;
}