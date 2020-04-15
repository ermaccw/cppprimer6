//3-7
#include <iostream>
using namespace std;

int main()
{
    double eu_consumption;
    const double hkm2mi = 62.14;
    const double gal2l = 3.875;

    cout << "输入欧式耗油量（升/百公里）：";
    cin >> eu_consumption;

    double us_consumption = hkm2mi * gal2l / eu_consumption;

    cout << endl;
    cout << eu_consumption << "升/百公里 = " << us_consumption << "英里/加仑\n";

    system("pause");
    return 0;
}