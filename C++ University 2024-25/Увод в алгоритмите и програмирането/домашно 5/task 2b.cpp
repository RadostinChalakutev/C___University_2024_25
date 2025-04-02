#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double degrees;
    cout << "Enter angle in degrees: ";
    cin >> degrees;
    double x = degrees * M_PI / 180.0;
    double sum = 0.0;
    double current = x;
    int n = 1;
    sum += current;

    while (current >= 0.0001) {
        current = -current * x * x / (2 * n * (2 * n -1));
        sum += current;
        n++;
    }
    cout << "sin(" << degrees << ") = " << sum << endl;
    cout << "Numbers of iteration to reach 0.0001: " << n << endl;

    return 0;
}
