// bank.h
#ifndef BANK_H_
#define BANK_H_
#include <string>

class Depositor
{
private:
    std::string name_;
    std::string account_;
    double deposit_;

public:
    Depositor();
    Depositor(const std::string &name, const std::string &acc, double dep = 0.0);
    ~Depositor();
    void show() const;          //显式储户信息
    void withdraw(double val);  //取出存款
    void depositin(double val); //存入存款
};

#endif // !BANK_H_
