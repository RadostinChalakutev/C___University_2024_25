// department3.cpp
//
#include <string>
#include <iostream>
using namespace std;

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

void Department::print() const
{  cout << "Name: " << name << "\n"
        << "Receptionist: ";
    if (receptionist == NULL) cout << "None";
    else
        cout << receptionist->get_name() << " "
             << receptionist->get_salary();
    cout << "\n";
}

int main()
{   Department shipping("Shipping", Employee("Hacker, Harry", 45000));
    //   shipping.print();

    Department qc("Quality Control", Employee("Tester, Tina", 50000));
    //    qc.print();

    shipping = qc;

    return 0;
}