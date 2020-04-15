//main.cpp
#include "stonewt.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    Stonewt poppins(10, 8, Stonewt::PDS_LEFT);
    Stonewt total, vtotal;
    double x = 2.0;
    total = poppins * x;
    total.setMode(Stonewt::STN);
    cout << "Total stn " << total;
    total.setMode(Stonewt::PDS_LEFT);
    cout << total << endl;

    vtotal = x * poppins;
    cout << "vTotal stn " << vtotal;

    total = poppins + vtotal;
    total.setMode(Stonewt::STN);
    cout << "poppins + vtotal = " << total << endl;

    total = total - vtotal;
    total.setMode(Stonewt::PDS_LEFT);
    cout << "total - vtotal = " << total << endl;

    system("pause");
    return 0;
}