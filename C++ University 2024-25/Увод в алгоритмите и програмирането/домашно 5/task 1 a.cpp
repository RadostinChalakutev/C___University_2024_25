#include <iostream>
using namespace std;

int main(){
  int sum=0;

  for(int counter=1;counter<=10000; counter++) {
      sum=sum+(counter*counter);
  }
}