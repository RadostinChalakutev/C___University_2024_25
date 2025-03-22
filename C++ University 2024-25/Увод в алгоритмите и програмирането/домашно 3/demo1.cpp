#include <iostream>
using namespace std;

int main(){

  int i=1;

  Start:
  i=i+1;

  if(i>0){
    goto Start;
  }
  cout<<"Oh, no. It's full! i="<<i<<endl;

   return 0;
}


