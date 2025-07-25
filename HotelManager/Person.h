#pragma once
#include <string>

class Person {
protected:
    std::string name;
    int age;
public:
    Person(const std::string& name, int age);
    virtual void printInfo() const = 0;
    virtual ~Person();
    std::string getName() const;
};
