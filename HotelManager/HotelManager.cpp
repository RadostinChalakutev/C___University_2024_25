#include "HotelManager.h"
#include <iostream>
#include <fstream>

HotelManager::~HotelManager() {
    for (auto res : reservations)
        delete res;
}

void HotelManager::addRoom(int number, int beds) {
    rooms.emplace_back(number, beds);
}

Room* HotelManager::findAvailableRoom() {
    for (auto& room : rooms)
        if (room.available())
            return &room;
    return nullptr;
}

void HotelManager::createReservation(const Guest& guest) {
    Room* room = findAvailableRoom();
    if (room) {
        reservations.push_back(new Reservation(guest, room));
        std::cout << "Reservation  completed.\n";
    } else {
        std::cout << "No more rooms .\n";
    }
}

void HotelManager::showReservations() const {
    if (reservations.empty()) {
        std::cout << "No active reservations.\n";
        return;
    }
    for (const auto& res : reservations) {
        res->printDetails();
        std::cout << "-------------------\n";
    }
}

void HotelManager::findReservationByName(const std::string& name) const {
    bool found = false;
    for (const auto& res : reservations) {
        if (res->getGuestName() == name) {
            res->printDetails();
            found = true;
        }
    }
    if (!found)
        std::cout << "No reservations for : " << name << std::endl;
}

void HotelManager::cancelReservationByRoomNumber(int roomNumber) {
    for (auto it = reservations.begin(); it != reservations.end(); ++it) {
        if ((*it)->getRoomNumber() == roomNumber) {
            delete *it;
            reservations.erase(it);
            std::cout << "Reservation is cancelled sucessfully.\n";
            return;
        }
    }
    std::cout << "No found reservation for room: " << roomNumber << ".\n";
}

void HotelManager::saveReservationsToFile(const std::string& filename) const {
    std::ofstream file(filename);
    for (const auto& res : reservations) {
        file << res->getGuestName() << ";"
             << res->getRoomNumber() << "\n";
    }
    std::cout << "Save in file: " << filename << std::endl;
}
