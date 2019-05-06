#include<iostream>

using namespace std;

double warming = 0.3;

void update(double);
void local();

int main(int argc, char const *argv[])
{
    cout << "now:" << warming << endl;
    update(0.3);
    local();
    return 0;
}
