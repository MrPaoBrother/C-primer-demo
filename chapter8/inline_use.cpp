#include <iostream>

using namespace std;

inline double square(double x) { return x * x; }

int main()
{
    double x = 5.0;
    cout << square(++x) << endl;
}