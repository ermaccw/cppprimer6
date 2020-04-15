//stonewt.cpp
#include "stonewt.h"
#include <iostream>
using std::cout;
Stonewt::Stonewt(double lbs, int stn, Mode form)
{
    mode = form;
    if (form == PDS)
    {
        stone = int(lbs) / Lbs_per_stn;
        pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
        pounds = lbs;
    }
    else if (form == PDS_LEFT)
    {
        stone = stn;
        pds_left = lbs;
        pounds = stn * Lbs_per_stn + lbs;
    }
    else
    {
        stone = stn;
        pounds = stn * Lbs_per_stn;
    }
}
Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    mode = PDS;
}
void Stonewt::setMode(Mode form) { mode = form; }
Stonewt::~Stonewt() {}
Stonewt Stonewt::operator+(const double lbs) const { return Stonewt(pounds + lbs); }
Stonewt Stonewt::operator+(const Stonewt &s) const { return Stonewt(pounds + s.pounds); }
Stonewt Stonewt::operator-(const double lbs) const { return Stonewt(pounds - lbs); }
Stonewt Stonewt::operator-(const Stonewt &s) const { return Stonewt(pounds - s.pounds); }
Stonewt Stonewt::operator*(const double lbs) const { return Stonewt(lbs * pounds); }
bool Stonewt::operator==(const Stonewt &s) const { return pounds == s.pounds ? true : false; }
bool Stonewt::operator!=(const Stonewt &s) const { return pounds != s.pounds ? true : false; }
bool Stonewt::operator>(const Stonewt &s) const { return pounds > s.pounds ? true : false; }
bool Stonewt::operator<(const Stonewt &s) const { return pounds < s.pounds ? true : false; }
bool Stonewt::operator>=(const Stonewt &s) const { return pounds >= s.pounds ? true : false; }
bool Stonewt::operator<=(const Stonewt &s) const { return pounds <= s.pounds ? true : false; }
Stonewt operator*(const double lbs, const Stonewt &s)
{
    return Stonewt(s * lbs);
}
std::ostream &operator<<(std::ostream &os, const Stonewt &s)
{
    if (s.mode == Stonewt::PDS)
        os << s.pounds << " pounds\n";
    else if (s.mode == Stonewt::PDS_LEFT)
        os << s.stone << " stone, " << s.pds_left << " pounds\n";
    else
        os << s.stone << " stone\n";
    return os;
}