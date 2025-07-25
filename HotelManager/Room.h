#pragma once

class Room {
    int number;
    int beds;
    bool isAvailable;
public:
    Room(int number, int beds);
    void printInfo() const;
    bool available() const;
    void reserve();
    void release();
    int getNumber() const;
};
