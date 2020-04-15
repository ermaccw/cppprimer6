//5-9
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    int i = 0;

    cout << "输入单词（done停止）：\n";
    cin >> word;

    while (word != "done")
    {
        i++;
        cin >> word;
    }

    cout << "共有" << i << "个单词\n";

    system("pause");
    return 0;
}