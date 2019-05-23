#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using std::ostream;

template <class T>
class Stack
{
private:
    enum
    {
        MAX = 10
    };
    T items[MAX];
    int top;

public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const T &);
    bool pop(T &);
    // 似乎不能这样用
    // friend ostream &operator<<(ostream &, const Stack<T> &);
};
#endif