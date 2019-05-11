#include "account.h"

using std::cout;
using std::endl;

BaseAccount::BaseAccount(const string &username, long bank_card_number, double balance)
{
    this->username = username;
    this->bank_card_number = bank_card_number;
    this->balance = balance;
}

BaseAccount::Formatting BaseAccount::set_format() const
{
    Formatting f{
        cout.setf(std::ios_base::fixed, std::ios_base::floatfield),
        cout.precision(2)};
    return f;
}

void BaseAccount::restore(Formatting &f) const
{
    cout.setf(f.flag, std::ios_base::floatfield);
    cout.precision(f.pr);
}

void BaseAccount::deposit(const double money)
{
    balance += money;
}

void BaseAccount::withdraw(double money)
{
    balance -= money;
}

// <Account>
Account::Account(const string &username, long bank_card_number, double balance) : BaseAccount(username, bank_card_number, balance)
{
}

void Account::withdraw(double money)
{
    if (get_balance() < money)
    {
        cout << "you need $" << money << " but you only have $" << get_balance() << endl;
        return;
    }
    BaseAccount::withdraw(money);
}

void Account::show_account_detail() const
{
    Formatting f = set_format();
    cout << "======= Account::show_account_detail() =========" << endl;
    cout << "username:" << get_username() << endl;
    cout << "bank_card_number:" << get_card_number() << endl;
    cout << "balance:" << get_balance() << endl;
    cout << "======= \t\tEnd\t\t =======" << endl;
    restore(f);
}

// === AccountOwn ===

AccountOwn::AccountOwn(const string &username, long bank_card_number, double balance, double max_loan, double loan_rate)
    : BaseAccount(username, bank_card_number, balance)
{
    this->max_loan = max_loan;
    this->loan_rate = loan_rate;
    this->current_loan = 0.0;
}

AccountOwn::AccountOwn(BaseAccount &base, double max_loan, double loan_rate)
    : BaseAccount(base)
{
    this->max_loan = max_loan;
    this->loan_rate = loan_rate;
    this->current_loan = 0.0;
}

void AccountOwn::show_account_detail() const
{
    Formatting f = set_format();
    cout << "======= AccountOwn::show_account_detail() =========" << endl;
    cout << "username:" << get_username() << endl;
    cout << "bank_card_number:" << get_card_number() << endl;
    cout << "balance:" << get_balance() << endl;
    cout << "max_loan:" << max_loan << endl;
    cout << "loan_rate:" << loan_rate << endl;
    cout << "current_loan:" << current_loan << endl;
    cout << "======= \t\tEnd\t\t =======" << endl;
    restore(f);
}

void AccountOwn::withdraw(double money)
{
    if (get_balance() >= money)
    {
        BaseAccount::withdraw(money);
    }
    else if (get_balance() + max_loan - current_loan >= money)
    {
        double need_load = money - get_balance();
        current_loan += need_load * (1 + loan_rate);
        BaseAccount::deposit(need_load);
        BaseAccount::withdraw(money);
    }
    else
    {
        cout << "you need $" << money << " but you have $" << get_balance()
             << " and remind loan is $" << max_loan - current_loan << endl;
    }
}