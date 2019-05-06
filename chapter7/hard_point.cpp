#include <iostream>
#include <string>
using namespace std;

const double *f1(const double ar[], int n);
const double *f2(const double *ar, int n);
const double *f3(const double *, int n);

void print(const double *val);

const int SIZE = 3;

int main(void)
{
    double arr[SIZE] = {1.11, 2.22, 3.33};
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;

    cout << "============== p1 and p2 ==============" << endl;
    print((*p1)(arr, SIZE));
    print(p2(arr, SIZE));

    cout << "============== pa and pb ==============" << endl;
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    // auto pb = pa;
    const double* (**pb)(const double *, int) = pa;
    for (int i = 0; i < SIZE; i++)
    {
        print(pa[i](arr, SIZE));
        print(pb[i](arr, SIZE));
    }

    // auto pc = &pa;
    const double* (*(*pc)[3])(const double * ,int) = &pa;
    cout << "============== pc[0] and pd[0] ==============" << endl;
    print((*pc)[0](arr, SIZE));
    auto pd = &pa;
    print((*pd)[0](arr, SIZE));

    cout << "============== pdb[1] ==============" << endl;
    const double* pdb = (*pd)[1](arr, SIZE);
    print(pdb);
    return 0;

    cout << "============== pc[2] and pd[2] ==============" << endl;
    print((*pc)[2](arr, SIZE));
    print((*pd)[2](arr, SIZE));
}

void print(const double *val)
{
    cout << "addr:" << val << " value:" << *val << endl;
}
const double *f1(const double *arr, int n)
{
    return arr;
}

const double *f2(const double *arr, int n)
{
    return arr + 1;
}

const double *f3(const double *arr, int n)
{
    return arr + 2;
}