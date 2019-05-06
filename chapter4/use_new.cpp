#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int *p = new int;
    double *p_d = new double;

    *p = 1001;
    *p_d = 100.0;

    cout << "location of p:" << p << " and size of *p:" << sizeof(*p) << endl;
    cout << "location of p:" << p_d << " and size of *p:" << sizeof(*p_d) << endl;

    delete p;
    delete p_d;

    int *arr = new int[10];
    delete[] arr;
    return 0;
}
