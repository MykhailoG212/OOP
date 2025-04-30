#include "lab4.h"
#include <iostream>

Product::Product() : name(""), price(0) {
    std::cout << "Конструктор: продукт створено" << std::endl;
}
Product::~Product() {
    std::cout << "Деструктор: продукт знищено: " << name << std::endl;
}
int Product::setName(const std::string& n)    { name = n; return 1; }
int Product::setPrice(double p)          { price = p; return 1; }
int Product::display() {
    std::cout << "назва = " << name
         << ", ціна = " << price << "\n";
    return 1;
}

PerishableProduct::PerishableProduct() : expirationDate("") {
    std::cout << "Конструктор: швидкопсувний продукт створено" << std::endl;
}
PerishableProduct::~PerishableProduct() {
    std::cout << "Деструктор: швидкопсувний продукт знищено: " << name << std::endl;
}
int PerishableProduct::setExpirationDate(const std::string& d) { expirationDate = d; return 1; }
int PerishableProduct::display() {
    std::cout << "Їжа назва = " << name
         << ", ціна = " << price
         << ", до = " << expirationDate << "\n";
    return 1;
}

Food::Food() : calories(0) {
    std::cout << "Конструктор: їжу створено" << std::endl;
}
Food::~Food() {
    std::cout << "Деструктор: їжу знищено: " << name << std::endl;
}
int Food::setCalories(double c) { calories = c; return 1; }
int Food::display() {
    std::cout << "їжа назва = " << name
         << ", ціна = " << price << "грн."
         << ", до = " << expirationDate
         << ", калорії = " << calories << "\n";
    return 1;
}

Dairy::Dairy() : fat(0), type("") {
    std::cout << "Конструктор: молочний продукт створено" << std::endl;
}
Dairy::~Dairy() {
    std::cout << "Деструктор: молочний продукт знищено: " << name << std::endl;
}
int Dairy::setFat(double f) { fat = f; return 1; }
int Dairy::setType(const std::string& t) { type = t; return 1; }
int Dairy::display() {
    std::cout << "Молочний продукт тип = " << type
         << ", назва = " << name
         << ", ціна = " << price
         << ", до = " << expirationDate
         << ", калорії = " << calories
         << ", жирність = " << fat << "%\n";
    return 1;
}

ElectronicProduct::ElectronicProduct() : warranty(0), model("") {
    std::cout << "Конструктор: електроніку створено" << std::endl;
}
ElectronicProduct::~ElectronicProduct() {
    std::cout << "Деструктор: електроніку знищено: " << name << std::endl;
}
int ElectronicProduct::setWarranty(int m) { warranty = m; return 1; }
int ElectronicProduct::setWarranty(const std::string& y) { warranty = stoi(y) * 12; return 1; }
int ElectronicProduct::setModel(const std::string& m) { model = m; return 1; }
int ElectronicProduct::display() {
    std::cout << name << " модель = " << model
         << ", ціна = " << price
         << ", гарантія = " << warranty << " міс.\n";
    return 1;
}

Smartphone::Smartphone() : os(""), manufacturer("") {
    std::cout << "Конструктор: смартфон створено" << std::endl;
}
Smartphone::~Smartphone() {
    std::cout << "Деструктор: смартфон знищено: " << name << std::endl;
}
int Smartphone::setOS(const std::string& o) { os = o; return 1; }
int Smartphone::setManufacturer(const std::string& m) { manufacturer = m; return 1; }
int Smartphone::display() {
    std::cout << name << " виробник = " << manufacturer
         << ", модель = " << model
         << ", ціна = " << price
         << ", гарантія = " << warranty << " міс."
         << ", ОС = " << os << "\n";
    return 1;
}
