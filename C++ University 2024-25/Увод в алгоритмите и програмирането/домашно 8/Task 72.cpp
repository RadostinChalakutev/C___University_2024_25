#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <fstream>

using namespace std;
void bubbleSortOptimized(vector<int>& arr) {
    int n = arr.size();
    bool swapped = true;
    int i = 0;
    while (swapped) {
        swapped = false;
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        ++i;
    }
}
double measureTime(vector<int>& arr) {
    auto start = chrono::high_resolution_clock::now();
    bubbleSortOptimized(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    return elapsed.count();
}

int main() {
    ofstream file("bubble_optimized.csv");
    file << "Size,duration_seconds\n";

    srand(time(nullptr));

    for (int size = 1000; size <= 50000; size += 1000) {
        vector<int> arr(size);
        for (int& x : arr)
            x = rand();

        double duration = measureTime(arr);
        cout << "Size: " << size << " | duration: " << duration << " s\n";
        file << size << "," << duration << "\n";
    }
    return 0;
}
