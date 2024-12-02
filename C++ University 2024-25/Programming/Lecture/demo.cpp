#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
    string firstName;
    string lastName;
    string ages;
    string hometown;

    Student(string firstName, string lastName, string ages, string hometown) {
        this->firstName = firstName;
        this->lastName = lastName;
        this->ages = ages;
        this->hometown = hometown;
    }

    string getFirstName() {
        return firstName;
    }

    string getLastName() {
        return lastName;
    }

    string getAges() {
        return ages;
    }

    string getHometown() {
        return hometown;
    }
};

int main() {
    vector<Student> listName;
    string input;

    // Въвеждане на данни от потребителя
    while (getline(cin, input) && input != "end") {
        size_t pos = 0;
        vector<string> commandData;
        while ((pos = input.find(" ")) != string::npos) {
            commandData.push_back(input.substr(0, pos));
            input.erase(0, pos + 1);
        }
        commandData.push_back(input); // Добавяне на последния елемент

        if (commandData.size() == 4) {
            Student currentStudent(commandData[0], commandData[1], commandData[2], commandData[3]);
            listName.push_back(currentStudent);
        }
    }

    // Въвеждане на hometown за филтриране
    string hometown;
    getline(cin, hometown);

    // Филтриране и отпечатване на студентите от зададения hometown
    for (Student student : listName) {
        if (student.getHometown() == hometown) {
            cout << student.getFirstName() << " " << student.getLastName() << " is " << student.getAges() << " years old" << endl;
        }
    }

    return 0;
}
