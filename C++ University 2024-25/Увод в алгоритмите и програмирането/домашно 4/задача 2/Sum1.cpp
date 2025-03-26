#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int Sum=0;

  for(int i=1;i<=n;i++){
    Sum+=i*i;

  }
  cout<<Sum;
  return 0;
}