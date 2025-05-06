#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <fstream>

using namespace std;

void bubbleSortBasic(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i)
        for (int j = 0; j < n - 1 - i; ++j)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}

double measureTime(vector<int>& arr) {
    auto start = chrono::high_resolution_clock::now();
    bubbleSortBasic(arr);
    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> elapsed = end - start;
    return elapsed.count();
}
int main() {
    ofstream file("bubble_basic.csv");
    file << "Size, time, seconds\n";

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
