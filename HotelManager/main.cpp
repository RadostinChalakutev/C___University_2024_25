#include <iostream>
#include <string>
#include "Guest.h"
#include "HotelManager.h"

int main() {
    HotelManager manager;
    int choice;
    bool showMenu=true;

    do {
        if (showMenu){
            std::cout << "\n=== Hotel Menu ===\n"
                      << "1. Add room\n"
                      << "2. Make reservation\n"
                      << "3. Show all reservations \n"
                      << "4. Sort reservations by name \n"
                      << "5. Cancell reservation by number of room\n"
                      << "6. Save reservations in file\n"
                      << "7. Exit \n";
            std::cout<< "Choose options : ";
            std::cin >> choice;

            if (choice==0) {
                showMenu=!showMenu;
                std::cout<<(showMenu?"Menu already show.\n":"Menu already hide.\n");
                continue;
            }

            switch (choice) {
                case 1: {
                    int num, beds;
                    std::cout << "Room number: ";
                    std::cin >> num;
                    std::cout << "Bed number: ";
                    std::cin >> beds;
                    manager.addRoom(num, beds);
                    break;
                }
                case 2: {
                    std::cin.ignore();
                    std::string name, id;
                    int age;
                    std::cout << "Name of guest : ";
                    std::getline(std::cin, name);
                    std::cout << "Age: ";
                    std::cin >> age;
                    std::cout << "ID number: ";
                    std::cin >> id;
                    Guest guest(name, age, id);
                    manager.createReservation(guest);
                    break;
                }
                case 3:
                    manager.showReservations();
                break;
                case 4: {
                    std::cin.ignore();
                    std::string name;
                    std::cout << "Name for finding : ";
                    std::getline(std::cin, name);
                    manager.findReservationByName(name);
                    break;
                }
                case 5: {
                    int roomNumber;
                    std::cout << "Number of rooms for cancel: ";
                    std::cin >> roomNumber;
                    manager.cancelReservationByRoomNumber(roomNumber);
                    break;
                }
                case 6:
                    manager.saveReservationsToFile("rezervacii.txt");
                break;
                case 7:
                    std::cout << "Exit ...\n";
                break;
                default:
                    std::cout << "Invalid option.\n";
            }
        }


    } while (choice != 7);
    return 0;
}


