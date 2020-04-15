//4-10
#include <array>
#include <iostream>
using namespace std;

int main()
{
    array<double, 3> run;

    cout << "请输入40米跑的三次记录（每输入一次按回车）：\n";
    cin >> run[0] >> run[1] >> run[2];
    cout << endl;

    cout << "您共跑了" << sizeof(run) / sizeof(run[0]) << "次，"
         << "平均成绩是" << (run[0] + run[1] + run[2]) / (sizeof(run) / sizeof(run[0]))
         << "秒\n";

    system("pause");
    return 0;
}