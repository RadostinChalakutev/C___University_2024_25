#include <iostream>
using namespace std;

int main() {
    const int n = 8;
    int A[n] = {2,1,4,1,6,7,1,3};

    cout << "Start:\n";
    cout << "Situation 0: ";
    for (int i = 0; i < n; i++) {
        cout << A[i];
        if (i < n - 1) cout << ",";
    }
    cout << endl;


    for (int i = 0; i < n - 1; i++) {
        int MIN = A[i];
        int Flag = i;
        int comparisons = 0;

        for (int j = i + 1; j < n; j++) {
            comparisons++;
            if (A[j] < MIN) {
                MIN = A[j];
                Flag = j;
            }
        }


        int temp = A[i];
        A[i] = A[Flag];
        A[Flag] = temp;


        cout << "Situation" << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << A[k];
            if (k < n - 1) cout << ",";
        }
        cout << "\niteration " << i + 1 << ", comarison "
        << comparisons << endl;
    }

    return 0;
}
