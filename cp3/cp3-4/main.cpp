//3-4
#include <iostream>
using namespace std;

int main()
{
    long long seconds;
    const int hour_per_day = 24;
    const int min_per_hour = 60;
    const int sec_per_min = 60;

    cout << "输入秒数：";
    cin >> seconds;

    int day = seconds / sec_per_min / min_per_hour / hour_per_day;
    int hour = seconds / sec_per_min / min_per_hour % hour_per_day;
    int min = seconds / sec_per_min % min_per_hour;
    int sec = seconds % sec_per_min;

    cout << seconds << "秒 = "
         << day << "天，"
         << hour << "小时，"
         << min << "分，"
         << sec << "秒\n";

    system("pause");
    return 0;
}