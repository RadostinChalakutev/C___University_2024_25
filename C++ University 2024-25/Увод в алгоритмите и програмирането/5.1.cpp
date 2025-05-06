#include <iostream>
using namespace std;

typedef long long ll;

ll insertionSort(int A[], int n) {
    ll comparisons = 0;
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && (++comparisons && A[j] > key)) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
    return comparisons;
}

int main() {
    int sizes[] = {10000, 15000, 20000, 30000};
    for (int s = 0; s < 4; s++) {
        int n = sizes[s];
        int* A = new int[n];
        for (int i = 0; i < n; i++)
            A[i] = i;  // нареден масив

        ll comps = insertionSort(A, n);
        cout << ": " << n << ", : " << comps << endl;

        delete[] A;
    }
    return 0;
}
