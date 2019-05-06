#include <iostream>
#include <fstream>

#include "mytime0.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Time planning;
    planning.Show();

    Time coding(2, 59);
    coding.Show();

    Time fixing(4, 20);
    fixing.Show();

    Time testing(1, 59);
    testing.Show();

    Time total;
    total = planning + coding + fixing + testing;
    total.Show();

    total = total * 2;
    total.Show();

    total = 10.5 * total;
    total.Show();

    cout << "====== << operator =========" << endl;
    cout << "total detail:" << endl
         << total << endl
         << "Bye Bye!";

    ofstream fout;
    fout.open("./test.txt");
    fout << total;
    return 0;
}
