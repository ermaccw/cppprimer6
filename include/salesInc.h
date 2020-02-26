//salesInc.h
#ifndef SALESINC_H_
#define SALESINC_H_

namespace SALES
{
class Sales
{
private:
    static const int QUARTERS = 4;
    double sales[QUARTERS];
    double average;
    double max;
    double min;

public:
    Sales();
    Sales(const double ar[], int n);
    Sales(Sales &s);
    ~Sales();
    void showSales() const;
};

} // namespace SALES

#endif // !SALESINC_H_
