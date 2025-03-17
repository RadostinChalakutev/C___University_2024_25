#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> addVectors(vector<int> a, vector<int>b){

  vector<int> result;
  int carry=0;
  int n=max(a.size(),b.size());
  while(a.size()<n){
    a.insert(a.begin(),0);
  }
  for(int k=0;k<n;++k){
    int sum=a[k]+b[k]+carry;
    carry = sum/10;
  }
  if(carry>0){
    result.push_back(carry);

  }
return result;
}
int main(){
  vector<int>a={1,2,3};
  vector<int>b={4,5,6};

  vector<int>sum=addVectors(a,b);
  for(int i=sum.size()-1;i>=0;--i){
    cout<<sum[i];
  }
  return 0;

}
