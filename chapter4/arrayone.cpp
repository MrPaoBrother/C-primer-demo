#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int y[2];
    y[0] = 10;
    y[1] = 20;

    cout << "size of y is :" << sizeof(y) << endl;
    cout << "size of y[0] is :" << sizeof(y[0]) << endl;

    char hello[5] = {'h', '\0', 'l', 'l', 'o'};
    cout << hello <<endl;
    return 0;
}
