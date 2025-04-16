#ifndef DYHOTOMIA_CLASS_H
#define DYHOTOMIA_CLASS_H

#include <cmath>
#include <iostream>

class Dyhotomia_class
{
private:
    double a;
    double b;
    double eps;

    double f(double x);

public:
    Dyhotomia_class();
    ~Dyhotomia_class();

    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    double solve();
    bool hasSolution();
};

#endif
