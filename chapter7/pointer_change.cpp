#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 1;
    int b = 3;
    const int *ptr = &a;
    
    a = 2;
    cout << *ptr << endl;
    // ptr = &b;
    // cout << *ptr <<endl;

    // int* const情况
    int* const ptr_one = &a;
    cout << "ptr_one:" << *ptr_one <<endl;
    *ptr_one = 1000;
    cout << "ptr_one:" << *ptr_one <<endl;

    cout<< "a:" << a << endl;
    cout << "ptr: " << *ptr << endl;
    return 0;
}
