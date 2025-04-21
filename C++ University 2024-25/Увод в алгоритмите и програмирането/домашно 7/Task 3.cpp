#include <iostream>
using namespace std;

int main() {
    const int n = 9;
    int A[n] = {2, 1, 4, 1, 6, 7, 1, 3, 7};
    int B[n];

    int MAX = A[0];
    for (int i = 1; i < n; i++) {
        if (A[i] > MAX) {
            MAX = A[i];
        }
    }
    B[n - 1] = MAX;

    for (int j = 0; j < n - 1; j++) {
        int MIN = A[0];
        int Flag = 0;

        for (int i = 1; i < n; i++) {
            if (A[i] < MIN) {
                MIN = A[i];
                Flag = i;
            }
        }

        B[j] = MIN;
        A[Flag] = MAX;
    }
    cout << "Sorted array B: ";
    for (int i = 0; i < n; i++) {
        cout << B[i] << " ";
    }
    return 0;
}
