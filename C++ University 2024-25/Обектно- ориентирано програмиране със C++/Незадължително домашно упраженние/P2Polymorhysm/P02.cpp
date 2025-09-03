#include <iostream>
using namespace std;

class Employee{
  protected:
    string firstName;
    string lastName;
    double salary;
    public:
      Employee(){salary = 0;};
      Employee(string firstName, string lastName, double salary);
        string get_name();
        void set_name(string firstName, string lastName);

        double getSalary();
        void setSalary(double salary);

        virtual void Print();

 };



  class Manager:public Employee{

        int numberOfMeetings;
        int paidLeaving;

        public:
          Manager(){numberOfMeetings = 0;paidLeaving = 0;};
          Manager(string firstName, string lastName, double salary);
          int getNumberOfMeetings();

          void setNumberOfMeetings(int numberOfMeetings);

          int getPaidLeaving();

          void setPaidLeaving(int paidLeaving);

          void Print();

  };
  class Engineers: public Employee{

      int levelOfQuality; //ниво на владеене на С++
      int yearsExperience;
      string degree; //специалност
  public:
      Engineers(){levelOfQuality=5;yearsExperience=0;degree="IT";};
      Engineers(string firstName, string lastName, double salary);
      int getLevelOfQuality();
      void setLevelOfQuality(int levelOfQuality);
      int getYearsExperience();
      void setYearsExperience(int yearsExperience);
      string getDegree();
      void setDegree(string degree);
      void Print();
  };

  class Researchers: public Employee{

      string nameUniversity;
      string disertation; //темата на дисертацията
  public:
      Researchers(){nameUniversity="NBU";disertation="Information Tehnology";};
      Researchers(string firstName, string lastName, double salary);

      int getNameUniversity();
      void setNameUniversity(string nameUniversity);
      string getDisertation();
      void setDisertation(string disertation);
      void Print();

  };
  int main(){

  }
  Employee::Employee(string firstName, string lastName, double salary){
    this-> firstName=firstName;
    this-> lastName=lastName;
    this->salary=salary;

  }
  string Employee::get_name(){
    return firstName+" "+ lastName;
  }
  void Employee::set_name(string firstName, string lastName){
    this-> firstName=firstName;
    this-> lastName=lastName;
  }

  double Employee::getSalary(){
    return salary;
  }
  void Employee::setSalary(double salary){
    this-> salary=salary;
  }
  void Employee::Print(){
    cout<<"Employee: "<<get_name()<<" with salary of "<<getSalary()<<"."<<endl;
  }
  Manager::Manager(string firstName, string lastName, double salary){
    this->numberOfMeetings=numberOfMeetings;
    this->paidLeaving=paidLeaving;
  }
  int Manager::getNumberOfMeetings(){
    return numberOfMeetings;
  }
  void Manager::setNumberOfMeetings(int numberOfMeetings){
    this->numberOfMeetings=numberOfMeetings;

  }
  int Manager::getPaidLeaving(){
    return paidLeaving;
  }
  void Manager::setPaidLeaving(int paidLeaving){
    this->paidLeaving=paidLeaving;

  }