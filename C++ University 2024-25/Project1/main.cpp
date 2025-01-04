#include <iostream>
using namespace std;
#include "functions.h"

int main(){
  srand(time(NULL));

  int n;
  cin>>n;

  sumOfDivisors(n);
  return 0;
}