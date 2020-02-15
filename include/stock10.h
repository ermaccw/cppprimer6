// stock10.h
#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>

class Stock
{
private:
    std::string company; // 公司名称
    long shares;         // 股票数量
    double share_val;    // 每股价格
    double total_val;    // 股票总价
    void set_tot()
    {
        total_val = shares * share_val;
    } // 定义位于类声明中的函数自动成为内联函数

public:
    Stock();
    Stock(const std::string &co, long n, double pr);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show();
};

#endif // !STOCK10_H_
