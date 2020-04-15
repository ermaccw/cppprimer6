//6-8
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    char filename[50];
    char ch;
    int count = 0;

    cout << "输入文件名（含扩展名）：";
    cin.getline(filename, 50);
    inFile.open(filename);

    while (!inFile.is_open())
    {
        cout << "文件无法打开，请重新输入：";
        cin.getline(filename, 50);
        inFile.open(filename);
    }

    while (inFile >> ch && !inFile.eof())
    {
        ++count;
    }

    cout << endl;
    cout << filename << " 文件共包含 " << count << "个 字符\n";

    inFile.close();

    system("pause");
    return 0;
}