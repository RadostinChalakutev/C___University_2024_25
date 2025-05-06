#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm> // за std::generate
#include <random>

using namespace std;
using namespace chrono;

void bubbleSortSmart(vector<int>::pointer data, int size);

void bubbleSortSmart(vector<int>::pointer data, int size) {
}

void bubbleSortFixed(vector<int>::pointer data, int size);

int main() {
    vector<int> sizes = {1000, 2000, 5000, 10000, 20000, 30000, 40000, 50000};
    random_device rd;
    mt19937 gen(rd());

    for (int size : sizes) {
        vector<int> original(size);
        generate(original.begin(), original.end(), [&]() { return gen() % 100000; });

        vector<int> arr1 = original;
        auto start1 = high_resolution_clock::now();
        bubbleSortFixed(arr1.data(), size);
        auto end1 = high_resolution_clock::now();
        auto duration1 = duration_cast<milliseconds>(end1 - start1).count();

        vector<int> arr2 = original;
        auto start2 = high_resolution_clock::now();
        bubbleSortSmart(arr2.data(), size);
        auto end2 = high_resolution_clock::now();
        auto duration2 = duration_cast<milliseconds>(end2 - start2).count();

        
    }

    return 0;
}
