#include <iostream>
#include "newplace.h"

const int BUF = 512;

int main(int argc, char const *argv[])
{
    char *buffers = new char[BUF];
    JustTesting *p1, *p2;
    p1 = new JustTesting("hello world", 100);
    p2 = new JustTesting("power", 1001);

    p1->Show();
    p2->Show();
    delete[] buffers;
    delete p1;
    delete p2;

    return 0;
}
