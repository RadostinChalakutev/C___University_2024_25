#include <iostream>

using namespace std;


int main() {
    string message;
    getline(cin, message);
    int n;
    cin >> n;
    int size = message.size();
    string newString = "";
    char newChar;

    if (n < 0 || n > 25) {
        cout << "Invalid input data!" << endl;
        return 0;
    }

    for (int i = 0; i < size; i++) {
        char currentSymbol = message[i];
        newChar = currentSymbol+n;
        if (currentSymbol >= 'A' && currentSymbol <= 'Z') {
            newString +=char((currentSymbol-'A'+n)%26+'A');

        } else if (currentSymbol >= 'a' && currentSymbol <= 'z') {
            newString +=char((currentSymbol-'a'+n)%26+'a');

        } else {
            newString.append(1, currentSymbol);
        }
    }

    cout << newString << endl;
}
