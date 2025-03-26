#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int Sum=0;

  for(int i=3;i<n;i++){
    Sum=Sum+(i*i*i-2*i);

  }
  cout<<Sum;
  return 0;

}