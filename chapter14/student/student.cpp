#include "student.h"

using std::endl;
using std::getline;

double Student::Average() const
{
    return scores.sum() / scores.size();
}

const string &Student::Name() const
{
    return name;
}

double &Student::operator[](int n)
{
    return scores[n];
}

double Student::operator[](int n) const
{
    return scores[n];
}

istream &operator<<(istream &is, Student &stu)
{
    is >> stu.name;
    return is;
}

istream &getline(istream &is, Student &stu)
{
    getline(is, stu.name);
    return is;
}

ostream &operator<<(ostream &os, const Student &stu)
{
    os << "Scores for student name:" << stu.name << endl;
    stu.show_scores(os);
    return os;
}

ostream &Student::show_scores(ostream &os) const
{
    for (int i = 0; i < scores.size(); i++)
    {
        os << i + 1 << ": " << scores[i] << endl;
    }
    return os;
}