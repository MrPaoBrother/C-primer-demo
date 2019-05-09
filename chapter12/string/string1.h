#ifndef STRING1_H_
#define STRING1_H_

#include <iostream>

class String
{
private:
    char *str;
    int len;
    static int obj_nums;
    static const int CHAR_LIMIT = 80;

public:
    String();
    String(const char *s);
    String(const String &);
    ~String();
    int get_len() { return len; }

    String &operator=(const String &);
    String &operator=(const char *);
    char &operator[](int i);
    const char &operator[](int i) const;

    // friends
    friend bool operator==(const String &, const String &);
    friend bool operator<(const String &, const String &);
    friend bool operator>(const String &, const String &);
    friend std::ostream &operator<<(std::ostream &, const String &);
    friend std::istream &operator>>(std::istream &, String &);

    // static Func
    static int HowMany();
};
#endif