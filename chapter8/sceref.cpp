#include <iostream>

using namespace std;

int main(void)
{
    int a = 1;
    int &b = a;
    cout << "addr:a,b=>" << &a << " " << &b << endl;

    int c = 2;
    b = c;
    cout << "addr:a,b=>" << &a << " " << &b << endl;    
}