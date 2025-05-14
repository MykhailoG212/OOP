#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

class LoggerSingleton {
private:
    static LoggerSingleton* instance;
    LoggerSingleton();

public:
    static LoggerSingleton* GetInstance();
    void Log(const string& message);
};

class CarWash {
public:
    int WashExterior();
    int CleanInterior();
    int WaxCar();
};

class PaymentSystem {
public:
    int PayForService();
};

class GarageBooking {
public:
    int BookGarage(int size);
};

class CarService {
private:
    CarWash wash;
    PaymentSystem payment;
    GarageBooking garage;

public:
    int GetFullService(int garageSize);

    CarWash& GetWash() { return wash; }
    PaymentSystem& GetPayment() { return payment; }
    GarageBooking& GetGarage() { return garage; }
};
