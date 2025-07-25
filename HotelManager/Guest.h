#pragma once
#include "Person.h"

class Guest : public Person {
    std::string idNumber;
public:
    Guest(const std::string& name, int age, const std::string& idNumber);
    void printInfo() const override;
};
