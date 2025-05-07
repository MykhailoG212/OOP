#include "Newton_class.h"
#include <cmath>
#include <iostream>

Newton_class::Newton_class() : a(0), b(0), eps(0), x0(0) {
    //Лямбда-вираз для обчислуння функції
    f = [](double x) {
        if (x <= 0) throw std::invalid_argument("x <= 0");
        return 0.1 * x * x - 5 * x * log(x) - 1;
    };
}

void Newton_class::setInterval(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Newton_class::setTolerance(double vol_eps) {
    eps = vol_eps;
}

void Newton_class::setX0(double vol_x0) {
    x0 = vol_x0;
}

double Newton_class::solve() {
    //Лямбда-вираз для обчислення похідної
    auto derivative = [&](double x) {
        return (f(x + delta) - f(x - delta)) / (2 * delta);
    };
    //Лямбда-вираз для обмеження кроку
    auto limit_step = [&](double step) {
        return (fabs(step) > max_step) ? (step > 0 ? max_step : -max_step) : step;
    };
    double x = x0;
    int iter = 0;
    while (iter < max_iter) {
        try {
            double fx = f(x);
            if (fabs(fx) < eps) return x;
            double dfx = derivative(x);
            if (fabs(dfx) < 1e-10) throw std::runtime_error("Похідна нуль");
            double dx = limit_step(-fx / dfx);
            x += dx;
            iter++;
        } catch (const std::exception& e) {
            std::cout << "Помилка: " << e.what() << std::endl;
            x = (a + b) / 2;
            use_bisection = true;
            iter++;
        }
    }
    return x;
}