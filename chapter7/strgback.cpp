#include <iostream>

using namespace std;

char *buildstr(char ch, int n);
char *buildstr2(char ch, int n);
int main(int argc, char const *argv[])
{
    char ch;
    int count;
    cin >> ch >> count;

    char *p = buildstr2(ch, count);
    cout << "p is :" << p << endl;
    delete[] p;

    p = buildstr2('+', 20);
    cout << p << "-Done-" << p << endl;
    delete[] p;

    return 0;
}

char *buildstr(char ch, int n)
{
    char *str = new char[n + 1];
    str[n] = '\0';
    while (n-- > 0)
    {
        /* code */
        str[n] = ch;
    }
    return str;
}

char *buildstr2(char ch, int n)
{
    char *str = new char[n + 1];
    char *head = str;
    str[n] = '\0';
    while (n-- > 0)
    {
        /* code */
        *str = ch;
        str ++;
    }
    return head;
}
