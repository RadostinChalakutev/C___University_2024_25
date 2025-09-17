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
    int num_of_employees, num_of_managers, num_of_engineeries, num_of_researchers;
    bool flag= true;
    int counter;

    while (flag) {
        cout<<"How many employees you have?";
        cin>>num_of_employees;
    }



}
