// bank.cpp
#include "bank.h"
#include <iostream>

Depositor::Depositor()
{
    name_ = "no name";
    account_ = "no account";
    deposit_ = 0.0;
}

Depositor::Depositor(const std::string &name, const std::string &acc, double dep)
{
    name_ = name;
    account_ = acc;
    if (dep < 0)
        deposit_ = 0.0;
    else
        deposit_ = dep;
}

Depositor::~Depositor() { std::cout << name_ << "，再见！\n"; }
void Depositor::show() const
{
    std::cout << "用户名：" << name_
              << " 账号：" << account_
              << " 存款：" << deposit_ << std::endl;
}

void Depositor::depositin(double val)
{
    if (val > 0)
        deposit_ += val;
    else
        std::cout << "没有存入任何金额\n";
}

void Depositor::withdraw(double val)
{
    if (deposit_ <= 0)
        std::cout << "没有任何存款\n";
    else if (deposit_ < val)
        std::cout << "没有足够金额\n";
    else
        deposit_ -= val;
}