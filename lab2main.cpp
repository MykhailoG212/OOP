#include <windows.h>
#include "lab.h"
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    Triangle t;
    std::cout << "Введіть координати трикутника:\n";
    std::cin >> t.A.x >> t.A.y >> t.B.x >> t.B.y >> t.C.x >> t.C.y;
    if (vir(t))
        std::cout << "Трикутник вироджений\n";
    else
        std::cout << "Трикутник невироджений\n";
    int n;
    std::cout << "Введіть кількість точок для перевірки: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i)
    {
        Point p;
        std::cout << "Введіть координати точки: ";
        std::cin >> p.x >> p.y;
        if (t.contains(p))
            std::cout << "Точка належить трикутнику\n";
        else
            std::cout << "Точка не належить трикутнику\n";
    }
    return 0;
}
