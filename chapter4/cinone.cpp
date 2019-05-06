#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    const int arraySize = 50;
    char name[arraySize];
    char addr[arraySize];

    cout<<"input name:";
    cin.getline(name, arraySize);
    cout<<endl;
    cout <<"input addr:";
    cin.getline(addr, arraySize);
    cout<<"name:"<<name<<"addr:"<<addr<<endl;
    return 0;
}
