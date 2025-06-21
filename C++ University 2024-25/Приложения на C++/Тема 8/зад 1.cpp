//    1. Съставете функция която извежда на екрана първия, поседния и средния символ от низ с дадена дължина
#include <iostream>
#include <string>
using namespace std;

void printFirstMiddleLast(const string& str) {
    int length = str.length();

    if (length == 0) {
        cout << "Низът е празен!" << endl;
        return;
    }

    char first = str[0];
    char last = str[length - 1];
    char middle = str[length / 2]; // Ако е четен, взема десния среден

    cout << "Първи символ: " << first << endl;
    cout << "Среден символ: " << middle << endl;
    cout << "Последен символ: " << last << endl;
}

int main() {
    string text;
    cout << "Въведете низ: ";
    cin >> text;

    printFirstMiddleLast(text);

    return 0;
}
