#include "Dyhotomia_class.h"
#include <cmath>

Dyhotomia_class::Dyhotomia_class() : a(0), b(0), eps(0) {
    //Лямбда-вираз для обчислуння функції
    f = [](double x) { return 0.1 * x * x - 5 * x * log(x) - 1; };
}

void Dyhotomia_class::setVolumes(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Dyhotomia_class::setTolerance(double vol_eps) {
    eps = vol_eps;
}

bool Dyhotomia_class::hasSolution() {
    return f(a) * f(b) < 0;
}

double Dyhotomia_class::solve() {
    //Лямбда-вираз для обчислення середини відрізка
    auto midpoint = [&]() { return (a + b) / 2; };
    double c;
    while (fabs(b - a) > eps) {
        c = midpoint();
        if (fabs(f(c)) < eps) break;
        f(a) * f(c) < 0 ? b = c : a = c;
    }
    return midpoint();
}