#include <iostream>
#include <vector>
using namespace std;

int countInversions(const vector<int>& arr) {
    int inversions = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inversions++;
            }
        }
    }
    return inversions;
}

int main() {
    vector<int> arr = {1, 1, 7, 3, 7, 3, 5};

    cout << "Inversions: " << countInversions(arr) << endl;

    return 0;
}
