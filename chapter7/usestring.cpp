#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(string list[], int n);

int main(int argc, char const *argv[])
{
    string list[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        getline(cin, list[i]);
    }
    display(list, SIZE);
    return 0;
}

void display(string list[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << list[i] << endl;
    }
}
