#include <iostream>
using namespace std;


int gcdFunction(int a, int b, int &s, int &t) {
    if (a == 0) {
        s = 0;
        t = 1;
        return b;
    }
    int s1, t1;
    int modulD = b % a;
    int gcd = gcdFunction(modulD, a, s1, t1);
    s = t1 - (b / a) * s1;
    t = s1;
    return gcd;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;


    if (a < 1 || a > 100 || b < 1 || b > 100 || c < 1 || c > 100) {
        cout << "Invalid input data!";
        return 0;
    }

    int s, t;
    int gcd = gcdFunction(a, b, s, t);


    if (c % gcd != 0) {
        cout << "No solution!";
        return 0;
    }


    s *= c / gcd;
    t *= c / gcd;


    cout << s << endl;
    cout << t << endl;

    return 0;
}
