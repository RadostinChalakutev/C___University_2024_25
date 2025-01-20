#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;


void rand_seed(int x)
{  int seed = static_cast<int>(x);
    srand(x);
}

/**
   Computes a random integer in a range.
   @param a the bottom of the range
   @param b the top of the range
   @return a random integer x, a <= x and x <= b
*/
int rand_int(int a, int b)
{  return a + rand() % (b - a + 1);
}

int main()

{
  int x;
  cin >> x;
  rand_seed(x);
    int i;
    for (i = 1; i <= 10; i++)
    {  int d1 = rand_int(1, 6);
        int d2 = rand_int(1, 6);
        cout << d1 << " " << d2 << "\n";
    }
    cout << "\n";
    return 0;
}