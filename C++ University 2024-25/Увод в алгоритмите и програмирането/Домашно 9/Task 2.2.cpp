#include <iostream>
using namespace std;

int main() {
    const int n = 5;
    int A[n + 1] = {0, 5, 2, 4, 6, 1};

    for (int i = 2; i <= n; i++) {
        int key = A[i];
        A[0] = key;
        int j = i - 1;
        while (A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    for (int i = 1; i <= n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
