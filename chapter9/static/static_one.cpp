#include <iostream>
using namespace std;

void add(int n);

// static const int asd = 100;

// extern "C++" void spiff(void);

int main(int argc, char const *argv[])
{
    add(3);
    add(4);
    return 0;
}

void add(int n)
{
    static int total = 0;
    total += n;
    cout << "after add n:" << n << " total is:" << total << endl;
}
