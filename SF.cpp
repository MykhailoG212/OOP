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
    cout << "[LOG]: " << message << endl;
}

int SkiRent::RentBoots(int size) {
    return 20;
}

int SkiRent::RentSki() {
    return 40;
}

int SkiRent::RentPole() {
    return 5;
}

int TicketSystem::BuyOneDayTicket() {
    return 120;
}

int HotelBooking::BookRoom(int stars) {
    if (stars == 3) return 250;
    if (stars == 4) return 500;
    if (stars == 5) return 900;
    throw invalid_argument("Invalid room rating");
}

int SkiResort::HaveGoodRest(int roomRating) {
    int total = rent.RentSki() + rent.RentBoots(42) + rent.RentPole() + ticket.BuyOneDayTicket() + hotel.BookRoom(roomRating);
    LoggerSingleton::GetInstance()->Log("Total cost calculated");
    return total;
}