#include "brass.h"
using std::cout;
using std::endl;
using std::string;

typedef std::ios_base::fmtflags format;
typedef std::streamsize precis;
// 格式化
format setFormat();
// 恢复之前的格式
void restore(format f, precis p);

Brass::Brass(const string &username, long accNum, double balance)
{
    this->username = username;
    this->accNum = accNum;
    this->balance = balance;
}

void Brass::Deposit(double money)
{
    if (balance < 0)
        cout << "balance is less than 0, not allowed!" << endl;
    else
        balance += money;
}

void Brass::Withdraw(double money)
{
    format initialStatus = setFormat();
    precis prec = cout.precision(2);

    if (balance < 0 || money < 0)
    {
        cout << "balance < 0 or money < 0" << endl;
    }
    else if (balance < money)
    {
        /* code */
        cout << "The money you withdraw is exceed your balance, failed!" << endl;
    }
    else
    {
        balance -= money;
    }
    restore(initialStatus, prec);
}

double Brass::Balance() const
{
    return balance;
}

void Brass::ShowAcc() const
{
    format initialStatus = setFormat();
    precis prec = cout.precision(2);
    cout << "name\t\taccNum\t\t\tbalance\t" << endl;
    cout << username << "\t\t" << accNum << "\t\t" << balance << "\t" << endl;
    restore(initialStatus, prec);
}

// ================      BrassPlus     ================

BrassPlus::BrassPlus(const string &username, long accNum, double balance, double maxLoan, double loanRate) : Brass(username, accNum, balance)
{
    this->maxLoan = maxLoan;
    this->loanRate = loanRate;
    this->ownsBank = 0.0;
}

BrassPlus::BrassPlus(const Brass &brass, double maxLoan, double loanRate) : Brass(brass)
{
    this->maxLoan = maxLoan;
    this->loanRate = loanRate;
    this->ownsBank = 0.0;
}

void BrassPlus::Withdraw(double money)
{
    format initialStatus = setFormat();
    precis prec = cout.precision(2);
    double bal = Balance();
    if (money <= bal)
    {
        // 如果自己钱够的话直接取走
        Brass::Withdraw(money);
    }
    else if (money < bal + maxLoan - ownsBank)
    {
        // 加上贷款的透支满足的话 也可以取走
        double loadMoney = money - bal;

        ownsBank += loadMoney * (1.0 + loanRate);
        // 1 存入贷款的钱
        Brass::Deposit(loadMoney);
        // 2 取走需要的钱
        Brass::Withdraw(money);
    }
    else
    {
        cout << "The max money you can withdraw is $" << bal + maxLoan - ownsBank << " but you need $" << money << endl;
    }

    restore(initialStatus, prec);
}

void BrassPlus::ShowAcc() const
{
    format inittialStatus = setFormat();
    precis prec = cout.precision(2);

    Brass::ShowAcc();
    cout << "maxLoan:" << maxLoan << endl;
    cout.precision(3);
    cout << "loanRate:" << loanRate * 100 << "%" << endl;
    cout << "ownsBank:" << ownsBank << endl;
    restore(inittialStatus, prec);
}

void BrassPlus::ResetMaxLoan(double maxLoan)
{
    this->maxLoan = maxLoan;
}

void BrassPlus::ResetLoadRate(double loadRate)
{
    this->loanRate = loadRate;
}

void BrassPlus::ResetOwnsBank(double ownsBank)
{
    this->ownsBank = ownsBank;
}

// ================ 格式化 ================
format setFormat()
{
    return cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
}

void restore(format f, precis p)
{
    cout.setf(f, std::ios_base::floatfield);
    cout.precision(p);
}