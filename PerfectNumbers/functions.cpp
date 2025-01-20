#include "functions.h"
#include <iostream>

#include <valarray>
#include <vector>
using namespace std;


long sumDivisors(long  n) {
    long  sum = 0;
    for (long  i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

void findDivisors(long  n) {
    vector<long > divisors;
    for (long  i = 1; i < n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    for (long  divisor: divisors) {
        cout << divisor << " ";
    }
    cout << endl;
}

vector<long > getDivisors(long  n) {
    vector<long > divisors;
    for (long  i = 1; i < n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

vector<long > commonDivisors(long  x, long  y) {
    vector<long > divisorsX = getDivisors(x);
    vector<long > divisorsY = getDivisors(y);
    vector<long > result;

    for (long  i = 0; i < divisorsX.size(); ++i) {
        for (long  j = 0; j < divisorsY.size(); ++j) {
            if (divisorsX[i] == divisorsY[j]) {
                result.push_back(divisorsX[i]);
                break;
            }
        }
    }
    return result;
}

bool isPrime(long  n) {
    if (n <= 1) {
        return false;
    }
    for (long  i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

vector<long > getPrimes(long  n) {
    vector<long > primes;
    for (long  i = 2; i <= n; ++i) {
        if (n % i == 0 && isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

vector<long > unionPrimeDivsors(long  x, long  y) {
    vector<long > primeDivisorsX = getPrimes(x);
    vector<long > primeDivisorsY = getPrimes(y);
    vector<long > unionSet;

    for (long  divisorY: primeDivisorsY) {
        bool found = false;
        for (long  divisorX: primeDivisorsX) {
            if ((divisorY == divisorX)) {
                found = true;
                break;
            }
        }
        if (!found) {
            unionSet.push_back(divisorY);
        }
    }
    return unionSet;
}

bool isPerfectNumber(long  number) {
    if (number == sumDivisors(number)) {
        return true;
    } else {
        return false;
    }
}

vector<long > PerfectNumberInInterval(long  start, long  end) {
    vector<long > PerfectNumbersInINterval;
   /* for (long long i = start / 2 * 2; i <= end / 2 * 2; ++i) {
        if (isPerfectNumber(i)) {
            perfectNumbers.push_back(i);
        }
    }*/
    for (long  p=start;p<end;++p) {
        if (isPrime(p)) {
            long  mersenne=pow(2,p)-1;
            if (isPrime(mersenne)) {
                long  perfectNumbers=pow(2,p-1)*mersenne;
                if (perfectNumbers>=start&&perfectNumbers<=end) {
                    PerfectNumbersInINterval.push_back(perfectNumbers);
                }
            }
        }
    }
    return PerfectNumbersInINterval;
}

void printPerfectNumbers(const vector<long > &perfectNumbers) {
    for (long  number: perfectNumbers) {
        cout << number << " ";
    }
    cout << endl;
}

vector<long > findFirstNPerfectNumbers(long  n) {
    vector<long > perfectNumbers;
    long  count = 0;
    long  number = 2;
    while (count < n) {
        long  mersennePrime =pow(2,number)-1;
        if (isPrime(mersennePrime)) {
            long  perfectNumber = pow(2,number-1)*mersennePrime;
            perfectNumbers.push_back(perfectNumber);
            count++;
        }
        number++;
    }
    return perfectNumbers;
}

/*7. Функция, която показва първите n на брой съвършени числа.*/
void printNPerfectNumbers(const vector<long > &perfectNumbers) {
    for (long  number: perfectNumbers) {
        cout << number << " ";
    }
    cout << endl;
}

vector<long > arrayPerfectNumbersInInterval(long  start, long  end) {
    vector<long > perfectNumbers;
    for (long  i = start; i <= end; ++i) {
        if (isPerfectNumber(i)) {
            perfectNumbers.push_back(i);
        }
    }
    return perfectNumbers;
}
vector<string> findPerfectNumbersRepresentation(long long n) {
    vector<string> representations;
    long long count = 0;
    long long p = 2;
    while (count < n) {
        long long mersennePrime = pow(2, p) - 1;
        if (isPrime(mersennePrime)) {
            string representation = "2^(" + to_string(p - 1) + ").(2^" + to_string(p) + "-1)";
            representations.push_back(representation);
            count++;
        } p++;
    }
    return representations;
}
