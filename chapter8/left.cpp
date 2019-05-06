#include <iostream>

using namespace std;

char *left(const char *origin, int n = 1);

const int arrSize = 20;

int main(int argc, char const *argv[])
{
    char origin[arrSize];
    cin.get(origin, arrSize);
    // cin >> origin;

    char *p = left(origin, 10);
    cout << p << endl;
    delete[] p;

    p = left(origin);
    cout << p << endl;
    delete[] p;

    return 0;
}

char *left(const char *origin, int n)
{
    if (n < 0)
    {
        n = 0;
    }
    char *p = new char[n + 1];
    int i;
    for (i = 0; i < n && origin[i]; i++)
    {
        p[i] = origin[i];
    }

    while (i <= n)
    {
        /* code */
        p[i++] = '\0';
    }
    return p;
}
