//4-3
#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char fname[40];
    char lname[20];

    cout << "输入姓：";
    cin >> fname;
    cout << "输入名：";
    cin >> lname;

    strcat(lname, ", ");
    strcat(lname, fname);

    cout << lname << endl;

    system("pause");
    return 0;
}