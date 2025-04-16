#include "Dyhotomia_class.h"

Dyhotomia_class::Dyhotomia_class()
{
    a = 0;
    b = 0;
    eps = 0;
}

Dyhotomia_class::~Dyhotomia_class() {}

double Dyhotomia_class::f(double x)
{
    if (x <= 0)
    {
        std::cout << "log(x) невизначений для x <= 0";
        return 1;
    }
    return 0.1 * x * x - 5 * x * log(x) - 1;
}

void Dyhotomia_class::setVolumes(double vol_a, double vol_b)
{
    a = vol_a;
    b = vol_b;
}

void Dyhotomia_class::setTolerance(double vol_eps)
{
    eps = vol_eps;
}

bool Dyhotomia_class::hasSolution()
{
    return f(a) * f(b) < 0;
}

double Dyhotomia_class::solve()
{
    if (f(a) * f(b) >= 0)
    {
        std::cout << "Немає кореня на цьому інтервалі";
        return 1;
    }

    double c;
    while (fabs(b - a) > eps)
    {
        c = (a + b) / 2;
        if (f(c) == 0.0)
            break;

        if (f(a) * f(c) < 0)
            b = c;
        else
            a = c;
    }
    return (a + b) / 2;
}
