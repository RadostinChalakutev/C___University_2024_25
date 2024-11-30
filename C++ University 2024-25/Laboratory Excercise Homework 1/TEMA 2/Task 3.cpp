#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum = 0;

    if (n < 2 || n > 2000) {
        cout << "Invalid input data!" << endl;
        return 0;
    }

    for (int i = 1; i  < n; ++i) {
        if (n % i == 0) {
            bool isPrime = false;
            for (int j = 2; j * j <= i; ++j) {
                if (i % j == 0) {
                    isPrime =true;
                    break;
                }
            }
            if (isPrime ==true) {
                sum += i;
            }
        }
    }

    cout << sum;
    return 0;
}
