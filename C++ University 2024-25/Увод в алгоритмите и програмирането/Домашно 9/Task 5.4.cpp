#include <iostream>
using namespace std;

typedef long long ll;

////котва обратно нареден масив

ll insertionSortWithAnchor(int A[], int n) {
    ll comparisons = 0;
    for (int i = 2; i <= n; i++) {
        int key = A[i];
        A[0] = key; // котва
        int j = i - 1;
        while (++comparisons && A[j] > key) {
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
        int* A = new int[n + 1];
        for (int i = 1; i <= n; i++)
            A[i] = n - i + 1;

        ll comps = insertionSortWithAnchor(A, n);
        cout << "Size: " << n << ", comparison: " << comps << endl;

        delete[] A;
    }
    return 0;
}
