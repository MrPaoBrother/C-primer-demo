#include <iostream>
#include "stock00.h"
using std::cout;
using std::endl;

Stock::~Stock()
{
    cout << "Bye " << company << endl;
}

Stock::Stock()
{
    cout << "use default construct" << endl;
    company = "no name";
    shares = 0;
    share_val = 0;
    set_tot();
}

Stock::Stock(const std::string &co, long n, double pr)
{
    cout << "use " << co << " constructor" << endl;
    company = co;
    shares = n;
    share_val = pr;
    set_tot();
}
void Stock::acquire(const std::string &co, long n, double pr)
{
    company = co;
    if (n < 0)
    {
        shares = 0;
    }
    else
    {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

void Stock::buy(long num, double pr)
{
    if (num < 0)
    {
        return;
    }
    shares += num;
    share_val = pr;
    set_tot();
}

void Stock::sell(long num, double pr)
{
    if (num < 0)
    {
        return;
    }
    if (num > shares)
    {
        cout << "sell stocks are more than yourself" << endl;
        return;
    }
    shares -= num;
    share_val = pr;
    set_tot();
}

void Stock::update(double pr)
{
    share_val = pr;
    set_tot();
}

void Stock::show() const
{
    using std::ios_base;
    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "Company:" << company << endl
         << " Shares:" << shares << endl;

    cout << "share price:" << share_val << endl;

    cout.precision(2);

    cout << "total_val:" << total_val << endl;

    cout << "==========================" << endl;
    // cout << "company:" << company << endl;
    // cout << "shares:" << shares << " pre share val:" << share_val << " total shares:" << total_val << endl;
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}

// 判定股票大小
const Stock &Stock::topval(const Stock &other) const
{
    if (other.total_val > this->total_val)
    {
        return other;
    }
    else
    {
        return *this;
    }
}