#ifndef BRASS_H_
#define BRASS_H_

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

class Brass
{
private:
    string username;
    long accNum;
    double balance;

public:
    Brass(const string &uname = "unknown", long num = -1, double bl = 0.0);
    // 存款
    void Deposit(double money);
    // 取款虚方法
    virtual void Withdraw(double money);
    // 得到账户余额
    double Balance() const;
    // 查看账户信息虚方法
    virtual void ShowAcc() const;
    virtual ~Brass() { cout << "delete Brass with balance:" << Balance() << endl; }
};

class BrassPlus : public Brass
{
private:
    // 最多贷款多少钱
    double maxLoan;
    // 利率
    double loanRate;
    // 当前贷款
    double ownsBank;

public:
    BrassPlus(const string &uname = "unknow", long num = -1, double bl = 0.0, double ml = 500, double loanRate = 0.11125);
    BrassPlus(const Brass &, double ml = 500, double loabRate = 0.11125);
    // 虚函数
    virtual void Withdraw(double money);
    virtual void ShowAcc() const;
    // 新特性
    void ResetMaxLoan(double ml);
    void ResetLoadRate(double lr);
    void ResetOwnsBank(double ob);

    virtual ~BrassPlus() { cout << "delete BrassPlus with balance:" << Balance() << endl; }
};

#endif