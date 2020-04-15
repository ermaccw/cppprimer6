//8-1
#include <iostream>
using namespace std;

void printStr(const char *str, int n = 0);

int main()
{
    const char *str = "blessed in the code!";
    printStr(str);
    cout << endl;
    printStr(str, 4);

    system("pause");
    return 0;
}

void printStr(const char *str, int n)
{
    if (n == 0)
        cout << str << endl;
    else
    {
        for (int j = 0; j < n; j++)
            printStr(str);
    }
}