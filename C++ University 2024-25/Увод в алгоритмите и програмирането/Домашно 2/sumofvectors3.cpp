#include <iostream>
#include <vector>
using namespace std;


int main(){
  vector<int>a={1,2,3};
  vector<int>b={4,5,6};
  vector<int>result;
  int sum;

  for(int i=a.size()-1;i>=0;--i){
    sum=a[i]+b[i];
    result.push_back(sum);
  }
  cout<<"The sum of vectors is:"<<endl;
  for (int i=result.size()-1;i>=0;--i) {
    cout<<result[i]<<endl;
  }
}