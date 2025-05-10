#include <iostream>
#include "Dyhotomia_class.h"
#include "Newton_class.h"
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Dyhotomia_class *dyh = new Dyhotomia_class();
    dyh->setVolumes(0.5, 1);
    dyh->setTolerance(1e-6);

    if (dyh->hasSolution())
    {
        double solution = dyh->solve();
        std::cout << "Корінь (дихотомія): " << solution << std::endl;
    }
    else
    {
        std::cout << "Корінь не знайдено метдом дихотомії на цьому інтервалі" << std::endl;
    }
    delete dyh;

    Newton_class *newton = new Newton_class();
    newton->setInterval(0.5, 1);
    newton->setTolerance(1e-6);

    double newton_solution = newton->solve();
    std::cout << "Корінь (ньютона): " << newton_solution << std::endl;
    delete newton;

    return 0;
}
