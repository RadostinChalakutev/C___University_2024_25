#include "functions.h"
#include <iostream>
#include <math.h>
#include <valarray>
#include <vector>
using namespace std;

//1.Функция, която връща сумата от делителите на едно число, без самото число.
int sumDivisors(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

//2. Функция, която показва всички делители на дадено число, без самото число.
vector<int> findDivisors(int number) {
    vector<int> divisors;
    for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }
    for (int divisor: divisors) {
        cout << divisor << " ";
    }
    cout << "" << endl;
    return divisors;
}

vector<int> findDivisors1(int number) {
    vector<int> divisors;
    for (int i = 1; i < number; ++i) {
        if (number % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

//записва се сечението на множеството от делителите на две числа
void intersectionOfDivisors(int x, int y) {
    vector<int> divisorForX = findDivisors1(x);
    vector<int> divisorForY = findDivisors1(y);
    vector<int> result;
    for (int i = 0; i < divisorForX.size(); ++i) {
        for (int j = 0; j < divisorForY.size(); ++j) {
            if (divisorForX[i] == divisorForY[j]) {
                result.push_back(divisorForX[i]);
                break;
            }
        }
    }
    for (int i: result) {
        cout << i << " ";
    }
    cout << endl;
}


vector<long> getDivisors(long n) {
    vector<long> divisors;
    for (long i = 1; i < n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }
    return divisors;
}

vector<long> commonDivisors(long x, long y) {
    vector<long> divisorsX = getDivisors(x);
    vector<long> divisorsY = getDivisors(y);
    vector<long> result;

    for (long i = 0; i < divisorsX.size(); ++i) {
        for (long j = 0; j < divisorsY.size(); ++j) {
            if (divisorsX[i] == divisorsY[j]) {
                result.push_back(divisorsX[i]);
                break;
            }
        }
    }
    return result;
}

// дали е просто число
bool isPrime1(long n) {
    if (n <= 1) {
        return false;
    }
    for (long i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

//взима простите числа и ги записва в масив
vector<int> getPrimes(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0 && isPrime1(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

//обединява множествата от делителите на две числа
vector<int> unionPrimeDivsors(int x, int y) {
    vector<int> primeDivisorsX = getPrimes(x);
    vector<int> primeDivisorsY = getPrimes(y);
    vector<int> unionSet;

    for (int i = 0; i < primeDivisorsX.size(); ++i) {
        unionSet.push_back(primeDivisorsX[i]);
    }
    for (int i = 0; i < primeDivisorsY.size(); ++i) {
        bool found = false;
        for (int j = 0; j < unionSet.size(); ++j) {
            if (unionSet[j] == primeDivisorsY[i]) {
                found = true;
                break;
            }
        }
        if (!found) {

        }
    }
    return unionSet;
}


//проверява дали числото е съвършенно
bool isPerfectNumber(long long  number) {
    if (number == sumDivisors(number)) {
        return true;
    } else {
        return false;
    }
}

long long mersennePrimeNumbers(int m) {
    return (1LL<<m)-1;
}

long long perfectNumberFromMersenne(int p) {
    return(1LL<<(p-1))*((1LL<<p)-1);
}

vector<long long> perfectNumbersInInterval(long long start, long long end) {
    vector<long long> perfectNumbers;

    for (int p = 2;; ++p) {
        long long mersenne = mersennePrimeNumbers(p);
        if (mersenne > end) {
            break;
        }
        if (isPrime(mersenne)) {
            long long mersennePerfectNumber = perfectNumberFromMersenne(p);
            if (mersennePerfectNumber >= start && mersennePerfectNumber <= end) {
                perfectNumbers.push_back(mersennePerfectNumber);
            }
            if (mersennePerfectNumber > end) {
                break;
            }
            if (pow(2, p - 1) > end) {
                break;
            }
        }
    }
    return perfectNumbers;
}


void printPerfectNumbers(const vector<long> &perfectNumbers) {
    for (long number: perfectNumbers) {
        cout << number << " ";
    }
    cout << endl;
}

bool isPrime(long long num) {
    if (num < 2) return false;
    for (long long i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

long long mersennePrimeNumbers1(int p) {
    return (1LL << p) - 1;
}

long long perfectNumberFromMersenne1(int p) {
    return (1LL << (p - 1)) * ((1LL << p) - 1);
}

vector<long long> firstNPerfectNumbers(int n) {
    vector<long long> perfect_numbers;
    int p = 2; // Започваме от първото просто число
    while (perfect_numbers.size() < n) {
        long long mersenne = mersennePrimeNumbers(p);
        if (isPrime(mersenne)) {
            long long perfect_number = perfectNumberFromMersenne(p);
            if (perfect_number <= 2305843008139952128) {
                perfect_numbers.push_back(perfect_number);
            } else {
                break; // Спираме, ако числото надхвърля интервала
            }
        }
        ++p;
    }
    return perfect_numbers;
}
/*7. Функция, която показва първите n на брой съвършени числа.*/
vector<long long> firstNPerfectNumbers1(int n) {
    {
        vector<long long> perfect_numbers;
        int p = 2; // Започваме от първото просто число
        while (perfect_numbers.size() < n) {
            long long mersenne = mersennePrimeNumbers(p);
            if (isPrime(mersenne)) {
                long long perfect_number = perfectNumberFromMersenne(p);
                perfect_numbers.push_back(perfect_number);
            }
            ++p;
        }
        return perfect_numbers;

    }
}


string perfectNumbersRepresentation(int p) {
    return "2^("+to_string(p-1)+").(2^"+to_string(p)+"-1)";
}

vector<string> findPerfectNumbersRepresentation(int n) {
    vector<string> representations;

    int p = 2;
    while (representations.size() < n) {
        long long mersenne =mersennePrimeNumbers(n);
        if (isPrime(mersenne)) {
            representations.push_back(perfectNumbersRepresentation(n));
        }
        ++p;
    }
    return representations;
}