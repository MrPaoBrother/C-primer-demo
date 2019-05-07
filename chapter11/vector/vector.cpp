#include <cmath>
#include "vector.h"

using std::atan;
using std::atan2;
using std::cos;
using std::cout;
using std::endl;
using std::sin;
namespace VECTOR
{
const double Rad_to_deg = 45 / tan(1.0);
void Vector::set_x()
{
    x = mag * cos(angle);
}

void Vector::set_y()
{
    y = mag * sin(angle);
}

void Vector::set_mag()
{
    mag = sqrt(x * x + y * y);
}

void Vector::set_angle()
{
    if (x == 0 && y == 0)
    {
        angle = 0.0;
    }
    else
    {
        angle = atan2(y, x);
    }
}

Vector::Vector()
{
    x = 0.0;
    y = 0.0;
    mode = RECT;
    set_mag();
    set_angle();
}

Vector::Vector(double m, double n, MODE form)
{
    mode = form;
    if (form == RECT)
    {
        x = m;
        y = n;
        set_mag();
        set_angle();
    }
    else if (form == POL)
    {
        mag = m;
        angle = n / Rad_to_deg;
        set_x();
        set_y();
    }
    else
    {
        cout << "init err, cannot find a suitable constructor!" << endl;
        Vector();
    }
}

Vector::~Vector()
{
    // cout << "~Vector (x, y) => (" << x << ", " << y << ")" << endl;
}

void Vector::reset(double m, double n, MODE form)
{
    // 这里感觉直接用构造函数即可 实测不行
    // Vector(m, n, form);
    mode = form;
    if (form == RECT)
    {
        x = m;
        y = n;
        set_mag();
        set_angle();
    }
    else if (form == POL)
    {
        mag = m;
        angle = n / Rad_to_deg;
        set_x();
        set_y();
    }
    else
    {
        cout << "reset err, cannot find a suitable mode!" << endl;
        x = y = angle = mag = 0.0;
        mode = RECT;
    }
}

Vector Vector::operator+(const Vector &v) const
{
    return Vector(this->x + v.x, this->y + v.y);
}

Vector Vector::operator-(const Vector &v) const
{
    return Vector(this->x - v.x, this->y - v.y);
}

Vector Vector::operator-() const
{
    return Vector(-this->x, -this->y);
}
Vector Vector::operator*(double n) const
{
    return Vector(n * this->x, n * this->y);
}

Vector operator*(double n, const Vector &v)
{
    return v * n;
}

std::ostream &operator<<(std::ostream &os, const Vector &v)
{
    if (v.mode == Vector::RECT)
    {
        os << "(x, y) => "
           << "(" << v.x << ", " << v.y << ")" << endl;
    }
    else if (v.mode == Vector::POL)
    {
        os << "(mag, ang) => "
           << "(" << v.mag << ", " << v.angle << ")" << endl;
    }
    else
    {
        os << "==> unknow mode <==" << endl;
    }
    return os;
}
} // namespace VECTOR