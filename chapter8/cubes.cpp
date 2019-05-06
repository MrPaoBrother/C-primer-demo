#include <iostream>

using namespace std;

double cube(const double &r);

int main(void)
{
    double x = 3;
    cout << cube(x) << endl;
    cout << x << endl;
}

double cube(const double &r)
{
    double a = r;
    return a * a * a;
}