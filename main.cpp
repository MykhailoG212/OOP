#include "SF.h"

int main() {
    LoggerSingleton::GetInstance()->Log("Program started");

    SkiResort resort;
    int choice;
    int totalCost = 0;

    do {
        cout << "What would you like to do?" << endl;
        cout << "1. Rent boots" << endl;
        cout << "2. Rent skis" << endl;
        cout << "3. Rent poles" << endl;
        cout << "4. Buy one-day ticket" << endl;
        cout << "5. Book a hotel room" << endl;
        cout << "6. Have a good rest (all-inclusive)" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int size;
                cout << "Enter your boot size: ";
                cin >> size;
                int cost = resort.GetRent().RentBoots(size);
                totalCost += cost; 
                cout << "Boots rented for size " << size << ". Cost: " << cost << endl;
                break;
            }
            case 2: {
                int cost = resort.GetRent().RentSki();
                totalCost += cost;
                cout << "Skis rented. Cost: " << cost << endl;
                break;
            }
            case 3: {
                int cost = resort.GetRent().RentPole();
                totalCost += cost;
                cout << "Poles rented. Cost: " << cost << endl;
                break;
            }
            case 4: {
                int cost = resort.GetTicket().BuyOneDayTicket();
                totalCost += cost;
                cout << "One-day ticket purchased. Cost: " << cost << endl;
                break;
            }
            case 5: {
                int stars;
                cout << "Enter hotel room rating (3, 4, or 5 stars): ";
                cin >> stars;
                try {
                    int cost = resort.GetHotel().BookRoom(stars);
                    totalCost += cost;
                    cout << stars << "-star room booked. Cost: " << cost << endl;
                } catch (const invalid_argument& e) {
                    cout << "Error: " << e.what() << endl;
                }
                break;
            }
            case 6: {
                int roomRating;
                cout << "Enter hotel room rating for good rest (3, 4, or 5 stars): ";
                cin >> roomRating;
                try {
                    int cost = resort.HaveGoodRest(roomRating);
                    totalCost += cost; 
                    cout << "Total price for good rest: " << cost << endl;
                } catch (const invalid_argument& e) {
                    cout << "Error: " << e.what() << endl;
                }
                break;
            }
            case 0:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

        cout << "Current total cost: " << totalCost << endl;

        LoggerSingleton::GetInstance()->Log("Action completed");

    } while (choice != 0);

    LoggerSingleton::GetInstance()->Log("Program finished");
    cout << "Final total cost: " << totalCost << endl;
    return 0;
}