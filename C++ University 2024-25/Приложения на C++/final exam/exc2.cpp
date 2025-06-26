#include <cmath>
#include <iostream>
using namespace std;

int main(){

  int a;
  cin>>a;
  int b;
  cin>>b;
  int sum=1;


  for(int i=0;i<b;i++) {
      sum*=a;

  }
cout<<sum<<endl;
}