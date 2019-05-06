#ifndef MYTIME0_H_
#define MYTIME0_H_
class Time
{
private:
    int hour;
    int min;

public:
    // Time();
    Time(int hour = 0, int min = 0);
    void Reset(int hour = 0, int min = 0);
    void AddMin(int m = 0);
    void AddHour(int h = 0);
    Time Sum(const Time &t) const;
    Time operator+(const Time &t) const;
    Time operator*(double muti) const;
    friend Time operator*(double muti, const Time &t) { return t * muti; }
    friend std::ostream &operator<<(std::ostream &, const Time &);
    void Show() const;
};

#endif