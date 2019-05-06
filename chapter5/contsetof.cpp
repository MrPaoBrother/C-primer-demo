#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    cout.setf(ios_base::boolalpha);
    cout << (5 > 3) << endl;

    double prices[2] = {1.1, 2.2};
    for (double &item : prices)
    {
        cout << item << endl;
        item = 1.0;
    }

    cout << prices[0] <<endl;

    char ch;
    int count = 0;
    cin.get(ch);

    while (cin.fail() == false)
    {
        /* code */
        cout<<ch<<endl;
        count ++;
        cin.get(ch);
    }
    cout << endl << count << " chars" <<endl;
    return 0;
}
