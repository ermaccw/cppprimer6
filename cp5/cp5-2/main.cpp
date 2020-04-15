//5-2
#include <array>
#include <iostream>
using namespace std;

const int Size = 101;

int main()
{
    array<long double, Size> factorials;
    factorials[1] = factorials[0] = 1L;

    for (int i = 2; i < Size; i++)
        factorials[i] = i * factorials[i - 1];

    for (int i = 0; i < Size; i++)
        cout << i << "! = " << factorials[i] << endl;

    system("pause");
    return 0;
}