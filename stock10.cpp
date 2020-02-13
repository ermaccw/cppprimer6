// stock10.cpp
#include "stock10.h"
#include <iostream>

// 默认构造函数
Stock::Stock()
{
    std::cout << "Default constructor called\n";
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

// 股民信息构造函数
Stock::Stock(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        std::cout << "Number of  shares can't be nagative; " << company
                  << " shares set to 0.\n";
        shares = 0;
    }
    else
        shares = n;
    share_val = pr;
    set_tot(); //计算总价 total_val
}

// 析构函数
Stock::~Stock() { std::cout << "Bye, " << company << "!\n"; }

// 购买股票
void Stock::buy(long num, double price)
{
    if (num < 0)
    {
        std::cout << "Number of shares purchased can't be negative. "
                  << "Transaction is aborted.\n";
    }
    else
    {
        shares += num;
        share_val = price;
        set_tot();
    }
}

//卖出股票
void Stock::sell(long num, double price)
{
    using std::cout;
    if (num < 0)
    {
        cout << "Number of shares sold can't be negative. "
             << "Transaction is aborted.\n";
    }
    else if (num > shares)
    {
        cout << "You can't sell more than you have! "
             << "Transaction is aborted.\n";
    }
    else
    {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

//更新信息
void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

//显示信息
void Stock::show()
{
    std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
    std::cout.precision(3);
    std::cout << "Company: " << company << " Shares: " << shares << '\n'
              << " Share Price: $" << share_val << " Total Worth: $" << total_val
              << '\n';
}