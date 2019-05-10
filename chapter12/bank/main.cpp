#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <ctime>
#include "bank.h"

using std::cout;
using std::endl;

int main(void)
{
    Queue bank(20);
    // 设置随机种子
    srand(time(0));

    int into_pers = rand() % 50 + 1;
    cout << into_pers << " persons ready into bank!" << endl;
    for (int i = 0; i < into_pers; i++)
    {
        Customer c;
        c.set(time(0));
        if (bank.enqueue(c) == false)
        {
            cout << "bank is full! there are " << bank.qcount() << " customers in bank!" << endl;
            while (bank.isempty() == false)
            {
                bank.dequeue();
                cout << "customer is getting monkey...." << endl;
                // Sleep(item.get_process());
            }
        }
        else
        {
            cout << "customer into success!" << endl;
        }
    }
    return 0;
}