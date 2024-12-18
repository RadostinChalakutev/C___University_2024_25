#include <iostream>
using namespace std;


int main(){

  cout<<"Number:"<<endl;

  int number;
  cin>>number;

  int absNumber=abs(number);
  int counter=0;

  while(absNumber>0){
    absNumber/=2;
    counter++;
  }
  int* reminder=new int[counter];
  absNumber=abs(number);

  for(int i=0;i<counter;i++){
    reminder[i]=absNumber%2;
    absNumber/=2;


  }
    cout<<number<<"(10)= "<<endl;

    for(int i=0;i<counter;i++){
      cout<<reminder[i];

    }
    cout<<"(2)"<<endl;

    delete[] reminder;

    return 0;


}