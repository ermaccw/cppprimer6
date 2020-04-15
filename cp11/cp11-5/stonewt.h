//stonewt.h
#ifndef STONEWT_H_
#define STONEWT_H_
#include <iostream>

class Stonewt
{
public:
    enum Mode
    {
        STN,
        PDS,
        PDS_LEFT
    };

private:
    enum
    {
        Lbs_per_stn = 14
    };
    int stone;
    double pds_left;
    double pounds;
    Mode mode;

public:
    Stonewt(double lbs, int stn = 0, Mode form = PDS);
    Stonewt();
    ~Stonewt();
    void setMode(Mode form = PDS);
    Stonewt operator+(const double lbs) const;
    Stonewt operator+(const Stonewt &s) const;
    Stonewt operator-(const double lbs) const;
    Stonewt operator-(const Stonewt &s) const;
    Stonewt operator*(const double lbs) const;
    friend Stonewt operator*(const double lbs, const Stonewt &s);
    friend std::ostream &operator<<(std::ostream &os, const Stonewt &s);
};

#endif // !STONEWT_H_