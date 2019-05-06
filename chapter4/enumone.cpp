#include<iostream>

using namespace std;

enum spectrum{
    red,
    orange
};

enum platform{
    xigua = 1,
    toutiao = 1768,
    huoshan = 1123
};

int main(int argc, char const *argv[])
{
    int tp = 1;
    if (tp == orange){
        cout << "type is orange" <<endl;
    }
    return 0;
}
