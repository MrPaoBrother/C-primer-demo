#include "stack.h"

const int charNums = 3;

// FIX: Next Time fix it!
int main(void)
{
    {
        Stack<const char *> st;

        const char *contents[charNums] = {
            "1:hello",
            "2:cao",
            "3:good"};

        for (int i = 0; i < charNums; i++)
        {
            st.push(contents[i]);
            // std::cout << stack <<std::endl;
        }
    }
    return 0;
}