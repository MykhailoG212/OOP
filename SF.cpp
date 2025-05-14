#include "SF.h"

LoggerSingleton* LoggerSingleton::instance = nullptr;

LoggerSingleton::LoggerSingleton() {}

LoggerSingleton* LoggerSingleton::GetInstance() {
    if (!instance) {
        instance = new LoggerSingleton();
    }
    return instance;
}

void LoggerSingleton::Log(const string& message) {
    cout << "LOG: " << message << endl;
}

int CarWash::WashExterior() {
    return 20;
}

int CarWash::CleanInterior() {
    return 40;
}

int CarWash::WaxCar() {
    return 5;
}

int PaymentSystem::PayForService() {
    return 120;
}

int GarageBooking::BookGarage(int size) {
    if (size == 1) return 470;
    if (size == 2) return 550;
    if (size == 3) return 999;
    throw invalid_argument("Invalid garage size");
}

int CarService::GetFullService(int garageSize) {
    int total = wash.WashExterior() + wash.CleanInterior() + wash.WaxCar() + payment.PayForService() + garage.BookGarage(garageSize);
    LoggerSingleton::GetInstance()->Log("Total cost calculated");
    return total;
}
