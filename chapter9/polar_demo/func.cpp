#include <iostream>
#include <cmath>
#include "coordin.h"

using namespace std;

polar rect_to_polar(const rect r)
{
    polar p;
    p.distance = sqrt(r.x * r.x + r.y * r.y);
    p.angle = atan2(r.y, r.x);
    return p;
}

void show_polar(const polar *p)
{
    const double Rad_to_deg = 57.29577951;
    cout << "distance:" << p->distance << " angle:" << p->angle * Rad_to_deg << " degrees" << endl;
}