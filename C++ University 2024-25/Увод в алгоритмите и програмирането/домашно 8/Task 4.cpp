#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    int A[MAX];
    int n, i, j, temp, inv;

    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements in array:\n";
    for (i = 0; i < n; i++) {
        cin >> A[i];
    }
    inv = 1;
    while (inv != 0) {
        inv = 0;
        for (j = 0; j < n - 1; j++) {
            if (A[j] > A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                inv++;
            }
        }
    }
    cout << "Sorted array is:\n";
    for (i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
