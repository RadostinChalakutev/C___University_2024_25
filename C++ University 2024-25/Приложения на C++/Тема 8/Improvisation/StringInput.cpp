#include "StringInput.h"

void StringInput::readInput() {
    cout << "Въведете ред от символи (между 10 и 50 символа): ";
    getline(cin, input);
}

bool StringInput::isLengthValid() const {
    return input.length() >= 10 && input.length() <= 50;
}

string StringInput::getInput() const {
    return input;
}
