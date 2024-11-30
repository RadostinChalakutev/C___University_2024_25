#include <iostream>
#include <list>
using namespace std;

class Person {

public:
    string name;
    string lastName;
    int grade;
};




int main() {
   Person person1;
    string input;
    getline(cin, input);
    string name;
    getline(cin, name);
    string lastName;
    getline(cin, lastName);
    int grade;
    cin >> grade;
    list<int> persons;

    person1.name=name;
    person1.lastName=lastName;
    person1.grade=grade;

    while (input!="Stop") {
        int currentGrade=0;

        if (currentGrade<=grade) {
            currentGrade=grade;
            cin>>grade;

        }


    }

    return 0;

}