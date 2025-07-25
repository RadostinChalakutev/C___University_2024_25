#include "Reservation.h"
#include <iostream>

Reservation::Reservation(const Guest& g, Room* r)
    : guest(g), room(r)
{
    if (room) room->reserve();
}

void Reservation::printDetails() const {
    guest.printInfo();
    room->printInfo();
}

std::string Reservation::getGuestName() const {
    return guest.getName();
}

int Reservation::getRoomNumber() const {
    return room->getNumber();
}

Reservation::~Reservation() {
    if (room) room->release();
}
