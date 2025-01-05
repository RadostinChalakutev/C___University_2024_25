#include <iostream>
using namespace std;
#include "functions.h"
#include "functions.cpp"

int main() {
    Broi:
    cout<<"Enter a number higher than 0:";
    long  n;
    cin >> n;
    cout<<"Enter an integer higher than 0: ";
    long  p;
    cin >> p;


    const long MAX=2305843008139952128LL;
    if (n<0||p<0) {
        cout<<"Invalid input data"<<endl;
        goto Broi;
    }
    long  start;

    long  end;

    long   broi;

    cout<<"Sum of divisors of number "<<n<<" is: ";
    cout << sumDivisors(n) << endl;
    cout<<"Divisors of number "<<n<<" are: ";
    findDivisors(n);
    vector<long > intersection = commonDivisors(n, p);
    cout<<intersection.size();
    vector<long  > unionSet = unionPrimeDivsors(n, p);

    if (isPerfectNumber(n)==true) {
        cout << "Number "<<n;
        cout<<" is perfect" << endl;
    } else {
        cout << "Number "<<n;
        cout<<" is not perfect" << endl;
    }

    cout<<"Enter an integer a higher than 0 to start the range: "<<endl;
    cin>>start;
    Start:
    cout<<"Enter an integer b higher than 0 and a to close the range: "<<endl;
    cin>>end;
    if (start>end) {
        cout<<"Invalid input data"<<endl;
        goto Start;
    }
    vector<long  >perfectNumbers=PerfectNumberInInterval(start,end);
    int perfectNumbersSize= perfectNumbers.size();
    if (perfectNumbersSize == 0) {
        cout<<"No perfect numbers found!"<<endl;
    }else {
        cout<<"Perfect numbers in the interval of "
    <<start<<" to "<<end<<" are: "<<endl;
        printPerfectNumbers(perfectNumbers);
    }
    Again:
    cout<<"Enter an integer lower or equal to 8 to visualize perfect numbers: ";
    cin>>broi;
    if (broi>8||broi<0) {
        goto Again;
    }
    vector<long >printNPerfectNumbers=findFirstNPerfectNumbers(broi);
   printPerfectNumbers(printNPerfectNumbers);
   /* vector<long  >savePerfectNUmbersInINterval=arrayPerfectNumbersInInterval(start,end);
    cout << "Представянето на първите " << n
    << " съвършени числа е: ";
    vector<string> representations = findPerfectNumbersRepresentation(n);
    for (const auto& representation : representations) {
        cout << representation << " ";
    }
    cout << endl;*/
    return 0;

}
