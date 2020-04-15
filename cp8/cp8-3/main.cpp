//8-3
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void strUpper(string &str);

int main()
{
    string str;
    cout << "Enter a string (q to quit): ";
    getline(cin, str);

    while (str != "q")
    {
        strUpper(str);
        cout << str << endl;
        cout << "Enter a string (q to quit): ";
        getline(cin, str);
    }

    cout << "Bye.\n";

    system("pause");
    return 0;
}

void strUpper(string &str)
{
    int i = 0;
    while (str[i])
    {
        str[i] = toupper(str[i]);
        i++;
    }
}