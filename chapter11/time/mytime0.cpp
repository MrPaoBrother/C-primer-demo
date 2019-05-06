#include <iostream>
#include "mytime0.h"

using namespace std;

// Time::Time()
// {
//     hour = 0;
//     min = 0;
// }

Time::Time(int h, int m)
{
    min = m;
    hour = h;
}

void Time::Reset(int h, int m)
{
    min = m;
    hour = h;
}

void Time::AddMin(int m)
{
    this->hour += m / 60;
    this->min += m % 60;
}

void Time::AddHour(int h)
{
    this->hour += h;
}

Time Time::Sum(const Time &t) const
{
    Time sum;
    int min_all = this->min + t.min;
    sum.min = min_all % 60;
    sum.hour = (this->hour + t.hour) + min_all / 60;
    return sum;
}

Time Time::operator+(const Time &t) const
{
    return Sum(t);
}

Time Time::operator*(double mult) const
{
    Time t;
    long total_min = (this->hour * 60 + this->min) * mult;
    t.min = total_min % 60;
    t.hour = total_min / 60;
    return t;
}

void Time::Show() const
{
    cout << "hour:" << this->hour << " min:" << this->min << endl;
}

// Time operator*(double mult, const Time &t)
// {
//     Time mult_t;
//     int total_min = (t.hour * 60 + t.min) * mult;
//     mult_t.min = total_min % 60;
//     mult_t.hour = total_min / 60;
//     return mult_t;
// }

std::ostream &operator<<(ostream &os, const Time &t)
{
    os << "hour:" << t.hour << "\tmin:" << t.min << endl;
    return os;
}