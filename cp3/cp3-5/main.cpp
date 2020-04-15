//3-5
#include <iostream>
using namespace std;

int main()
{
    long long world_population;
    long long usa_population;

    cout << "输入全球人口总数：";
    cin >> world_population;

    cout << "输入美国人口总数：";
    cin >> usa_population;

    double population_proportion = double(usa_population) / double(world_population) * 100;

    cout << "美国人口总数占全球人口数的" << population_proportion << "%.\n";

    system("pause");
    return 0;
}