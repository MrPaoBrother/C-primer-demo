#ifndef STACK_H_
#define STACK_H_
typedef unsigned long Item;

class Stack
{
private:
    enum
    {
        MAX = 10
    };
    Item item[MAX];
    int top;

public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Item &item);
    Item pop();
};
#endif