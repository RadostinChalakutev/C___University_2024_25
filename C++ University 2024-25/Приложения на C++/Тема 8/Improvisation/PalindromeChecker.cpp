#include "PalindromeChecker.h"

bool PalindromeChecker::isPalindrome() const {
    int n = input.length();
    for (int i = 0; i < n / 2; ++i) {
        if (input[i] != input[n - 1 - i])
            return false;
    }
    return true;
}

void PalindromeChecker::checkAndDisplayResult() {
    if (!isLengthValid()) {
        cout << "Низът трябва да бъде с дължина между 10 и 50 символа!" << endl;
        return;
    }

    if (isPalindrome())
        cout << "Въведеният низ Е палиндром." << endl;
    else
        cout << "Въведеният низ НЕ е палиндром." << endl;
}
