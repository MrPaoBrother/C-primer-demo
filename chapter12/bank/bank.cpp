#include <iostream>
#include <cstdlib>
#include <ctime>
#include "bank.h"

using std::cout;
using std::endl;

Customer::Customer()
{
    arrive = proecss = 0;
}

Customer::Customer(long when)
{
    arrive = when;
}

void Customer::set(long when)
{
    // 随机数
    srand(time(0));
    arrive = when;
    proecss = rand() % 3 + 1;
}

Customer::~Customer()
{
    // cout << "delete one customer!" << endl;
}

int Customer::get_process() const
{
    return proecss;
}
long Customer::get_when() const
{
    return arrive;
}
Customer &Customer::operator=(const Customer &item)
{
    this->arrive = item.arrive;
    this->proecss = item.proecss;
    return *this;
}
// ==============下面是Queue的定义=============
Queue::Queue(int size) : psize(size)
{
    front = rear = nullptr;
    items = 0;
}

bool Queue::isempty() const
{
    return items <= 0;
}

bool Queue::isfull() const
{
    return items >= psize;
}

int Queue::qcount() const
{
    return items;
}

Queue::~Queue()
{
    Node *temp;
    while (front != nullptr)
    {
        cout << "queue deleted success" << endl;
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::enqueue(const Item &item)
{
    if (isfull())
        return false;
    // 这里不能直接Node *n;
    Node *n = new Node;
    n->next = nullptr;
    n->item = item;
    if (front == nullptr)
    {
        front = n;
    }
    else
    {
        rear->next = n;
    }
    rear = n;
    items++;
    cout << "enqueue success" << endl;
    return true;
}

bool Queue::dequeue()
{
    if (isempty())
        return false;
    Node *n = front;
    front = front->next;
    delete n;
    items--;
    // 感觉只要一个判断就行
    if (front == nullptr || items <= 0)
    {
        rear = nullptr;
    }
    return true;
}

// 这两个赋值队列的方法设置为私有 不放出来
Queue::Queue(const Queue &q) : psize(0)
{
}

Queue &Queue::operator=(const Queue &q)
{
    return *this;
}