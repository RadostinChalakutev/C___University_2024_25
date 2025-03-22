#include <iostream>
using namespace std;

int main(){
  const int n=3;
  int A[n]={1,1,7};
  int B[n]={3,7,3};
  int C[n+1];
  int prenos=0;
  int k=0;
  while(k<n){
    int sum=A[k]+B[k]+prenos;
    C[k]=sum%10;
    prenos = sum/10;
    k=k+1;
  }
  C[n]=prenos;

  cout<<"Result: ";
  for(int i=0;i<n;i++){
    cout<<C[i]<<" ";
  }
  cout<<endl;
  return 0;
}