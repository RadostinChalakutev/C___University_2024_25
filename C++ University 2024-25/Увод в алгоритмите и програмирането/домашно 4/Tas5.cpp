#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double Sum = 0.0;
    double current = 1.0;
    int n = 1;


    while (fabs(current) >= 0.0001) {
        current = pow(-1, n + 1) / n;
        Sum += current;
        n++;
    }


    cout << "Sum is:  " << Sum << endl;

    return 0;
}