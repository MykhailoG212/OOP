#include <iostream>
#include <Windows.h>
#include "Dyhotomia_class.h"
#include "Newton_class.h"

int main() {
    SetConsoleOutputCP(CP_UTF8);

    Dyhotomia_class dyh;
    dyh.setVolumes(0.5, 1);
    dyh.setTolerance(1e-6);
    if (dyh.hasSolution()) {
        std::cout << "Корінь (дихотомія): " << dyh.solve() << std::endl;
    } else {
        std::cout << "Корінь не знайдено методом дихотомії" << std::endl;
    }

    Newton_class newton;
    newton.setInterval(0.5, 1);
    newton.setTolerance(1e-6);
    newton.setX0(1);
    try {
        std::cout << "Корінь (Ньютона): " << newton.solve() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}