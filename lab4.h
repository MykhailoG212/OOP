#include <string>

class Product {
protected:
    std::string name;
    double price;
public:
    Product();
    virtual ~Product();
    int setName(const std::string& n);
    int setPrice(double p);
    virtual int display();             
};

class PerishableProduct : public Product {
protected:
    std::string expirationDate;
public:
    PerishableProduct();
    ~PerishableProduct();
    int setExpirationDate(const std::string& d);
    int display();              
};

class Food : public PerishableProduct {
protected:
    double calories;
public:
    Food();
    ~Food();
    int setCalories(double c);
    int display();             
};

class Dairy : public Food {
protected:
    double fat;
    std::string type;
public:
    Dairy();
    ~Dairy();
    int setFat(double f);
    int setType(const std::string& t);
    int display();              
};

class ElectronicProduct : public Product {
protected:
    int warranty;
    std::string model;
public:
    ElectronicProduct();
    ~ElectronicProduct();
    int setWarranty(int m);
    int setWarranty(const std::string& y);
    int setModel(const std::string& m);
    int display();
};

class Smartphone : public ElectronicProduct {
protected:
    std::string os;
    std::string manufacturer;
public:
    Smartphone();
    ~Smartphone();
    int setOS(const std::string& o);
    int setManufacturer(const std::string& m);
    int display(); 
};

