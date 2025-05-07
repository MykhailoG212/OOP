#include <string>
#include <iostream>

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

class PerishableProduct : virtual public Product {
protected:
    std::string expirationDate;
public:
    PerishableProduct();
    virtual ~PerishableProduct();
    int setExpirationDate(const std::string& d);
    int display() override;
};

class Food : virtual public PerishableProduct {
protected:
    double calories;
public:
    Food();
    ~Food();
    int setCalories(double c);
    int display() override;
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
    int display() override;
};

class ElectronicProduct : virtual public Product {
protected:
    int warranty;
    std::string model;
public:
    ElectronicProduct();
    virtual ~ElectronicProduct();
    int setWarranty(int m);
    int setWarranty(const std::string& y);
    int setModel(const std::string& m);
    int display() override;
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
    int display() override;
};

class HybridProduct : public Food, public ElectronicProduct {
public:
    HybridProduct();
    ~HybridProduct();
    int display() override;
};

class PreciousProduct : public PerishableProduct, public ElectronicProduct {
public:
    PreciousProduct();
    ~PreciousProduct();
    int display() override;
};

class Discountable : virtual public Product {
protected:
    double discount;
public:
    Discountable();
    ~Discountable();
    int setDiscount(double d);
    virtual int applyDiscount();
};

class SuperProduct : public PerishableProduct, public ElectronicProduct, public Discountable {
public:
    SuperProduct();
    ~SuperProduct();
    int display() override;
};