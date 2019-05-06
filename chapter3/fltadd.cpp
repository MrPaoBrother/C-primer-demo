#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    float a = 2.34E+22f;
    float b = a + 1.0f;
    cout << "a=" << a <<endl;
    cout << " b - a = " << b - a <<endl;

    char c1{100};
    cout<<static_cast<int> (c1)<<endl;

    auto n = 100;
    return 0;
}
