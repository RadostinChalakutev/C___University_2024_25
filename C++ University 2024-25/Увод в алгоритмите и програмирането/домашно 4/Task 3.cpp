#include <iostream>
using namespace std;

int main(){
  long long fact=1;
  int n;
  cin>>n;

  for(int i=1;i<=n;i++){
    long long temp=fact*i;
    if(temp/i!=fact){
      cout<<"The overflow occurs at the number: "<<i<<endl;
      return 1;
    }
    fact=fact*i;//overflow настъпва при числото 21

  }
  cout<<fact;
}