#ifndef NEWTON_CLASS_H
#define NEWTON_CLASS_H
#include <functional>
#include <stdexcept>

class Newton_class {
private:
    double a, b, eps, x0;
    const double delta = 1e-8;
    int max_iter = 1000;
    const double max_step = 100;
    bool use_bisection = false;
    std::function<double(double)> f;

public:
    Newton_class();
    void setInterval(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    void setX0(double vol_x0);
    double solve();
};

#endif
