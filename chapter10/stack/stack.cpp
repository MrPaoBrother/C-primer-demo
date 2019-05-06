#include <iostream>
#include "stack.h"
using namespace std;

Stack::Stack()
{
    top = 0;
}

bool Stack::isempty()
{
    if (top <= 0)
    {
        return true;
    }
    return false;
}

bool Stack::isfull()
{
    if (top >= MAX)
    {
        return true;
    }
    return false;
}

bool Stack::push(const Item &item)
{
    if (isfull())
    {
        cout << "stack is full, cannot push" << endl;
        return false;
    }
    this->item[top] = item;
    top++;
    return true;
}

Item Stack::pop()
{
    if (isempty())
    {
        cout << "stack is empty, cannot pop" << endl;
        return false;
    }
    top--;
    Item pop_item = item[top];
    this->item[top] = 0;
    return pop_item;
}