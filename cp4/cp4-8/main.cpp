//4-8
#include <cstring>
#include <iostream>
using namespace std;

const int arry = 100;

struct Pizza
{
    char company[arry];
    double diameter;
    double weight;
};

int main()
{
    Pizza *record = new Pizza;

    cout << "输入披萨直径：";

    cin >> record->diameter;
    cin.get(); //清除上一次键盘输入的换行符

    cout << "输入披萨饼公司名：";
    cin.get(record->company, arry);

    cout << "输入披萨重量：";
    cin >> record->weight;

    cout << record->diameter << endl;
    cout << record->company << endl;
    cout << record->weight << endl;

    delete record;

    system("pause");
    return 0;
}