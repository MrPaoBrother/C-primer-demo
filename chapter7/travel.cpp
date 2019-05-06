#include <iostream>

using namespace std;

struct TravelTime
{
    int hour;
    int min;
};

const int Mins_per_hr = 60;

TravelTime get_sum(TravelTime t1, TravelTime t2);
void show_travel(TravelTime t);

int main(int argc, char const *argv[])
{
    TravelTime t1 = {
        10,
        20};

    TravelTime t2 = {
        20,
        59};

    TravelTime t3 = get_sum(t1, t2);
    show_travel(t3);
    return 0;
}

TravelTime get_sum(TravelTime t1, TravelTime t2)
{
    int sum_min = (t1.min + t2.min) % Mins_per_hr;
    int sum_hr = (t1.hour + t2.hour) + (t1.min + t2.min) / Mins_per_hr;
    return TravelTime{sum_hr, sum_min};
}

void show_travel(TravelTime t)
{
    cout << "travel use hour:" << t.hour << " use min:" << t.min <<endl;
}
