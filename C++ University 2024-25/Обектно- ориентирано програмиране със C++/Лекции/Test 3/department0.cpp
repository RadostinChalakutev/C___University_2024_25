#include <iostream>
#include <string>
using namespace std;

/**
 * Клас Employee – представя служител с име и заплата.
 */
class Employee {
public:
    Employee(string n, double s)
        : name(n), salary(s) {}

    string get_name() const {
        return name;
    }

    double get_salary() const {
        return salary;
    }

    void set_salary(double new_salary) {
        salary = new_salary;
    }

private:
    string name;
    double salary;
};

/**
 * Клас Department – представя отдел в организация с име и рецепционист.
 */
class Department {
public:
    Department(string n)
        : name(n), receptionist(nullptr) {}

    void set_receptionist(Employee* e) {
        receptionist = e;
    }

    void print() const {
        cout << "Name: " << name << "\n"
             << "Receptionist: ";
        if (receptionist == nullptr)
            cout << "None";
        else
            cout << receptionist->get_name() << " "
                 << receptionist->get_salary();
        cout << "\n";
    }

private:
    string name;
    Employee* receptionist;
};

/**
 * Главна функция
 */
int main() {
    Department shipping("Shipping");
    Employee* harry = new Employee("Hacker, Harry", 45000);
    // shipping.set_receptionist(harry); // закоментирано

    Department qc("Quality Control");
    Employee* tina = new Employee("Tester, Tina", 50000);
    qc.set_receptionist(tina);
    tina->set_salary(55000);

    shipping.print();
    qc.print();

    delete harry;
    delete tina;

    return 0;
}
