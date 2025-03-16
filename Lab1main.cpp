#include <iostream>
#include <fstream>
#include <string>
#include <regex>
#include "Lab1.h"
#include <Windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    std::ifstream file("test.txt");
    cina cina1 = {0, 0};
    std::regex pattern(R"((\d+)\s*грн\D*(\d+)\s*коп\D*(\d+)\s*шт)");

    std::string line;
    while (std::getline(file, line))
    {
        std::smatch match;
        if (std::regex_search(line, match, pattern))
        {
            int grn = std::stoi(match[1]);
            int kop = std::stoi(match[2]);
            int sht = std::stoi(match[3]);
            grn *= sht;
            kop *= sht;
            Add(cina1, grn, kop);
        }
    }
    std::cout << "Загальна сума: " << cina1.grn << " грн " << cina1.kop << " коп" << std::endl;
    zaokryh(cina1);
    std::cout << "Після округлення: " << cina1.grn << " грн " << cina1.kop << " коп" << std::endl;
    return 0;
}
