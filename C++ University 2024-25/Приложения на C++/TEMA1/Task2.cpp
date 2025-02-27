#include <iostream>
using namespace std;

int main(){
    cout<<"Set value of degree(1 for Celsius, 2 for Fahrenheit):"<<endl;
    char value;
    cin>>value;
  cout<<"Enter value:"<<endl;
   double degrees;
   cin>>degrees;
   double celsius;
   double fahrenheit;
  celsius=degrees*1.8+32;
  fahrenheit=(degrees-32)/1.8;
   if(value=='1'){

     cout<<celsius<<"C -> "<<fahrenheit<<"F"<<endl;
   }else if(value=='2'){
     cout<<fahrenheit<<"F -> "<<celsius<<"C"<<endl;
   }else{
     cout<<"Invalid Input"<<endl;
  }


}