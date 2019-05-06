#include<iostream>
#include<string>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;

    // cin >> str;
    getline(cin, str);
    cout << str <<endl;

    string str1;
    str1 = str;
    cout << "str1:" << str1 <<endl;
    str1 = "abc";
    cout << "str:" << str << "size of str is:" << str.size() <<endl;
    return 0;
}
