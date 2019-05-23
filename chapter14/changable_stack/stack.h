#ifndef STACKC_H_
#define STACKC_H_

#include <iostream>
using std::ostream;

template <class Type>
class Stack
{
private:
    enum
    {
        SIZE = 10
    };
    int stacksize;
    int top;
    Type *items;

public:
    explicit Stack(int stacksize = SIZE);
    Stack(const Stack &);
    ~Stack(){delete[] items;}
    bool isfull() { return top >= stacksize; }
    bool isempty() { return top <= 0; }
    bool push(const Type &);
    bool pop(Type &);
    Stack &operator=(const Stack &);

    // friend
    // friend ostream &operator<<(ostream &os, const Stack &stack);
};
#endif