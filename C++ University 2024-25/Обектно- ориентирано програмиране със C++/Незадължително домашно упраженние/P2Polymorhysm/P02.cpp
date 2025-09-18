#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;



class Employee {
protected:
    string firstName;
    string lastName;
    float salary;

    public:


    Employee(){salary=0;};
    Employee(string firstName, string lastName, float salary);
    string getName();
    void setName(string firstName, string lastName);
    float getSalary();
    void setSalary(float salary);
    virtual void Print();

};

class Manager :  Employee {

  unsigned int  num_of_meeting;
    unsigned int days_off;
public:
    Manager(){num_of_meeting=5;days_off=3;};
    Manager(unsigned int num_of_meeting, unsigned int days_off);
    int getNumOfMeeting();
    void setNumOfMeeting(unsigned int num_of_meeting);
    int getDaysOff();
    void setDaysOff(unsigned int days_off);
    void Print();

};

class Engineer:  Employee {
    int level;
    int experience;
    string degree;

public:
    Engineer() {
        level=1500;
        experience=2;
        degree="Information technology";

    };
    Engineer (int level,int experence, string degree);
    int getLevel();
    void setLevel(int level);
    int getExperience();
    void setExperience(int experience);
    string getDegree();
    void setDegree(string degree);
    void Print();

};

class Researcher:  Employee {
    string universtiy_name;
    string dissertation;
public:
    Researcher() {
        universtiy_name="NBU";
        dissertation="Information technology";
    };
    Researcher(string university_name, string dissertation);
    string getUniversityName();
    void setUniversityName(string university_name);
    string getDissertation();
    void setDissertation(string dissertation);
    void Print() ;
};

int main() {
    Employee** employees;
    unsigned num_of_employees, num_of_managers, num_of_engineers, num_of_researchers;
    bool flag= true;
    int counter;

    while (flag) {
        cout<<"How many employees you have?"<<endl;;
        cin>>num_of_employees;
        if(num_of_managers) {
            cout<<"How many managers you have?"<<endl;;
            cin>>num_of_managers;
            if (num_of_engineers) {
                cout<<"How many engine you have?"<<endl;;
                cin>>num_of_engineers;
                if (num_of_researchers) {
                    cout<<"How many researchers you have?"<<endl;
                    cin>>num_of_researchers;

                    if ((num_of_managers+num_of_engineers+num_of_researchers)<num_of_employees) {
                        flag = false;
                        continue;
                    }
                }
            }
            cout<<"Number of managers, engineers and researchers should be less than total of employees."<<endl;
            continue;

        }
        cout<<"Numbers of employees cannot be zero"<<endl;
    }
    employees=new Employee *[num_of_employees];
    for (counter = 0; counter < num_of_managers; counter++) {
        employees[counter] = new Manager("Manager", "Managin", 1000.0f, counter + 2, 25);
    }
    for (; counter < (num_of_managers + num_of_engineers); counter++) {
        employees[counter] = new Engineer("Engi", "Engineer", float(counter) * 900.0f, float(counter) * 800, counter, "Electrical");
    }
    for (; counter < (num_of_managers + num_of_engineers + num_of_researchers); counter++) {
        employees[counter] = new Researcher("Rese", "Researcher", 850.0f, "University of Maryland", "Cosmic candy production");
    }
    for (; counter < num_of_employees; counter++) {
        employees[counter] = new Employee("Empy", "Employee", float(counter) * 10.0f);
    }
    for (unsigned n = 0; n < num_of_employees; n++) {
        employees[n]->Print();
    }
    for (unsigned n = 0; n < num_of_employees; n++) {
        delete employees[n];
    }
    delete[] employees;
    system("PAUSE");
}
Employee::Employee(string firstName, string lastName, float salary) {
    this->firstName=firstName;
    this->lastName=lastName;
    this->salary=salary;

}
string Employee::getName() {
    return firstName+" "+lastName;
}
void Employee::setName(string firstName, string lastName) {
    this->firstName=firstName;
    this->lastName=lastName;
}
float Employee::getSalary() {
    return salary;
}
void Employee::setSalary(float salary) {
    this->salary=salary;
}
void Employee::Print() {
    cout<<"Employee: "<<getName()<<" with salary of "<<salary<<endl;
}

Manager::Manager(unsigned int num_of_meeting, unsigned int days_off) {
    this->num_of_meeting=num_of_meeting;
    this->days_off=days_off;

}
unsigned int Manager::getNUm) {
    return num_of_meeting;
}
void Manager::setNumOfMeeting(unsigned int num_of_meeting) {
    this->num_of_meeting=num_of_meeting;
}
int Manager::getDaysOff() {
    return days_off;
}
void Manager::setDaysOff(int days_off) {
    this->days_off=days_off;
}
void Manager::Print() {

}






