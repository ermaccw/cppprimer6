//9-3
#include <cstring>
#include <iostream>
#include <new>

struct chaff
{
    char dross[20];
    int slag;
};

const int N = 2;
char buffer[512];

int main()
{
    using namespace std;
    chaff *p1 = new (buffer) chaff[N]; //定位new
    chaff *p2 = new chaff[N];          //常规new
    char dross[20] = "0";
    int slag;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter your dross (p1): ";
        cin.get(dross, 20).get();
        strcpy((p1 + i)->dross, dross);
        cout << "Enter your slag (p1): ";
        cin >> slag;
        cin.get();
        (p1 + i)->slag = slag;
        cout << endl;
    }

    for (int i = 0; i < N; i++)
        cout << "dross:" << (p1 + i)->dross << " slag:" << (p1 + i)->slag << endl;

    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter your dross (p2): ";
        cin.get(dross, 20).get();
        strcpy((p2 + i)->dross, dross);
        cout << "Enter your slag (p2): ";
        cin >> slag;
        cin.get();
        (p2 + i)->slag = slag;
        cout << endl;
    }

    for (int i = 0; i < N; i++)
        cout << "dross:" << (p2 + i)->dross << " slag:" << (p2 + i)->slag << endl;

    delete[] p2;

    system("pause");
    return 0;
}