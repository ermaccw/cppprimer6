//main.cpp
#include <iostream>
#include "vect.h"
#include <cstdlib>
#include <ctime>
#include <fstream>

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
    ofstream outFile;
    outFile.open("vect.txt");

    cout << "输入目标距离 (q 键退出): ";
    while (cin >> target)
    {
        cout << "输入步长: ";
        if (!(cin >> dstep))
            break;
        outFile << "目标距离：" << target << " , 步长：" << dstep << endl;
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            outFile << steps << ": " << result << endl;
            steps++;
        }
        outFile << steps << " 步后到达的位置:\n";
        outFile << result << endl;
        result.polar_mode();
        outFile << " 或\n"
                << result << endl;
        outFile << "平均迈步的距离 = " << result.magval() / steps << endl
                << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "输入目标距离 (q 键退出): ";
    }

    cout << "Bye!\n";
    cin.clear();

    while (cin.get() != '\n')
        continue;
    outFile.close();

    system("pause");
    return 0;
}