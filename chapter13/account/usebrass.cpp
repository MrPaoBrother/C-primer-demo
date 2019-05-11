#include "brass.h"

using std::cout;
using std::endl;

int main(void)
{
    Brass power("power", 81444188, 4000.00);
    BrassPlus powerPlus("powerPlus", 81444189, 3000.00);
    cout << "< power account show >" << endl;
    power.ShowAcc();

    cout << "< powerPlus account show >" << endl;
    powerPlus.ShowAcc();

    cout << "deposit $500 to power account" << endl;
    power.Deposit(500.0);
    power.ShowAcc();

    cout << "deposit $500 to powerPlus account" << endl;
    powerPlus.Deposit(300.0);
    powerPlus.ShowAcc();

    cout << "withDraw $4600 to power account" << endl;
    power.Withdraw(4000.00);
    power.ShowAcc();

    cout << "withDraw $4600 to power account" << endl;
    powerPlus.Withdraw(3600.00);
    powerPlus.ShowAcc();
    return 0;
}