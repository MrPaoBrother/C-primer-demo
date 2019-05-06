#include <iostream>
#include <vector>
#include <array>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    // C++ 11
    array<double, 4> a3 = {1.1, 1.2, 1.3, 1.4};
    array<double, 4> a4;
    a4 = a3;

    cout<< "a3[2] addr:" << &a3[2] <<endl;
    cout<< "a4[2] addr:" << &a4[2] <<endl;
    return 0;
}
