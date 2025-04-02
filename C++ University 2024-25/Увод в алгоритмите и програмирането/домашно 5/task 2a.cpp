#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double degrees;
    cout << "Enter angle in degrees: ";
    cin >> degrees;
    double r = degrees * M_PI / 180.0;
    double sum = 0.0;
    double current= r;
    int znamenatel = 1;

    while (true) {
        sum += current;

        znamenatel += 2;  //
        if (znamenatel < 0) {
            cout << "Overflow when n= " << znamenatel << endl;
            break;
        }
        current =-current * r * r / (znamenatel * (znamenatel - 1));
        if (current < 0.0) {
            break;
        }
    }
    cout << "Result " << sum << endl;
    return 0;
}