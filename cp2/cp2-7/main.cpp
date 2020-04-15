//2-7
#include <iostream>
using namespace std;

void disTime(int, int);

int main()
{
    int hours, minutes;

    cout << "输入小时：";
    cin >> hours;
    cout << "输入分钟: ";
    cin >> minutes;
    disTime(hours, minutes);

    system("pause");
    return 0;
}
void disTime(int h, int m)
{
    cout << "Time: " << h << ":" << m << endl;
}