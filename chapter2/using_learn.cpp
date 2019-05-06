#include <iostream>
#include<math.h>

using std::cin;
using std::cout;
using std::endl;

double getSqrt(double n)
{   
    return sqrt(n);
}

int main(void)
{
    double rabbit;
    cout << "hello" << endl;
    cin >> rabbit;
    cout << rabbit << "sqrt rabbit is"<<getSqrt(rabbit)<<endl;
    return 0;
}