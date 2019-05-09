#include <iostream>
#include "string1.h"

const int MaxLen = 81;
const int ArraySize = 5;
// 找出最短和最小的字符串

int main(int argc, char const *argv[])
{
    using std::cin;
    using std::cout;
    using std::endl;

    char temp[MaxLen];
    String strs[ArraySize];

    int i;

    for (i = 0; i < ArraySize; i++)
    {
        cout << i + 1 << ":";
        cin.get(temp, MaxLen);
        while (cin && cin.get() != '\n')
            continue;

        if (!cin || temp[0] == '\0')
        {
            break;
        }
        // cout << "strs[" << i << "]" << strs[i] << endl;
        strs[i] = temp;
    }

    if (i > 0)
    {
        int len_short = 0;
        int shortest = 0;

        cout << "what's your input:" << endl;
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << ":" << strs[j] << endl;
            if (strs[j].get_len() < strs[len_short].get_len())
                len_short = j;
            if (strs[j] < strs[shortest])
                shortest = j;
        }

        cout << "shortest and the most less len:" << endl;
        cout << "len short is:" << strs[len_short] << endl
             << "shortest:" << strs[shortest] << endl;
    }
    else
    {
        cout << "no input Bye!" << endl;
    }
    return 0;
}
