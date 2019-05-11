#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <iostream>
#include <string>

using std::cout;
using std::string;

class BaseAccount
{
private:
    string username;
    long bank_card_number;
    double balance;

protected:
    struct Formatting
    {
        std::ios_base::fmtflags flag;
        std::streamsize pr;
    };

    Formatting set_format() const;
    void restore(Formatting &) const;
    long get_card_number() const { return bank_card_number; }
    double get_balance() const { return balance; }
    string get_username() const { return username; }

public:
    BaseAccount(const string &username = "Unknown", long bank_card_number = -1, double balance = 0.0);
    virtual ~BaseAccount() {}
    void deposit(const double money);
    virtual void withdraw(double money) = 0;
    // 该纯虚函数基类方法不定义
    virtual void show_account_detail() const = 0;
};

class Account : public BaseAccount
{
public:
    virtual void withdraw(const double money);
    virtual void show_account_detail() const;
    Account(const string &username = "Unknown", long bank_card_number = -1, double balance = 0.0);
    virtual ~Account() {}
};

class AccountOwn : public BaseAccount
{
private:
    double max_loan;
    double loan_rate;
    double current_loan;

public:
    AccountOwn(const string &, long, double, double max_loan = 500.00, double loan_rate = 0.11125);
    AccountOwn(BaseAccount &, double max_loan = 500.00, double loan_rate = 0.11125);
    virtual ~AccountOwn() {}
    virtual void withdraw(const double money);
    virtual void show_account_detail() const;
};

#endif