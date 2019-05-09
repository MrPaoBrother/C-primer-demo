#ifndef STRINGBAD_H_
#define STRINGBAD_H_
#include <iostream>

class StringBad
{
private:
    char *name;
    int len;
    static int obj_nums;

public:
    StringBad();
    StringBad(char *name);
    ~StringBad();
    // 复制构造函数
    StringBad(const StringBad &);
    // operator
    StringBad &operator=(const StringBad &);
    // friend
    friend std::ostream &operator<<(std::ostream &, const StringBad &);
};
#endif