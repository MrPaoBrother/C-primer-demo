#ifndef COORDIN_H_
#define COORDIN_H_
struct rect
{
    /* data */
    int x;
    int y;
};

struct polar
{
    /* data */
    double distance;
    double angle;
};

polar rect_to_polar(const rect r);
void show_polar(const polar *p);

#endif
