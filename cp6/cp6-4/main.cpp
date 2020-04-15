//6-4
#include <iostream>
using namespace std;

const int strsize = 18;
const int userNum = 5;

struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference;
};

int main()
{
    bop userInf[userNum] = {
        {"Wimp Macho", "C++ Programmer", "DAIGO", 0},
        {"Raki Rhodes", "Junior Programmer", "MAGO", 1},
        {"Celia Laiter", "Engineer", "MIPS", 2},
        {"Hoppy Hipman", "Analyst Trainee", "TOKIDO", 1},
        {"Pat Hand", "JAVA Programmer", "LOOPY", 2}};

    cout << "Benevolent Order of Programmers Report\n"
            "a. display by name\t\tb. display by title\n"
            "c. display by bopname\t\td. display by preference\n"
            "q. quit\n"
            "Enter your choice: ";
    char choice;

    while (cin >> choice && choice != 'q')
    {
        switch (choice)
        {
        case 'a':
            for (int i = 0; i < userNum; i++)
                cout << userInf[i].fullname << endl;
            cout << "Next choice:";
            break;
        case 'b':
            for (int i = 0; i < userNum; i++)
                cout << userInf[i].title << endl;
            cout << "Next choice:";
            break;
        case 'c':
            for (int i = 0; i < userNum; i++)
                cout << userInf[i].bopname << endl;
            cout << "Next choice:";
            break;
        case 'd':
            for (int i = 0; i < userNum; i++)
            {
                if (userInf[i].preference == 0)
                    cout << userInf[i].fullname << endl;
                else if (userInf[i].preference == 1)
                    cout << userInf[i].title << endl;
                else
                    cout << userInf[i].bopname << endl;
            }
            cout << "Next choice:";
            break;
        default:
            cout << "Please enter a,b,c,d or q:";
            break;
        }
    }

    cout << "Bye!\n";

    system("pause");
    return 0;
}