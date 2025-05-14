#include "SF.h"

int main() {
    LoggerSingleton::GetInstance()->Log("Program started");

    CarService service;
    int choice;
    int totalCost = 0;

    do {
        cout << "What would you like to do?" << endl;
        cout << "1. Wash exterior" << endl;
        cout << "2. Clean interior" << endl;
        cout << "3. Wax car" << endl;
        cout << "4. Pay for service" << endl;
        cout << "5. Book a garage" << endl;
        cout << "6. Get full service" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int cost = service.GetWash().WashExterior();
                totalCost += cost;
                cout << "Exterior washed. Cost: " << cost << endl;
                break;
            }
            case 2: {
                int cost = service.GetWash().CleanInterior();
                totalCost += cost;
                cout << "Interior cleaned. Cost: " << cost << endl;
                break;
            }
            case 3: {
                int cost = service.GetWash().WaxCar();
                totalCost += cost;
                cout << "Car waxed. Cost: " << cost << endl;
                break;
            }
            case 4: {
                int cost = service.GetPayment().PayForService();
                totalCost += cost;
                cout << "Service paid. Cost: " << cost << endl;
                break;
            }
            case 5: {
                int size;
                cout << "Enter garage size (1: small, 2: medium, 3: large): ";
                cin >> size;
                try {
                    int cost = service.GetGarage().BookGarage(size);
                    totalCost += cost;
                    cout << "Garage booked. Cost: " << cost << endl;
                } catch (const invalid_argument& e) {
                    cout << "Error: " << e.what() << endl;
                }
                break;
            }
            case 6: {
                int garageSize;
                cout << "Enter garage size for full service (1: small, 2: medium, 3: large): ";
                cin >> garageSize;
                try {
                    int cost = service.GetFullService(garageSize);
                    totalCost += cost;
                    cout << "Total price for full service: " << cost << endl;
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
