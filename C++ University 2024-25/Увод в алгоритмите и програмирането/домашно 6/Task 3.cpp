#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binarySearchTrace(const vector<char>& arr, char x) {
    int start = 0, end = arr.size() - 1;
    int checks = 0;
    cout << "Search for: '" << x << "':\n";
    while (start <= end) {
        int mid = (start + end) / 2;
        cout << "Check:  " << ++checks
             << ": start = " << start
             << ", end = " << end
             << ", mid = " << mid
             << ", arr[mid] = '" << arr[mid] << "'\n";

        if (arr[mid] == x) {
            cout << "==> Element '" << x << "'is found on position  " << mid
                 << " after  " << checks << " checks .\n";
            return true;
        } else if (x < arr[mid]) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    cout << "==> The element  '" << x << "' is NOT found after " << checks << " checks.\n";
    return false;
}

int main() {
    string raw = "117373Chalakutev";
    vector<char> arr(raw.begin(), raw.end());
    sort(arr.begin(), arr.end());
    cout << "Sorted array: ";
    for (char c : arr) cout << c << ' ';
    cout << endl;
    vector<char> targets = {'9', '8', '7', 'y', 'u', 'a', 'o'};

    for (char ch : targets) {
        binarySearchTrace(arr, ch);
    }
    return 0;
}
