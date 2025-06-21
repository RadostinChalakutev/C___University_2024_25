#ifndef PALINDROMECHECKER_H
#define PALINDROMECHECKER_H

#include "StringInput.h"

class PalindromeChecker : public StringInput {
public:
    bool isPalindrome() const;
    void checkAndDisplayResult();
};

#endif
