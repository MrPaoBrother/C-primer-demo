#ifndef STUDENTPRI_H_
#define STUDENTPRI_H_

#include <iostream>
#include <string>
#include <valarray>

using std::istream;
using std::ostream;
using std::string;
using std::valarray;

class Student : private string, private valarray<double>
{
private:
    typedef valarray<double> arrdb;
    ostream &show(ostream &) const;

public:
    Student() : string("unknown student"), arrdb() {}
    Student(const string &name, int n) : string(name), arrdb(n) {}
    explicit Student(int n) : string("unknown student with n"), arrdb(n) {}
    explicit Student(const string &name) : string(name), arrdb() {}
    Student(const string &name, const arrdb &arr) : string(name), arrdb(arr) {}
    Student(const char *name, double *p, int n) : string(name), arrdb(p, n) {}

    ~Student(){};
    // 成员函数
    double average() const;
    const string &name() const;
    double &operator[](int n);
    double operator[](int n) const;

    // friend
    friend istream &operator>>(istream &, Student &);
    friend istream &getline(istream &, Student &);
    friend ostream &operator<<(ostream &, const Student &);
};
#endif