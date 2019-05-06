#include <iostream>
#include <string.h>

using namespace std;

char *getname(void);

int main(int argc, char const *argv[])
{
    char *name;
    name = getname();

    cout << name << " at " << (int*) name <<endl;
    delete[] name;
    return 0;
}

char *getname()
{
    char name[80];
    cin >> name;
    char *pn = new char[strlen(name) + 1];

    strcpy(pn, name);
    return pn;
}