#include "stack.h"

template <class Type>
Stack<Type>::Stack(int stacksize) : stacksize(stacksize), top(0)
{
    items = new Type[stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack &stack)
{
    this->top = stack.top;
    this->stacksize = stack.stacksize;
    this->items = new Type[stacksize];
    for (int i = 0; i < stacksize; i++)
    {
        this->items[i] = stack.items[i];
    }
}

template <class Type>
bool Stack<Type>::push(const Type &item)
{
    if (isfull())
    {
        return false;
    }
    items[top++] = item;
    return true;
}

template <class Type>
bool Stack<Type>::pop(Type &item)
{
    if (isempty())
    {
        return false;
    }
    item = items[top--];
    return true;
}

template <class Type>
Stack<Type> &Stack<Type>::operator=(const Stack<Type> &stack)
{
    if (this == &stack)
    {
        return *this;
    }
    delete[] items;
    this->top = stack.top;
    this->stacksize = stack.stacksize;
    items = new Type[this->stacksize];
    for (int i = 0; i < this->stacksize; i++)
    {
        items[i] = stack[i];
    }
    return *this;
}

// template <class Type>
// ostream &operator<<(ostream &os, const Stack<Type> &stack)
// {
//     os << "stacksize:" << stack.stacksize << std::endl;
//     os << "current top:" << stack.top << std::endl;
//     for (int i = 0; i < stack.top; i--)
//     {
//         os << "stack[" << i << "]=" << stack.items[i] << std::endl;
//     }
//     return os;
// }