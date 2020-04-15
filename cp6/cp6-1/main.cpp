//6-1
#include <cctype>
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "输入字符：";

    while (cin.get(ch) && ch != '@')
    {
        if (isdigit(ch))
            continue;
        else if (islower(ch))
            ch = toupper(ch);
        else
            ch = tolower(ch);
        cout << ch;
    }

    cout << "done!\n";

    system("pause");
    return 0;
}