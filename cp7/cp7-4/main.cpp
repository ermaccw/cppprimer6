//7-4
#include <iostream>
using namespace std;

long double probability(unsigned numbers1, unsigned picks1, unsigned numbers2, unsigned picks2);

int main()
{
    double t1, c1, t2, c2;
    cout << "分别输入号码总数、可选个数、特选号码总数、特选可选个数：";
    while ((cin >> t1 >> c1 >> t2 >> c2) && c1 <= t1 && c2 <= t2)
    {
        cout.setf(ios_base::fixed, ios_base::floatfield);
        cout.precision(0);
        cout << "概率是1/" << probability(t1, c1, t2, c2) << endl;
        cout << "重新输入(q退出)：";
    }
    cout << "done!\n";

    system("pause");
    return 0;
}

long double probability(unsigned n1, unsigned p1, unsigned n2, unsigned p2)
{
    long double result1 = 1.0, result2 = 1.0, total;
    for (n1, p1; p1 > 0; n1--, p1--)
        result1 = result1 * n1 / p1;
    for (n2, p2; p2 > 0; n2--, p2--)
        result2 = result2 * n2 / p2;
    total = result1 * result2;
    return total;
}