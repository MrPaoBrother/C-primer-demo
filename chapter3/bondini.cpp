#include <iostream>

using namespace std;

int main()
{
    long code;
    cout << "enter your code: _____\b\b\b\b";
    cin >> code;
    cout << "\007 You entered " << code << endl;
    
    return 0;
}