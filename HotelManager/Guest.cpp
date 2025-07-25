#include "Guest.h"
#include <iostream>

Guest::Guest(const std::string& name, int age, const std::string& idNumber)
    : Person(name, age), idNumber(idNumber) {}

void Guest::printInfo() const {
    std::cout << "Гост: " << name
              << ", Възраст: " << age
              << ", ID: " << idNumber << std::endl;
}
