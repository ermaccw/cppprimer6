//6-6
#include <iostream>
#include <string>
using namespace std;

struct Patrons
{
    string username;
    double amount;
};

int main()
{
    int userNum;
    cout << "输入捐献者数目：";
    cin >> userNum;
    cin.get();

    Patrons *PatronsInfo = new Patrons[userNum];

    int i = 0;
    while (i < userNum)
    {
        cout << "输入姓名：";
        getline(cin, (PatronsInfo + i)->username);
        cout << "输入金额：";
        cin >> (PatronsInfo + i)->amount;
        cin.get();
        i++;
    }

    int count = 0;
    cout << "\nGrand Patrons:\n";
    for (int i = 0; i < userNum; i++)
    {
        if (PatronsInfo[i].amount > 10000)
        {
            cout << PatronsInfo[i].username << " " << PatronsInfo[i].amount << endl;
            ++count;
        }
    }

    if (count == 0)
        cout << "none\n";
    count = 0;
    cout << "\nPatrons:\n";

    for (int i = 0; i < userNum; i++)
    {
        if (PatronsInfo[i].amount <= 10000)
        {
            cout << PatronsInfo[i].username << " " << PatronsInfo[i].amount << endl;
            ++count;
        }
    }

    if (count == 0)
        cout << "none\n";

    delete[] PatronsInfo;

    system("pause");
    return 0;
}