#include <iostream>
using namespace std;

int main(){
  cout<<"Enter 4 digit number:"<<endl;
  int A;
  cin>>A;
  int firstDigit=A/1000;
  int secondDigit=(A/100)%10;
  int thirdDigit=(A/10)%10;
  int fourthDigit=A%10;

  int newNumber1=firstDigit*10+fourthDigit;
  int newNumber2 = secondDigit*10+thirdDigit;

  if(newNumber1<newNumber2){
    cout<<newNumber1<<"<"<<newNumber2<<endl;

  }else if(newNumber2<newNumber1){
    cout<<newNumber1<<">"<<newNumber2<<endl;

  }else{
    cout<<newNumber1<<"="<<newNumber2<<endl;
  }
  return 0;
}