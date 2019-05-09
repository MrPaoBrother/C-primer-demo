#ifndef NEWPLACE_H_
#define NEWPLACE_H_
#include <iostream>
#include <string>

using std::string;
class JustTesting
{
private:
    string word;
    int num;

public:
    JustTesting(string w = "Just Testing", int num = 0);
    ~JustTesting();
    void Show();
};

#endif