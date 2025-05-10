#include <iostream>
using namespace std;

int main() {

    int A[3][4] = {
        {3, 8, 9, 4},
        {3, 7, 1, 7},
        {6, 4, 3, 2}
    };

    int B[4][2] = {
        {5, 3},
        {8, 4},
        {9, 1},
        {4, 7}
    };


    int C[3][2] = {0};


    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 1; j++) {
            for (int k = 0; k <= 3; k++) {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
   }
    cout << "Matrix  C = A x B:\n";
    for (int i = 0; i <= 2; i++) {
        for (int j = 0; j <= 1; j++) {
            cout << C[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
