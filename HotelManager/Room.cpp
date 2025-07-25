#include "Room.h"
#include <iostream>

Room::Room(int number, int beds)
    : number(number), beds(beds), isAvailable(true) {}

void Room::printInfo() const {
    std::cout << "Стая " << number
              << ", Легла: " << beds
              << ", Статус: " << (isAvailable ? "Свободна" : "Заета")
              << std::endl;
}

bool Room::available() const {
    return isAvailable;
}

void Room::reserve() {
    isAvailable = false;
}

void Room::release() {
    isAvailable = true;
}

int Room::getNumber() const {
    return number;
}
