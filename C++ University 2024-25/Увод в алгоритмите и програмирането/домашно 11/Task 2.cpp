#include <iostream>
#include <iomanip>
using namespace std;

const int N = 3;

int main() {
    double a[N][N+1] = {
        {2, 0, 1, 134},
        {1, -3, 7, 12},
        {7, 3, 5, -36}
    };

    // Прав ход на Гаус
    for (int k = 0; k < N - 1; ++k) {
        for (int i = k + 1; i < N; ++i) {
            double m = a[i][k] / a[k][k];
            for (int j = k; j <= N; ++j) {
                a[i][j] -= m * a[k][j];
            }
        }
    }

    // Отпечатване на матрицата след правия ход
    cout << fixed << setprecision(2);
    cout << "Martix:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j <= N; ++j) {
            cout << setw(8) << a[i][j];
        }
        cout << endl;
    }

    return 0;
}
