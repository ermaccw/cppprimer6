//3-6
#include <iostream>
using namespace std;

double eu_consumption(double km, double l)
{
    double consumption = 100 * l / km;
    return consumption;
}

int main()
{
    double mileage;
    double gasoline_volume;
    const double mi2km = 1.6;
    const double gal2l = 4.54;

    cout << "输入里程数（英里）：";
    cin >> mileage;
    cout << "输入汽油数（加仑）：";
    cin >> gasoline_volume;

    double consumption = mileage / gasoline_volume;
    double km = mileage * mi2km;
    double l = gasoline_volume * gal2l;

    cout << endl;
    cout << "耗油量是：" << consumption << "英里/加仑\n"
         << "欧洲风格耗油量是：" << eu_consumption(km, l) << "升/百公里\n";

    system("pause");
    return 0;
}