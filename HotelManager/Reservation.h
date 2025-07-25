#pragma once
#include "Guest.h"
#include "Room.h"

class Reservation {
    Guest guest;
    Room* room;
public:
    Reservation(const Guest& guest, Room* room);
    void printDetails() const;
    std::string getGuestName() const;
    int getRoomNumber() const;
    ~Reservation();
};
