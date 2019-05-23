#include "worker.h"

using std::cin;
using std::cout;
using std::endl;
using std::getline;

Worker::~Worker()
{
    // 什么也不用做 但是必须要定义
}

void Worker::Set()
{
    cout << "Enter Worker's Name:";
    getline(cin, fullname);
    cout << "Enter worker's id:";
    cin >> id;
    while (cin.get() != '\n')
    {
        /* code */
        continue;
    }
}

void Worker::Show() const
{
    cout << "Worker name:" << fullname << endl;
    cout << "Worker id:" << id << endl;
}

void Waiter::Set()
{
    Worker::Set();
    cout << "Enter Waiter panache:";
    cin >> panache;
    while (cin.get() != '\n')
    {
        /* code */
        continue;
    }
}

void Waiter::Show() const
{
    Worker::Show();
    cout << "Waiter panache:" << panache << endl;
}

// 什么意思?
char *Singer::pv[] = {
    "other", "alto", "contralto", "soprano", "bass", "baritone", "tenor"};

void Singer::Set()
{
    Worker::Set();
    cout << "Look at the tips:" << endl;
    for (int i = 0; i < Vtypes; i++)
    {
        cout << i << ": " << pv[i] << endl;
    }
    cout << "Enter a voice type:";
    while (cin >> voice && (voice < 0 || voice > Vtypes))
    {
        /* code */
        cout << "Enter Error, you need enter type in range[" << 0 << ", " << Vtypes << "]" << endl;
    }

    while (cin.get() != '\n')
    {
        continue;
    }
}

void Singer::Show() const
{
    Worker::Show();
    cout << "Singer voice:" << voice << endl;
}