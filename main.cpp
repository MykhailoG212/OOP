#include "lab4.h"
#include <iostream>
#include <windows.h>


int main() {
    SetConsoleOutputCP(CP_UTF8);
    Food* apple = new Food();
    apple->setName("Яблуко");
    apple->setPrice(5);
    apple->setExpirationDate("2025-12-31");
    apple->setCalories(95);
    apple->display();

    Food* banana = new Food();
    banana->setName("Банан");
    banana->setPrice(7);
    banana->setExpirationDate("2025-12-25");
    banana->setCalories(105);
    banana->display();

    std::cout << "-----\n";

    Dairy* milk = new Dairy();
    milk->setName("Молоко");
    milk->setPrice(120);
    milk->setExpirationDate("2025-07-01");
    milk->setCalories(150);
    milk->setType("Молоко");
    milk->setFat(3.2);
    milk->display();

    Dairy* cheese = new Dairy();
    cheese->setName("Сир");
    cheese->setPrice(210);
    cheese->setExpirationDate("2025-07-01");
    cheese->setCalories(170);
    cheese->setType("Сир");
    cheese->setFat(3.2);
    cheese->display();

    std::cout << "-----\n";

    ElectronicProduct* tv = new ElectronicProduct();
    tv->setName("Телевізор");
    tv->setPrice(46000);
    tv->setModel("Samsung");
    tv->setWarranty(24);
    tv->display();

    std::cout << "-----\n";

    Smartphone* phone = new Smartphone();
    phone->setName("iPhone");
    phone->setPrice(14400);
    phone->setModel("16");
    phone->setWarranty("1");
    phone->setOS("iOS");
    phone->setManufacturer("Apple");
    phone->display();

    delete apple;
    delete banana;
    delete milk;
    delete cheese;
    delete tv;
    delete phone;

    return 0;
}
