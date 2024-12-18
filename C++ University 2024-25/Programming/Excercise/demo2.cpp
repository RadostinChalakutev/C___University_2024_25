#include <iostream>
#include "demo.h"
using namespace std;


void printFirstNPerfectNumbers(int n) {
  int count = 0;
  int i = 1;
  while (count < n) {
    if (i==0) {
      cout << i << " "; count++;
    }
    i++;
  } cout << endl;
}

