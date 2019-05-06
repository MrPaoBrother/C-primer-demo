#include <iostream>

using namespace std;

double pam(int);
double besty(int);
double estimate(int lines, double (*p)(int));

int main(int argc, char const *argv[])
{
    int lines;
    cout << "lines:";
    cin >> lines;
    cout<<endl;
    cout<<"pam estimate:"<<estimate(lines, pam)<<endl;
    cout<<"besty estimate:"<<estimate(lines, besty)<<endl;
    return 0;
}

double pam(int lines){
    return lines * 0.05;
}

double besty(int lines){
    return lines * 0.1;
}

double estimate(int lines, double (*p)(int)){
    return p(lines);
}