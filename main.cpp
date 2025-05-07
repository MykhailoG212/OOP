#include "lab5.h"  
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    /*
    Food* apple = new Food();
    apple->setName("Яблуко");
    apple->setPrice(5);
    apple->setExpirationDate("20/07/2025");
    apple->setCalories(95);
    apple->display();

    Food* banana = new Food();
    banana->setName("Банан");
    banana->setPrice(7);
    banana->setExpirationDate("24/08/2025");
    banana->setCalories(105);
    banana->display();

    std::cout << "-----\n";

    Dairy* milk = new Dairy();
    milk->setName("Молоко");
    milk->setPrice(120);
    milk->setExpirationDate("22/11/2025");
    milk->setCalories(150);
    milk->setType("Молоко");
    milk->setFat(3.2);
    milk->display();

    Dairy* cheese = new Dairy();
    cheese->setName("Сир");
    cheese->setPrice(210);
    cheese->setExpirationDate("21/12/2025");
    cheese->setCalories(170);
    cheese->setType("Сир");
    cheese->setFat(7.2);
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

    std::cout << "-----------------------------\n";

    delete apple;
    delete banana;
    delete milk;
    delete cheese;
    delete tv;
    delete phone;
    std::cout << "-----------------------------\n";
    std::cout << "-----------------------------\n";
    */
    
   std::cout << "  HybridProduct\n";
   HybridProduct* hp = new HybridProduct();
   hp->setName("Космічна їжа");
   hp->setPrice(99.99);
   hp->setExpirationDate("30/12/2035");
   hp->setCalories(250);
   hp->setModel("X100");
   hp->setWarranty(12);
   std::cout << "Вивід значень:\n";
   hp->display();

   std::cout << "\n";

   std::cout << "  PreciousProduct\n";
   PreciousProduct* pp = new PreciousProduct();
   pp->setName("Штучний діамант");
   pp->setPrice(199.5);
   pp->setExpirationDate("01/01/100026");
   pp->setModel("D");
   pp->setWarranty("2");
   std::cout << "Вивід значень:\n";
   pp->display();

   std::cout << "\n";

   std::cout << "  SuperProduct\n";
   SuperProduct* sp = new SuperProduct();
   sp->setName("Лазерна зброя");
   sp->setPrice(150);
   sp->setExpirationDate("15/05/3036");
   sp->setModel("S1");
   sp->setWarranty(6);
   sp->setDiscount(0.1);
   sp->applyDiscount();
   std::cout << "Вивід значень:\n";
   sp->display();
  
   std::cout << "\n";

   std::cout << "Деструктори:\n";
   delete hp;
   delete pp;
   delete sp;
    return 0;
}
