//5-4
#include <iostream>
using namespace std;

int main()
{
    double Daphne_interest;
    double Daphne_Total = 100, Cleo_Total = 100;
    int year = 1;

    do
    {
        Daphne_interest = 0.10 * 100;
        Daphne_Total = Daphne_Total + Daphne_interest;
        Cleo_Total = Cleo_Total * 0.05 + Cleo_Total;
        year++;
    } while (Daphne_Total > Cleo_Total);

    cout << year << "年后Cleo将超过Daphne的投资价值，Daphne的资产为"
         << Daphne_Total << ",Cleo的资产为" << Cleo_Total << endl;

    system("pause");
    return 0;
}