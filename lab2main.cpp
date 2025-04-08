#include <windows.h>
#include "lab.h"
#include <iostream>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Triangle t;
    std::cout << "Введіть координати трикутника (для дробових чисел використовувати: .):\n";
    std::cout << "Введіть координати точки A: ";
    std::cin >> t.A.x >> t.A.y;
    
    std::cout << "Введіть координати точки B: ";
    std::cin >> t.B.x >> t.B.y;
    
    std::cout << "Введіть координати точки C: ";
    std::cin >> t.C.x >> t.C.y;
    
    if (vir(t))
        std::cout << "Трикутник вироджений\n";
    else
        std::cout << "Трикутник невироджений\n";

    int n = 0;
    int metod = 0;
    std::cout << "Виберіть метод перевірки (1 (веторний метод), 2(метод герона)): ";
    std::cin >> metod;
    while (metod != 1 && metod != 2)
    {
        std::cout << "Введіть коректний метод перевірки (1(веторний метод) або 2(метод герона)): ";
        std::cin >> metod;
    }

    std::cout << "Введіть кількість точок для перевірки (введіть від однієї точки): ";
    std::cin >> n;
    while (n <= 0)
    {
        std::cout << "Введіть коректну кількість точок від 1 точки: ";
        std::cin >> n;
    }
    for (int i = 0; i < n; ++i)
    {
        Point p;
        std::cout << "Введіть координати точки (для дробових чисел використовувати: .): ";
        std::cin >> p.x >> p.y;
        if (metod == 1)
        {
            if (t.contains(p))
                std::cout << "Точка належить трикутнику\n";
            else
                std::cout << "Точка не належить трикутнику\n";
        }
        else if (metod == 2)
        {
            if (t.contains1(p))
                std::cout << "Точка належить трикутнику\n";
            else
                std::cout << "Точка не належить трикутнику\n";
        }
    }
    return 0;
}
