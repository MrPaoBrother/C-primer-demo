#include <cstring>

#include "stringbad.h"

using std::cout;
using std::endl;

int StringBad::obj_nums = 0;

StringBad::StringBad()
{
    len = 4;
    name = new char[len];
    std::strcpy(name, "C++");
    obj_nums++;
    cout << obj_nums << " objs created by default!" << endl;
}

StringBad::StringBad(char *s)
{
    len = std::strlen(s);
    name = new char[len + 1];
    std::strcpy(name, s);
    obj_nums++;
    cout << obj_nums << " objs created!" << endl;
}

StringBad::StringBad(const StringBad &s)
{
    this->len = s.len;
    this->name = new char[this->len + 1];
    std::strcpy(this->name, s.name);
    this->obj_nums++;
    cout << "copy constructor created!" << endl;
}
StringBad &StringBad::operator=(const StringBad &s)
{
    if (this == &s)
    {
        return *this;
    }

    // 清空当前内存
    delete[] name;
    len = std::strlen(s.name);
    name = new char[len + 1];
    std::strcpy(name, s.name);
    // 复制不需要加obj_nums
    // obj_nums ++;
    return *this;
}

StringBad::~StringBad()
{
    cout << name << " has been delete!" << endl;
    --obj_nums;
    cout << "now there are " << obj_nums << " objs left!" << endl;
    delete[] name;
}

std::ostream &operator<<(std::ostream &os, const StringBad &str)
{
    os << "name:" << str.name << " len:" << str.len << endl;
    return os;
}