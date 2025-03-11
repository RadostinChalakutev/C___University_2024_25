#include <iostream>
using namespace std;

int find_GCD(int a, int b){
  if(b==0){
    return a;
  }
  int gcd=a%b;
  return find_GCD(b,gcd);
}

int main(){

  int a,b;
  cin>>a>>b;
  int GCD=find_GCD(a,b);
  cout<<GCD;

  return 0;
}

