#include <iostream>
#include <string>
using namespace std;

struct ticket
{
    /* data */
    double price;
    string name;
};

template <typename T>
void Swap(T &a, T &b);

template <>
void Swap<ticket>(ticket &t1, ticket &t2);

void Show(const ticket t);

int main(int argc, char const *argv[])
{
    int a, b;
    a = 1;
    b = 2;
    Swap(a, b);
    cout << a << " " << b << endl;

    ticket t1 = {
        1.1,
        "t1"};
    ticket t2 = {
        2.2,
        "t2"};

    Swap(t1, t2);
    Show(t1);
    Show(t2);

    test(3);
    return 0;
}

template <typename T>
void Swap(T &a, T &b)
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

template <>
void Swap<ticket>(ticket &t1, ticket &t2)
{
    string temp;
    temp = t1.name;
    t1.name = t2.name;
    t2.name = temp;
}

void Show(const ticket t)
{
    cout << "name:" << t.name << " price:" << t.price << endl;
}
