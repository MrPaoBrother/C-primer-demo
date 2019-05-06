#include <iostream>
using namespace std;

extern int a;
extern int b;

int main(int argc, char const *argv[])
{
    cout << "a:" << a << " addr of a:" << &a << endl;
    cout << "b:" << b << " addr of b:" << &b << endl;
    return 0;
}
