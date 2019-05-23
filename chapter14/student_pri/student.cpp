#include "student.h"

using std::endl;
using std::getline;

ostream &Student::show(ostream &os) const
{
    int count = arrdb::size();
    for (int i = 0; i < count; i++)
    {
        os << i << ": " << arrdb::operator[](i) << endl;
    }
    return os;
}

double Student::average() const
{
    return arrdb::size() > 0 ? arrdb::sum() / arrdb::size() : 0;
}

const string &Student::name() const
{
    // 派生类可以向上强制转换成基类
    return (const string &)*this;
}

double &Student::operator[](int n)
{
    return arrdb::operator[](n);
}

double Student::operator[](int n) const
{
    return arrdb::operator[](n);
}

istream &operator>>(istream &is, Student &stu)
{
    is >> (string &)stu;
    return is;
}

istream &getline(istream &is, Student &stu)
{
    getline(is, (string &)stu);
    return is;
}

ostream &operator<<(ostream &os, const Student &stu)
{
    os << "Student's Scores detail:" << endl;
    stu.show(os);
    return os;
}