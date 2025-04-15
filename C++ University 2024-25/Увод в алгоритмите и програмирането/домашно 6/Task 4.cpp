#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <cstdlib>

// 1. Search whole array
bool searchWholeArray(const std::vector<int>& array, int value) {
    bool found = false;
    for (int element : array) {
        if (element == value) {
            found = true;
        }
    }
    return found;
}

// 2. Anchor search (with early exit)
bool anchorSearch(const std::vector<int>& array, int value) {
    for (int element : array) {
        if (element == value) {
            return true;
        }
    }
    return false;
}

// 3. Binary search
bool binarySearch(const std::vector<int>& array, int value) {
    int left = 0, right = array.size() - 1;
    while (left <= right) {
        int middle = (left + right) / 2;
        if (array[middle] == value) {
            return true;
        }
        if (array[middle] < value) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    return false;
}

// Template for measuring time
template <typename Func>
double measureSearchTime(Func searchFunction, const std::vector<int>& array, const std::vector<int>& values) {
    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 100; ++i) {
        for (int value : values) {
            searchFunction(array, value);
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    return elapsed.count();
}

int main() {
    std::vector<int> sizes = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000};
    std::vector<int> searchValues(5);
    std::cout << "Enter 5 values to search (between 1 and 1000): ";
    for (int& value : searchValues) {
        std::cin >> value;
    }

    for (int size : sizes) {
        // Generate random array
        std::vector<int> randomArray(size);
        for (int i = 0; i < size; ++i) {
            randomArray[i] = rand() % 1000 + 1;
        }

        // Create a sorted copy for binary search
        std::vector<int> sortedArray = randomArray;
        std::sort(sortedArray.begin(), sortedArray.end());

        // Measure search times
        double wholeArrayTime = measureSearchTime(searchWholeArray, randomArray, searchValues);
        double anchorSearchTime = measureSearchTime(anchorSearch, randomArray, searchValues);
        double binarySearchTime = measureSearchTime(binarySearch, sortedArray, searchValues);

        // Print results
        std::cout << "Array size: " << size << std::endl;
        std::cout << "Whole array search: " << wholeArrayTime << " seconds" << std::endl;
        std::cout << "Anchor search:       " << anchorSearchTime << " seconds" << std::endl;
        std::cout << "Binary search:       " << binarySearchTime << " seconds" << std::endl;
        std::cout << "-----------------------------" << std::endl;
    }

    return 0;
}
