#include "worker.h"

const int LIM = 4;

int main(void)
{
    Waiter power("power", 100, 10);
    Singer huige("huige", 101, 2);
    Waiter liyang;
    Singer kuang;

    Worker *w[LIM] = {
        &power,
        &huige,
        &liyang,
        &kuang};

    for (int i = 2; i < LIM; i++)
    {
        w[i]->Set();
    }
    for (int i = 0; i < LIM; i++)
    {
        w[i]->Show();
    }
    return 0;
}