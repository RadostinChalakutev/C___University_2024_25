#include <iostream>
using namespace std;

bool is_power_of_two(int a){
  if(a<=0){
    return false;
  }
  return (a&(a-1))==0;
}

int main(){

  int a;
  cin>>a;

  if (is_power_of_two(a)==true) {
    cout<<a<<" is power of two"<<endl;

  }else {
    cout<<a<<" is not a power of two"<<endl;
  }


}