#include <iostream>
using namespace std;
#include "functions.h"

#include <iostream>

int sumDivisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}


void Divisors(int number) {
    cout << "Divisors are: ";
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            cout << i << " ";
        }
    }
}

