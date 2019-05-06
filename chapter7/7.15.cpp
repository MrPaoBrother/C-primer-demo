#include <iostream>
#include <string>
#include <array>

using namespace std;

const int SEASON = 4;
const array<string, SEASON> Snames = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, SEASON> *p);
void show(array<double, SEASON> bill);

int main(int argc, char const *argv[])
{
    array<double, SEASON> p;
    fill(&p);
    show(p);
    return 0;
}

void fill(array<double, SEASON> *p)
{
    for (int i = 0; i < SEASON; i++)
    {
        cout << "你在季节:" << Snames[i] << "的消费是:";
        cin >> (*p)[i];
    }
}

void show(array<double, SEASON> p)
{
    double total = 0.0;
    cout<<"下面是你这个季度的消费账单:"<<endl;

    for (int i = 0; i < SEASON; i++)
    {
        total += p[i];
        cout<<Snames[i]<<"消费了:"<<p[i]<<"元"<<endl;
    }
    cout<<"您今年总共消费了:"<<total<<"元"<<endl;
}
