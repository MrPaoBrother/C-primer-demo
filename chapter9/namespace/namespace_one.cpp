#include <iostream>
#include <string>
using namespace std;

namespace power
{
struct people
{
    string name;
    int age;
};

void description(people p)
{
    cout << "name:" << p.name << " age:" << p.age << endl;
}
} // namespace power

using namespace power;


int main(void)
{

    people p = {
        "power",
        20};
    description(p);
    return 0;
}