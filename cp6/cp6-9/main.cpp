//6-9
#include <fstream>
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
    string filename;
    ifstream inFile;

    cout << "请输入文件名（含扩展名）：";
    getline(cin, filename);

    inFile.open(filename);
    while (!inFile.is_open())
    {
        cout << "文件无法打开，请重新输入：";
        getline(cin, filename);
        inFile.open(filename);
    }

    int userNum;
    inFile >> userNum;
    inFile.get();
    Patrons *PatronsInfo = new Patrons[userNum];

    int i = 0;
    while (!inFile.eof())
    {
        getline(inFile, (PatronsInfo + i)->username);
        inFile >> (PatronsInfo + i)->amount;
        inFile.get();
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
    inFile.close();

    system("pause");
    return 0;
}