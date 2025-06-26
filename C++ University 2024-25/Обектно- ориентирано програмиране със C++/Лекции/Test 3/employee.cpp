#include <iostream>
using namespace std;

#include "employee.h"
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

class Department  {
public:
    Department(string, const Employee&);
    ~Department();
    Department& operator=(const Department&);
    void print() const;
private:
    string name;
    Employee* receptionist;
};

Department::Department(string n, const Employee& e)
{  name = n;
    receptionist = new Employee(e.get_name(), e.get_salary());
    cout << "Constructor: " << endl;
    print();
}

Department::~Department()
{   cout << "Destructor:" << endl;
    print();
    delete receptionist;
}

Department& Department::operator=(const Department& b)
{  if (this != &b)
{  name = b.name;
    delete receptionist;
    if (b.receptionist == NULL) receptionist = NULL;
    else
        receptionist = new Employee(b.receptionist->get_name(),
                                    b.receptionist->get_salary());
}
    return *this;
}

void Department::print() const
{  cout << "Name: " << name << "\n"
        << "Receptionist: ";
    if (receptionist == NULL) cout << "None";
    else
        cout << receptionist->get_name() << " "
             << receptionist->get_salary();
    cout << "\n";
}
