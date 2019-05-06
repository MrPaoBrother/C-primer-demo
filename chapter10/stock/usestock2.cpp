#include <iostream>
#include "stock00.h"

using namespace std;

const int STOCK_NUMS = 3;

int main(int argc, char const *argv[])
{
    Stock stocks[STOCK_NUMS] = {
        Stock("alibaba", 1000, 1.23),
        Stock("tencent", 2000, 0.65),
        Stock("microsoft", 500, 3.66)};

    const Stock *top = &stocks[0];

    for (int i = 0; i < STOCK_NUMS; i++)
    {
        stocks[i].show();
        top = &top->topval(stocks[i]);
    }

    cout << "print top stock:" << endl;
    top->show();
    return 0;
}
