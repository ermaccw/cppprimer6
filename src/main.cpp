//main.cpp
#include <iostream>
#include "vect.h"
#include <cstdlib>
#include <ctime>

int main()
{
    using namespace std;
    using VECTOR::Vector;
    srand(time(0));
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    int testnum = 0;
    unsigned long stepmax = 0;
    unsigned long stepmin = 0;
    int whilenum = 0;
    unsigned long totalsteps = 0;

    cout << "输入测试次数：";
    cin >> testnum;
    whilenum = testnum;
    cout << "输入目标距离 (q 键退出): ";
    while (whilenum > 0 && cin >> target)
    {
        cout << "输入步长: ";

        if (!(cin >> dstep))
            break;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            steps++;
        }
        cout << steps << " 步后到达的位置:\n";
        stepmax = stepmax > steps ? stepmax : steps;
        stepmin = whilenum == testnum ? steps : stepmin > steps ? steps : stepmin;
        totalsteps += steps;
        cout << result << endl;
        result.polar_mode();
        cout << " 或\n"
             << result << endl;
        cout << "平均迈步的距离 = " << result.magval() / steps << endl
             << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "输入目标距离 (q 键退出): ";
        --whilenum;
    }
    int stepaverage = totalsteps / testnum;
    cout << testnum << "次测试中，最高" << stepmax
         << "步，最低" << stepmin
         << "步，平均" << stepaverage << "步\n";

    cin.clear();
    while (cin.get() != '\n')
        continue;
    system("pause");
    return 0;
}