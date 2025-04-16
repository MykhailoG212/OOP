#include <iostream>
#include "Dyhotomia_class.h"
#include "Newton_class.h"
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Dyhotomia_class *dichotomy = new Dyhotomia_class();
    dichotomy->setVolumes(0.5, 1);
    dichotomy->setTolerance(1e-6);

    if (dichotomy->hasSolution())
    {
        double solution = dichotomy->solve();
        std::cout << "Корінь (дихотомія): " << solution << std::endl;
    }
    else
    {
        std::cout << "Корінь не знайдено метдом дихотомії на цьому інтервалі" << std::endl;
    }
    delete dichotomy;

    Newton_class *newton = new Newton_class();
    newton->setInterval(0.5, 1);
    newton->setTolerance(1e-6);

    double newton_solution = newton->solve();
    std::cout << "Корінь (ньютона): " << newton_solution << std::endl;
    delete newton;

    return 0;
}
