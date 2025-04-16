#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H
#include <iostream>
#include <cmath>

class Newton_class
{
private:
    double a, b;
    double eps;
    double x0;
    const double delta = 1e-6;

    double f(double x);
    double df(double x);
    double bisection();

public:
    Newton_class();
    ~Newton_class();
    void setInterval(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    double solve();
};

#endif
