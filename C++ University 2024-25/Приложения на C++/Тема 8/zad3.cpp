/*
За 14 февруари учениците от един клас решили чрез програма да
проверят във всяка от двойките момче-момиче кой е шефа.,
т.е. кой има ‘по-голямо’ име. Да се състави програма на C++,
чрез която по въведени трите имена на двама човека се
извежда чие име има по-голям сбор от ASCII кодовете
на съставящите името букви.

 */
#include <iostream>
#include <string>
using namespace std;

// Функция за изчисляване на сбора от ASCII кодовете на всички символи
int calculateAsciiSum(const string& fullName) {
    int sum = 0;
    for (char c : fullName) {
        if (c != ' ') // Пропускаме интервалите между имената
            sum += int(c);
    }
    return sum;
}

int main() {
    string name1, name2, name3;
    string name4, name5, name6;

    cout << "Въведете трите имена на първия човек: ";
    cin >> name1 >> name2 >> name3;

    cout << "Въведете трите имена на втория човек: ";
    cin >> name4 >> name5 >> name6;

    string fullName1 = name1 + name2 + name3;
    string fullName2 = name4 + name5 + name6;

    int sum1 = calculateAsciiSum(fullName1);
    int sum2 = calculateAsciiSum(fullName2);

    cout << "\nСбор ASCII за " << name1 << " " << name2 << " " << name3 << ": " << sum1 << endl;
    cout << "Сбор ASCII за " << name4 << " " << name5 << " " << name6 << ": " << sum2 << endl;

    if (sum1 > sum2)
        cout << "\nMain is : " << name1 << " " << name2 << " " << name3 << endl;
    else if (sum2 > sum1)
        cout << "\nThe main is : " << name4 << " " << name5 << " " << name6 << endl;
    else
        cout << "\nИмената имат еднакъв сбор – няма шеф!" << endl;

    return 0;
}
