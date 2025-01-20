#include <iostream>
#include <set>
#include <string>

int symmetricDifferenceCount(const std::set<char>& setA, const std::set<char>& setB) {
    std::set<char> symmetricDifference;

    // Добавяме елементи от setA, които не са в setB
    for (std::set<char>::iterator it = setA.begin(); it != setA.end(); ++it) {
        if (setB.find(*it) == setB.end()) {
            symmetricDifference.insert(*it);
        }
    }

    // Добавяме елементи от setB, които не са в setA
    for (std::set<char>::iterator it = setB.begin(); it != setB.end(); ++it) {
        if (setA.find(*it) == setA.end()) {
            symmetricDifference.insert(*it);
        }
    }

    return symmetricDifference.size();
}

int main() {
    int sizeA, sizeB;
    std::string elementsA, elementsB;

    std::cin >> sizeA >> sizeB;
    std::cin >> elementsA >> elementsB;

    if (sizeA < 0 || sizeA > 20 || sizeB < 0 || sizeB > 20) {
        std::cout << "Invalid input data!" << std::endl;
        return 0;
    }

    std::set<char> setA(elementsA.begin(), elementsA.begin() + sizeA);
    std::set<char> setB(elementsB.begin(), elementsB.begin() + sizeB);

    int result = symmetricDifferenceCount(setA, setB);
    std::cout << result << std::endl;

    return 0;
}
