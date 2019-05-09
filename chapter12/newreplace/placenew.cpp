#include "newplace.h"

using std::cout;
using std::endl;

JustTesting::JustTesting(string s, int n)
{
    word = s;
    num = n;
    cout << "created word:" << word << " n:" << num << endl;
}

JustTesting::~JustTesting()
{
    cout << "destroy:(" << word << ", " << num << " )" << endl;
}

void JustTesting::Show()
{
    cout << "show: " << word << " " << num << endl;
}