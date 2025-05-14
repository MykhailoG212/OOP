#include <iostream>
#include <string>
using namespace std;

class LoggerSingleton {
private:
    static LoggerSingleton* instance;
    LoggerSingleton();

public:
    static LoggerSingleton* GetInstance();
    void Log(const string& message);
};

class SkiRent {
public:
    int RentBoots(int size);
    int RentSki();
    int RentPole();
};

class TicketSystem {
public:
    int BuyOneDayTicket();
};

class HotelBooking {
public:
    int BookRoom(int stars);
};

class SkiResort {
private:
    SkiRent rent;
    TicketSystem ticket;
    HotelBooking hotel;

public:
    int HaveGoodRest(int roomRating);

    SkiRent& GetRent() { return rent; }
    TicketSystem& GetTicket() { return ticket; }
    HotelBooking& GetHotel() { return hotel; }
};