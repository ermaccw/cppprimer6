//5-7
#include <iostream>
#include <string>
using namespace std;

struct car
{
    string producer;
    int year;
};

int main()
{
    cout << "有多少辆汽车：";
    int car_num;
    cin >> car_num;
    cin.get();
    car *data = new car[car_num];

    for (int i = 0; i < car_num; i++)
    {
        cout << "第" << i + 1 << "辆\n";
        cout << "输入生产商：";
        getline(cin, data[i].producer);
        cout << "输入年份：";
        cin >> data[i].year;
        cin.get();
    }

    cout << "这是车辆统计信息：\n";

    for (int i = 0; i < car_num; i++)
        cout << data[i].year << " " << data[i].producer << endl;

    delete[] data;

    system("pause");
    return 0;
}