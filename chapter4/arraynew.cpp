#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char const *argv[])
{
    double *p3 = new double [3];

    p3[0] = 1.0;
    p3[1] = 1.1;
    p3[2] = 1.2;

    cout << *p3 <<endl;
    cout << *(p3 + 1) <<endl;
    cout << sizeof(p3[0]) <<endl;

    char flat[20] = "flat";
    strcpy(flat, "haha");
    strncpy(flat, "aaaaaaaaaaaaa sssssssssss", 10);
    cout << flat <<endl;
    return 0;
}
