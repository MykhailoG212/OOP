#include "Newton_class.h"

Newton_class::Newton_class() {
    a = 0;
    b = 0;
    eps = 0;
}
Newton_class::~Newton_class() {}
void Newton_class::setInterval(double vol_a, double vol_b)
{
    a = vol_a;
    b = vol_b;
}

void Newton_class::setTolerance(double vol_eps)
{
    eps = vol_eps;
}

double Newton_class::f(double x)
{
    if (x <= 0)
    {
        std::cout << "log(x) невизначений для x <= 0" << std::endl;
        return 1;
    }
    return 0.1 * x * x - 5 * x * log(x) - 1;
}

double Newton_class::df(double x)
{
    return (f(x + delta) - f(x)) / delta;
}

double Newton_class::solve()
{
    x0 = bisection();
    std::cout << "Знайдено початкове наближення методом бісекції: " << x0 << std::endl;

    double x = x0;
    double x_prev;
    int max_iter = 1000;
    int iter = 0;

    do
    {
        double derivative = df(x);
        if (fabs(derivative) < 1e-10)
        {
            std::cout << "Похідна = 0. Метод Ньютона не може продовжити" << std::endl;
            return 1;
        }

        x_prev = x;
        x = x_prev - f(x_prev) / derivative;
        iter++;
    } while (fabs(x - x_prev) > eps && iter < max_iter);

    if (iter >= max_iter)
    {
        std::cout << "Метод Ньютона не збігся за максимальну кількість ітерацій" << std::endl;
        return 1;
    }

    return x;
}

double Newton_class::bisection()
{
    if (f(a) * f(b) >= 0)
    {
        std::cout << "Не знайдено зміни знаку на інтервалі. Корінь може бути не в межах цього інтервалу." << std::endl;
        return 1;
    }

    double c;
    while ((b - a) >= eps)
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
