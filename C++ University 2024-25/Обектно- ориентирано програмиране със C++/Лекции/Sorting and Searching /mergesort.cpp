#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;


void merge(vector<int>& a, int from, int mid, int to)
{  int n = to - from + 1; 
   vector<int> b(n);

   int i1 = from;
     
   int i2 = mid + 1;
      
   int j = 0;
   
   while (i1 <= mid && i2 <= to)
   {  if (a[i1] < a[i2])
      {  b[j] = a[i1];
         i1++;
      }
      else
      {  b[j] = a[i2];
         i2++;
      }
      j++;
   }

  
   while (i1 <= mid)
   {  b[j] = a[i1];
      i1++;
      j++;
   }
   
   while (i2 <= to)
   {  b[j] = a[i2];
      i2++;
      j++;
   }

  
   for (j = 0; j < n; j++) a[from + j] = b[j];
}


void merge_sort(vector<int>& a, int from, int to)
{  if (from == to) return;
   int mid = (from + to) / 2;
  
   merge_sort(a, from, mid);
   merge_sort(a, mid + 1, to);
   merge(a, from, mid, to);
}


void print(vector<int> a)
{  for (int i = 0; i < a.size(); i++)
      cout << a[i] << " ";
   cout << "\n";
}


void rand_seed()
{  int seed = static_cast<int>(time(0));
   srand(seed);
}

int rand_int(int a, int b)
{  return a + rand() % (b - a + 1);
}

int main()
{  rand_seed();
   vector<int> v(20);
   for (int i = 0; i < v.size(); i++)
      v[i] = rand_int(1, 100);
   print(v);
   merge_sort(v, 0, v.size() - 1);
   print(v);
   return 0;
}
