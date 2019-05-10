#ifndef BANK_H_
#define BANK_H_

class Customer
{
private:
    long arrive;
    int proecss;

public:
    Customer();
    Customer(long when);
    Customer(long when, int p);
    ~Customer();
    void set(long when);
    long get_when() const;
    int get_process() const;
    Customer &operator=(const Customer &);
};

typedef Customer Item;

struct Node
{
    Item item;
    Node *next;
};

class Queue
{
private:
    enum
    {
        Q_SIZE = 10
    };
    Node *front;
    Node *rear;
    int items;
    // 类里面如果有非静态的const 数据成员则初始化需要 类似psize(n)这样
    const int psize;
    Queue(const Queue &);
    Queue &operator=(const Queue &);

public:
    Queue(int size = Q_SIZE);
    ~Queue();
    bool enqueue(const Item &);
    bool dequeue();
    int qcount() const;
    bool isempty() const;
    bool isfull() const;
};

#endif