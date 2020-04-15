//7-5
#include <iostream>
using namespace std;

unsigned long factorial(unsigned int n);

int main()
{
    cout << "输入值：";
    int num;
    while (cin >> num)
    {
        cout << num << "! = " << factorial(num) << endl;
        cout << "输入值：";
    }
    cout << "done!\n";
    system("pause");
    return 0;
}

unsigned long factorial(unsigned int n)
{
    if (n > 0)
    {
        n = n * factorial(n - 1);
        return n;
    }
    else
        return 1;
}