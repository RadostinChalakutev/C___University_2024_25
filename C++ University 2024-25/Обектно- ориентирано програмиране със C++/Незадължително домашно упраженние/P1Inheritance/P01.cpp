#include <iostream>
using namespace std;

class Dog {
public:
  Dog() {};
  void print();
};
class Labrador :public Dog {
public:
  Labrador() {};
  void print();
};

int main() {
  Dog dog;
  Labrador lab;
  dog.print();
  lab.print();
  return 0;

}
void Dog::print() {
  cout << "This is class Dog" << endl;

}
void Labrador::print() {
  cout << "This is Labrador " << endl;
}