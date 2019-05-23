#include "stack.h"

using std::cout;
using std::endl;

template <class T>
Stack<T>::Stack()
{
    top = 0;
}

template <class T>
bool Stack<T>::isempty()
{
    return top <= 0;
}

template <class T>
bool Stack<T>::isfull()
{
    return top >= MAX;
}

template <class T>
bool Stack<T>::push(const T &item)
{
    if (top >= MAX)
    {
        cout << "stack is full" << endl;
        return false;
    }
    items[top++] = item;
    return true;
}

template <class T>
bool Stack<T>::pop(T &item)
{
    if (top <= MAX)
    {
        cout << "stack is empty" << endl;
        return false;
    }
    item = items[--top];
    return true;
}

// template <class T>
// ostream &operator<<(ostream &os, const Stack<T> &stack)
// {
//     // while (!stack.isempty())
//     // {
//     //     /* code */
//     //     T item;
//     //     item = stack.pop(item);
//     //     os << item << endl;
//     // }
//     for (int i = top - 1; i >= 0; i--)
//     {
//         os << items[i] << endl;
//     }
//     return os;
// }