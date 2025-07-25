#include "Person.h"
#include <iostream>

Person::Person(const std::string& name, int age)
    : name(name), age(age) {}

Person::~Person() {}

std::string Person::getName() const {
    return name;
}
