#include <iostream>
using namespace std;

int c_in_str(const char *str, char ch);

int main(void)
{
    char str_one[100] = "hello";
    char str_two[100] = "world";

    cout << "find l in " << str_one << " " << c_in_str(str_one, 'l') << " times" << endl;
    cout << "find l in " << str_two << " " << c_in_str(str_two, 'l') << " times" << endl;

    return 0;
}

int c_in_str(const char *str, char ch)
{
    int count = 0;
    while (*str)
    {
        /* code */
        if (*str == ch)
        {
            count++;
        }
        str++;
    }
    return count;
}