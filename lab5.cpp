#include "lab5.h"

Product::Product() : name(""), price(0) { std::cout << "Product конструктор " << std::endl; }
Product::~Product()      { std::cout << "Product деструктор " << name << std::endl; }
int Product::setName(const std::string& n) { name = n; return 1; }
int Product::setPrice(double p)           { price = p; return 1; }
int Product::display() {
    std::cout << "Продукт: " << name << ", ціна" << price << std::endl;
    return 1;
}

PerishableProduct::PerishableProduct() : expirationDate("") { std::cout << "PerishableProduct конструктор " << std::endl; }
PerishableProduct::~PerishableProduct()     { std::cout << "PerishableProduct деструктор " << name << std::endl; }
int PerishableProduct::setExpirationDate(const std::string& d) { expirationDate = d; return 1; }
int PerishableProduct::display() {
    std::cout << "Швидко псувні: " << name << ", ціна" << price << ", терман придатності до:" << expirationDate << std::endl;
    return 1;
}

Food::Food() : calories(0.0) { std::cout << "Food конструктор " << std::endl; }
Food::~Food()             { std::cout << "Food деструктор " << name << std::endl; }
int Food::setCalories(double c) { calories = c; return 1; }
int Food::display() {
    std::cout << "Їжа: " << name << ", ціна" << price << ", терман придатності до:" << expirationDate
              << ", калорії" << calories << std::endl;
    return 1;
}

Dairy::Dairy() : fat(0.0), type("") { std::cout << "Dairy конструктор " << std::endl; }
Dairy::~Dairy()            { std::cout << "Dairy деструктор " << name << std::endl; }
int Dairy::setFat(double f)        { fat = f; return 1; }
int Dairy::setType(const std::string& t) { type = t; return 1; }
int Dairy::display() {
    std::cout << "Молочний продукт(" << type << "): " << name << ", ціна" << price
              << ", терман придатності до:" << expirationDate << ", калорії" << calories
              << ", жири" << fat << "%" << std::endl;
    return 1;
}
 
ElectronicProduct::ElectronicProduct() : warranty(0), model("") { std::cout << "ElectronicProduct конструктор " << std::endl; }
ElectronicProduct::~ElectronicProduct()     { std::cout << "ElectronicProduct деструктор " << name << std::endl; }
int ElectronicProduct::setWarranty(int m)        { warranty = m; return 1; }
int ElectronicProduct::setWarranty(const std::string& y) { warranty = stoi(y) * 12; return 1; }
int ElectronicProduct::setModel(const std::string& m)    { model = m; return 1; }
int ElectronicProduct::display() {
    std::cout << "Електроніка: " << name << ", модель" << model << ", ціна" << price
              << ", гарантія" << warranty << "міс" << std::endl;
    return 1;
}

Smartphone::Smartphone() : os(""), manufacturer("") { std::cout << "Smartphone конструктор " << std::endl; }
Smartphone::~Smartphone()      { std::cout << "Smartphone деструктор " << name << std::endl; }
int Smartphone::setOS(const std::string& o)           { os = o; return 1; }
int Smartphone::setManufacturer(const std::string& m) { manufacturer = m; return 1; }
int Smartphone::display() {
    std::cout << "Телефон: " << name << ", виробник=" << manufacturer << ", модель" << model
              << ", ціна" << price << ", гарантія" << warranty << "міс, OS" << os << std::endl;
    return 1;
}

HybridProduct::HybridProduct() { std::cout << "HybridProduct конструктор " << std::endl; }
HybridProduct::~HybridProduct(){ std::cout << "Hybrid деструктор " << std::endl; }
int HybridProduct::display() {
    std::cout << "Гібридний продукт" << std::endl;
    Food::display();
    ElectronicProduct::display();
    return 1;
}

PreciousProduct::PreciousProduct() { std::cout << "PreciousProduct конструктор " << std::endl; }
PreciousProduct::~PreciousProduct(){ std::cout << "PreciousProduct деструктор " << name << std::endl; }
int PreciousProduct::display() {
    std::cout << "Дорогоцінний продукт" << std::endl;
    Product::display();         
    PerishableProduct::display();  
    ElectronicProduct::display(); 
    return 1;
}

Discountable::Discountable() : discount(0) { std::cout << "Discount конструктор " << std::endl; }
Discountable::~Discountable()       { std::cout << "Discount деструктор " << name << std::endl; }
int Discountable::setDiscount(double d) { discount = d; return 1; }
int Discountable::applyDiscount() {
    price -= price * discount;
    return 1;
}

SuperProduct::SuperProduct() { std::cout << "Super Product конструктор " << std::endl; }
SuperProduct::~SuperProduct()      { std::cout << "Super Product деструктор " << name <<std::endl; }
int SuperProduct::display() {
    std::cout << "Інопланетне обладнання" << std::endl;
    PerishableProduct::display();  
    ElectronicProduct::display(); 
    std::cout << "Знижка: " << discount * 100 << "%" << std::endl;
    return 1;
}