//8-4
#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char *str;
    int ct;
};

void set(stringy &stry, const char *str);
void show(const stringy &stry, int n = 1);
void show(const char *str, int n = 1);

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
    show(beany);
    show(beany, 2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);

    show("Done!");

    system("pause");
    return 0;
}

void set(stringy &stry, const char *str)
{
    stry.ct = strlen(str);
    stry.str = new char[stry.ct];
    for (int i = 0; i < stry.ct; i++)
        stry.str[i] = str[i];
}

void show(const stringy &stry, int n)
{
    for (int i = 0; i < n; i++)
        cout << stry.str << endl;
}

void show(const char *str, int n)
{
    for (int i = 0; i < n; i++)
        cout << str << endl;
}