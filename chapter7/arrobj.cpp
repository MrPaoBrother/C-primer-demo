#include <iostream>
#include <string>
#include <array>

using namespace std;

const int Seasons_Nums = 4;

const array<string, Seasons_Nums> Season = {"Spring", "Summer", "Fall", "Winter"};

void fill(array<double, Seasons_Nums> *expense);
void display(array<double, Seasons_Nums> expense);

int main(int argc, char const *argv[])
{
    array<double, Seasons_Nums> expense;
    fill(&expense);
    display(expense);
    return 0;
}
void fill(array<double, Seasons_Nums> *p)
{
    for (int i = 0; i < Seasons_Nums; i++)
    {
        cout << "Enter your expense in " << Season[i] << ":" << endl;
        cin >> (*p)[i];
    }
}

void display(array<double, Seasons_Nums> p)
{
    double total = 0.0;
    cout << "===============Your List===============" << endl;
    for (int i = 0; i < Seasons_Nums; i++)
    {
        cout << "your expense in " << Season[i] << " is:" << p[i] << endl;
        total += p[i];
    }
    cout << "total expense is:" << total << endl;
}
