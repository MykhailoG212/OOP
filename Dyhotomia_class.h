#ifndef DYHOTOMIA_CLASS_H
#define DYHOTOMIA_CLASS_H
#include <functional>

class Dyhotomia_class {
private:
    double a, b, eps;
    std::function<double(double)> f;

public:
    Dyhotomia_class();
    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    bool hasSolution();
    double solve();
};

#endif