#include <iostream>
using namespace std;

int greatestNumber(int a, int b, int c, int d) {
  int greatest;
  if (a > b && a > c && a > d) {
    greatest = a;
    return greatest;

  }else if (b > a && b > c && b > d) {
    greatest = b;
    return greatest;

  }else if (c > a && c > b && c > d) {
    greatest = c;
    return greatest;

  }else if (d > a && d > b && d > c) {
     greatest = d;
    return greatest;
  }
    return greatest;
}


int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  cout << greatestNumber(a, b, c, d) << endl;
}