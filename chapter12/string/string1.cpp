#include "string1.h"
#include <iostream>
#include <cstring>

int String::obj_nums = 0;

int String::HowMany()
{
    return obj_nums;
}

String::String()
{
    len = 0;
    str = new char[1];
    str[0] = '\0';
    obj_nums++;
    std::cout << "default created now obj_nums:" << obj_nums << std::endl;
}

String::String(const char *s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    obj_nums++;
    std::cout << "char* created now obj_nums:" << obj_nums << std::endl;
}

String::String(const String &s)
{
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    std::cout << "&s created now obj_nums:" << obj_nums << std::endl;
    obj_nums++;
}

String::~String()
{
    delete[] str;
    obj_nums--;
    std::cout << "deleted, now obj_nums:" << obj_nums << std::endl;
}

String &String::operator=(const String &s)
{
    if (this == &s)
        return *this;
    delete[] str;
    len = s.len;
    str = new char[len + 1];
    std::strcpy(str, s.str);
    return *this;
}

String &String::operator=(const char *s)
{
    delete[] str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char &String::operator[](int i)
{
    return str[i];
}

const char &String::operator[](int i) const
{
    return str[i];
}

bool operator==(const String &s1, const String &s2)
{
    return std::strcmp(s1.str, s2.str) == 0;
}

bool operator>(const String &s1, const String &s2)
{
    return std::strcmp(s1.str, s2.str) > 0;
}

bool operator<(const String &s1, const String &s2)
{
    return std::strcmp(s1.str, s2.str) < 0;
}

std::ostream &operator<<(std::ostream &os, const String &s)
{
    os << "( " << s.str << " )";
    return os;
}

// 难点
std::istream &operator>>(std::istream &is, String &s)
{
    char temp[String::CHAR_LIMIT];
    is.get(temp, String::CHAR_LIMIT);
    if (is)
        s = temp;
    while (is && is.get() != '\n')
        continue;

    return is;
}
