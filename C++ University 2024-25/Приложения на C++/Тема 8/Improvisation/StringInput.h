#ifndef STRINGINPUT_H
#define STRINGINPUT_H

#include <iostream>
#include <string>
using namespace std;

class StringInput {
protected:
    string input;

public:
    void readInput();
    bool isLengthValid() const;
    string getInput() const;
};

#endif
