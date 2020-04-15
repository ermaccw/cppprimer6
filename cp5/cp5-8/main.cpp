//5-8
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char word[20];
    int i = 0;
    cout << "输入单词（done停止）：\n";
    cin >> word;

    while (strcmp(word, "done"))
    {
        i++;
        cin >> word;
    }

    cout << "共有" << i << "个单词\n";

    system("pause");
    return 0;
}