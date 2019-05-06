#include <iostream>
#include "stock00.h"

int main(int argc, char const *argv[])
{
    {
        Stock alibaba;
        alibaba.acquire("alibaba", 100001, 1.32);
        alibaba.show();

        alibaba.sell(1000, 1.3);
        alibaba.show();

        alibaba.buy(10, 1.2);
        alibaba.show();

        alibaba.update(2.1);
        alibaba.show();

        alibaba.sell(90000, 1.5);
        alibaba.show();

        std::cout << "use ====== contruct ========== func" << std::endl;
        Stock *s_new = new Stock{"new", 100, 1.02};
        s_new->show();

        Stock s1("power", 100, 1.23);
        s1 = Stock("temp1", 1002, 0.4);
        Stock s2 = Stock("power2", 200, 2.33);
        s1.show();
        s2.show();
        s2 = s1;
        s2.show();
        Stock s3;
        s3.show();
        delete s_new;

        std::cout << "================top===================" << std::endl;
        Stock tencent("tencent", 1990, 1.45);
        Stock wangyi("wangyi", 1888, 1.56);

        const Stock *top = &tencent.topval(wangyi);
        top->show();
    }
    return 0;
}
