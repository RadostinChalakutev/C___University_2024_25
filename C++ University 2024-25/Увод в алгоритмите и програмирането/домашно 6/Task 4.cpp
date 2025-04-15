#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

const int REPEAT = 100;


bool linearSearchFull(const int arr[], int size, int x) {
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) found = true;
    }
    return found;
}


bool linearSearchAnchor(const int arr[], int size, int x) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == x) return true;
    }
    return false;
}


bool binarySearch(const int arr[], int size, int x) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == x) return true;
        else if (x < arr[mid]) right = mid - 1;
        else left = mid + 1;
    }
    return false;
}

int main() {

    srand(time(0));
    int targets[5];
    cout << "Enter 5 values to search: ";
    for (int i = 0; i < 5; ++i) {
        cin >> targets[i];
    }

    cout << "\nSize\tLinearFull\tAnchor\t\tBinary\n";
    for (int size = 100; size <= 1000; size += 100) {

        int* randArray = new int[size];
        for (int i = 0; i < size; ++i) {
            randArray[i] = rand() % 200 + 1;
        }


        int* sortedArray = new int[size];
        for (int i = 0; i < size; ++i) {
            sortedArray[i] = i + 1;
        }


        clock_t t1 = clock();
        for (int rep = 0; rep < REPEAT; ++rep) {
            for (int i = 0; i < 5; ++i)
                linearSearchFull(randArray, size, targets[i]);
        }
        clock_t t2 = clock();


        clock_t t3 = clock();
        for (int rep = 0; rep < REPEAT; ++rep) {
            for (int i = 0; i < 5; ++i)
                linearSearchAnchor(randArray, size, targets[i]);
        }
        clock_t t4 = clock();


        clock_t t5 = clock();
        for (int rep = 0; rep < REPEAT; ++rep) {
            for (int i = 0; i < 5; ++i)
                binarySearch(sortedArray, size, targets[i]);
        }
        clock_t t6 = clock();


        double timeFull = double(t2 - t1) / CLOCKS_PER_SEC;
        double timeAnchor = double(t4 - t3) / CLOCKS_PER_SEC;
        double timeBinary = double(t6 - t5) / CLOCKS_PER_SEC;


        cout << size << "\t" << timeFull << "\t\t" << timeAnchor << "\t\t" << timeBinary << endl;

        delete[] randArray;
        delete[] sortedArray;
    }

    return 0;
}
