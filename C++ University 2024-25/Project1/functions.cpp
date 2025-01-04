#include "functions.h"
#include <iostream>
using namespace std;

int sumOfDivisors(int number){
  int sum = 0;
  for(int i = 0; i <=number; i++){
    if(number%i == 0){
      sum += i;
    }
  }
  return sum;
}

