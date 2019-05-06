#include <iostream>
using namespace std;

void swap1(int, int);
void swap2(int &, int &);
void swap3(int *, int *);

int main(void)
{
    int a, b;
    a = 2;
    b = 3;
    swap1(a, b);
    cout << a << b<<endl;
    swap2(a, b);
    cout << a << b<<endl;
    swap3(&a, &b);
    cout << a << b<<endl;
}

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap3(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}