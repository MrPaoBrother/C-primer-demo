#include <iostream>
using namespace std;

/*
不同银行汇率不同
*/

struct Bank
{
    double money;
    int years;
};

double save_money(Bank bank, double (*p)(Bank));

double save_in_zhaoshang(Bank bank);
double save_in_gongshang(Bank bank);

int main(int argc, char const *argv[])
{
    double money;
    int years;
    cin >> money >> years;

    cout << "money:" << money << " years:" << years << endl;
    Bank bank = {
        money,
        years};
    cout << "you will get:" << save_money(bank, save_in_zhaoshang) << " if you save in zhaoshang" << endl;
    cout << "you will get:" << save_money(bank, save_in_gongshang) << " if you save in gongshang" << endl;
    return 0;
}

double save_in_zhaoshang(Bank bank)
{
    return bank.money * bank.years * 1.5;
}

double save_in_gongshang(Bank bank)
{
    return bank.money * bank.years * 1.6;
}

double save_money(Bank bank, double (*p)(Bank))
{
    return (*p)(bank);
}