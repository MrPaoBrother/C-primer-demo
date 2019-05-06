#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int* p = &a;
    cout<< &a <<endl;
    cout << p <<endl;
    cout << *p <<endl;
    return 0;
}
