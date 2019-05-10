#include <iostream>
#include <ctime>

#include "bank.h"

int main(int argc, char const *argv[])
{
    {
        using std::cout;
        using std::endl;

        Queue q(3);
        Item item;
        long now = time(0);
        cout << "now:" << now << endl;

        item.set(time(0));
        q.enqueue(item);
        cout << "q.size:" << q.qcount() << endl;

        q.dequeue();
        cout << "q.size:" << q.qcount() << endl;
    }
    return 0;
}
