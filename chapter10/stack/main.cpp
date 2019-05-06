#include <iostream>
#include "stack.h"

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    Stack myStack;
    for (int i = 0; i < 100; i++)
    {
        if (!myStack.push(i))
        {
            Item item = myStack.pop();
            cout << "pop item:" << item << endl;
            i--;
        }
    }
    return 0;
}
