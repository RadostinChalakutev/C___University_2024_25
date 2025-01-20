#include <iostream>
using namespace std;

int main(){

  int count=0;
  string word;

  while(cin>>word){

    if(word=="end") {
      break;
    }
    count++;
  }
  cout<<count<<"words."<<endl;
  return 0;

  }