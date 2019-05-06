#include <iostream>
#include <climits>

using namespace std;

int main(int argc, char const *argv[])
{
    int n_int = INT_MAX;
    unsigned long long l_long = ULLONG_MAX;

    cout << "size of int is:" << sizeof(n_int) << endl;
    cout << "size of unsignd long long is:" << sizeof(l_long) << endl;

    int dec_a = 42;
    int oct_a = 42;
    int hex_a = 42;

    cout << dec;
    cout << "dec_a:" << dec_a << endl;
    cout << oct;
    cout << "otc_a:" << oct_a << endl;
    cout << hex;
    cout << "hex_a:" << hex_a << endl;

    char ch = 'M';
    int i  = ch;
    cout<<"ch:";
    cout.put(ch);
    cout<<dec;
    cout << " ASII is:" <<i<<endl;

    cout <<'\a $'<<endl;
    cout.put('$');
    return 0;
}
