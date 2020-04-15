//6-5
#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    double salary;
    double IncomeTax;

    cout << "输入月薪：";
    while ((cin >> salary) && salary > 0)
    {
        if (salary <= 5000)
            cout << "无个税\n";
        else if (salary > 5000 && salary <= 15000)
        {
            //IncomTax = salary * 0.1 - 500;
            IncomeTax = (salary - 5000) * 0.1;
        }
        else if (salary > 15000 && salary <= 35000)
        {
            //IncomTax = salary * 0.15 - 1250;
            IncomeTax = 10000 * 0.1 + (salary - 5000 - 10000) * 0.15;
        }
        else
        {
            //IncomTax = salary * 0.2 -3000;
            IncomeTax = 10000 * 0.1 + 20000 * 0.15 + (salary - 5000 - 10000 - 20000) * 0.2;
        }
        cout << "个税是：" << IncomeTax << endl;
        cout << "输入月薪：";
    }

    cout << "done!\n";

    system("pause");
    return 0;
}