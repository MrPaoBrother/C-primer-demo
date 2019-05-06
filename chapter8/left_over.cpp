#include <iostream>

using namespace std;

unsigned long left(unsigned long num, int bias = 1);
char *left(const char *, int n = 1);

const int LIMIT = 20;

int main(void)
{
    unsigned long test_num = 123456789;
    char test_char[100] = "hello world!!";
    char *temp;
    for (int i = 0; i < LIMIT; i++)
    {
        cout << left(test_num, i + 1) << endl;
        temp = left(test_char, i + 1);
        cout << temp << endl;
        delete[] temp;
    }

    return 0;
}

unsigned long left(unsigned long num, int bias)
{
    int digits = 1;
    int num_temp = num;
    while (num_temp = num_temp / 10)
    {
        /* code */
        digits ++;
    }
    if (bias > digits){
        return num;
    }
    
    bias = digits - bias;

    while (bias --)
    {
        /* code */
        num /= 10;
    }
    return num;
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