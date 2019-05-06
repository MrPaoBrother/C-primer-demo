#include <iostream>
#include "coordin.h"

using namespace std;

int main(int argc, char const *argv[])
{
    rect r;
    polar p;
    cout << "input x, y:" << endl;
    while (cin >> r.x >> r.y)
    {
        /* code */
        p = rect_to_polar(r);
        show_polar(&p);
        cout << "Next x, y:(input q exit)";
    }

    return 0;
}
