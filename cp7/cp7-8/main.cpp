//7-8
#include <iostream>
#include <string>
using namespace std;

const int Seasons = 4;
const char *Snames[Seasons] =
    {"Spring", "Summer", "Fall", "Winter"};

struct arr
{
    double ar[Seasons] = {0};
};

void fill(arr *value);
void show(const arr *value);

int main()
{
    arr spending;
    fill(&spending);
    show(&spending);

    system("pause");
    return 0;
}

void fill(arr *value)
{
    for (int i = 0; i < Seasons; i++)
    {
        cout << "Enter " << Snames[i] << " expenses:";
        cin >> value->ar[i];
    }
}

void show(const arr *value)
{
    double total = 0.0;
    cout << "\nEXPENSES\n";
    for (int i = 0; i < Seasons; i++)
    {
        cout << Snames[i] << ": $" << value->ar[i] << endl;
        total += value->ar[i];
    }
    cout << "Total Expenses: $" << total << endl;
}