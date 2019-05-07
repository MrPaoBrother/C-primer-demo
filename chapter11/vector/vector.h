#ifndef VECTOR_H_
#define VECTOR_H_
#include <iostream>
namespace VECTOR
{
class Vector
{
public:
    enum MODE
    {
        RECT,
        POL
    };

private:
    double x;
    double y;
    // 距离
    double mag;
    // 弧度
    double angle;
    // 模式
    MODE mode;
    void set_x();
    void set_y();
    void set_mag();
    void set_angle();
    // void set_mode();
public:
    Vector();
    Vector(double m, double n, MODE form = RECT);
    ~Vector();
    void reset(double m, double n, MODE form = RECT);
    double xval() { return x; }
    double yval() { return y; }
    double magval() { return mag; }
    double angval() { return angle; }
    void polar_mode() { mode = POL; }
    void rect_mode() { mode = RECT; }

    // 操作符
    Vector operator+(const Vector &) const;
    Vector operator-(const Vector &) const;
    Vector operator-() const;
    Vector operator*(double n) const;

    // 友元函数
    friend Vector operator*(double, Vector &);
    friend std::ostream &operator<<(std::ostream &os, const Vector &v);
};
} // namespace VECTOR
#endif