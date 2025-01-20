#ifndef FUNCTONS_H
#define FUNCTONS_H
#include <vector>

long  sumDivisors(long  n);
void findDivisors(long  n);
vector<long >getDivisors(long  n);
vector<long  >commonDivisors(long  x, long y) ;
bool isPrime(long   n);
vector<long >getPrimes(long  n);
vector<long > unionPrimeDivsors(long  x,long  y);
bool isPerfectNumber(long  number);
vector<long  > PerfectNumberInInterval(long  start,long  end);
void printPerfectNumbers(const vector<long >& perfectNumbers);
vector<long >findFirstNPerfectNumbers(long   n);
void printNPerfectNumbers(const vector<long >& perfectNumbers);
vector<long > arrayPerfectNumbersInInterval(long  start,long  end);
vector<string> findPerfectNumbersRepresentation(long long n);
#endif
