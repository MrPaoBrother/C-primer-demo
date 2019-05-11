#include "tabtenn.h"

using std::cout;
using std::endl;
using std::string;

void Show(const TableTennisPlayer &p);

int main(void)
{
    // 创建两个player
    TableTennisPlayer p1("liliang", "gao", true);
    TableTennisPlayer p2("kunpeng", "ren", false);

    Show(p1);
    Show(p2);
    // 派生类使用
    RatedPlayer rp(1000, p1);
    rp.Name();

    cout << "rp's rating:" << rp.Rating() << endl;
}

void Show(const TableTennisPlayer &p)
{
    p.Name();
    if (p.HasTable())
        cout << "hasTable = true" << endl;
    else
        cout << "hasTable = false" << endl;
}