#include <iostream>

using std::cout;
using std::endl;

extern double warming;

void update(double);
void local();

void update(double degrees)
{
    warming += degrees;
    cout << "after update " << degrees << " degrees"
         << " now warming is:" << warming << endl;
}

void local()
{
    double warming = 1.5;
    cout << "local warming is:" << warming << endl;
    cout << "now global warming is:" << ::warming << endl;
}