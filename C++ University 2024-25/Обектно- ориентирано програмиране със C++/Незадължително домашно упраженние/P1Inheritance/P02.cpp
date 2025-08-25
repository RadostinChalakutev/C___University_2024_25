#include <iostream>
using namespace std;

class A{
  public:
  A(){
    cout<<"A"<<endl;

  };
};
class B{
  public:
    B(){
      cout<<"B"<<endl;
    };
};
class C:A{
public:
  A a;
  B c;

};


int main(){

  B b;


   return 0;
}