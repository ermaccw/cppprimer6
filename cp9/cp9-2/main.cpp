// 9-2
#include <iostream>
#include <string>

void strcount(const std::string &str);

int main()
{
    using namespace std;
    string input;

    cout << "Enter a line:\n";
    getline(cin, input);
    while (input != "")
    {
        strcount(input);
        cout << "Enter next line (empty line to quit):\n";
        getline(cin, input);
    }

    cout << "Bye\n";

    system("pause");
    return 0;
}

void strcount(const std::string &str)
{
    using namespace std;
    static int total = 0;
    int count = 0;
    cout << "\"" << str << "\" contains ";
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
            count++;
    }
    total += count;
    cout << count << " characters\n";
    cout << total << " characters total\n";
}