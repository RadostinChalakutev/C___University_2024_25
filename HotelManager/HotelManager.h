#pragma once
#include <vector>
#include <string>
#include "Room.h"
#include "Reservation.h"

class HotelManager {
    std::vector<Room> rooms;
    std::vector<Reservation*> reservations;
public:
    ~HotelManager();
    void addRoom(int number, int beds);
    void createReservation(const Guest& guest);
    void showReservations() const;
    void findReservationByName(const std::string& name) const;
    void cancelReservationByRoomNumber(int roomNumber);
    void saveReservationsToFile(const std::string& filename) const;
private:
    Room* findAvailableRoom();
};
