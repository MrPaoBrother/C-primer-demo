#include <iostream>
#include "stringbad.h"

using namespace std;

void callme1(StringBad);
void callme2(StringBad &);

int main(int argc, char const *argv[])
{
    {
        /* code */
        StringBad headline1("hello world");
        StringBad headline2("good luck");
        StringBad sport("nba");

        cout << "headline1:" << headline1 << endl;
        cout << "headline2:" << headline2 << endl;
        cout << "sport:" << sport << endl;

        callme2(headline1);
        cout << "headline1:" << headline1 << endl;

        StringBad sailor = sport;
        // sailor = sport;
        cout << "sailor:" << sailor << endl;

        StringBad knot;
        knot = headline1;
        cout << "knot: " << knot << endl;
    }
    cout << "end of main()" << endl;
    return 0;
}

void callme1(StringBad s)
{
    cout << "callme1 string:\n"
         << s << endl;
}

void callme2(StringBad &s)
{
    cout << "callme2 string:\n"
         << s << endl;
}