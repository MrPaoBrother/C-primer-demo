#include <iostream>

using namespace std;

template <class T>
T lesser(T a, T b);

int lesser(int a, int b);

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 2;
    double m = -100.1;
    double n = 3.2;

    cout << lesser(a, b) << endl;
    cout << lesser(m, n) << endl;
    cout << lesser<>(a, b) << endl;
    cout << lesser<int>(m, n) << endl;
    
    return 0;
}

template <class T>
T lesser(T a, T b)
{
    return a < b ? a : b;
}

int lesser(int a, int b)
{
    if (a < 0)
    {
        a = -a;
    }
    if (b < 0)
    {
        b = -b;
    }
    return a < b ? a : b;
}
