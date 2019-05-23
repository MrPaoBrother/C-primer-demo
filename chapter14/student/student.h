#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>
#include <valarray>

using std::istream;
using std::ostream;
using std::string;
using std::valarray;

class Student
{
private:
    typedef valarray<double> arrdb;
    string name;
    arrdb scores;
    ostream &show_scores(ostream &) const;

public:
    Student() : name("unknown student"), scores() {}
    // explicit 代表显示调用
    // implicit 代表隐式调用
    explicit Student(const string &s) : name(s), scores() {}
    explicit Student(int n) : name("unknown student"), scores(n) {}
    Student(const string &s, int n) : name(s), scores(n) {}
    Student(const string &s, const arrdb &a) : name(s), scores(a) {}
    Student(const char *c, const double *p, int n) : name(c), scores(p, n) {}
    ~Student() {}
    double Average() const;
    const string &Name() const;
    double &operator[](int n);
    double operator[](int n) const;

    // friend
    friend istream &operator<<(istream &, Student &);
    friend istream &getline(istream &, Student &);
    friend ostream &operator<<(ostream &, const Student &stu);
};

#endif