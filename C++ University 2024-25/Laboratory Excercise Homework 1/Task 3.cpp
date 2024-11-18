#include <iostream>


using namespace std;


int main() {
    int x;
    cin >> x;
    int y;
    cin >> y;
    int z;
    cin >> z;
    int gcd=0;
    int gcdNaXiY = 0;
    int gcdNaXiZ = 0;
    int gcdNaYiZ = 0;
    int lcmNaXYZ=0;

if (x<10||x>100||y<10||y>100||z<10||z>100) {
    cout<<"Invalid input data!"<<endl;
    return 0;
}




    //gcd(x,y,z)
    for (int i = 1; i <= x && i <= y && i <= z; ++i) {
        if (x % i == 0 && y % i == 0 && z % i == 0) {
            gcd = i;
        }
    }

    //gcd(x,y)
    for (int j = 1; j <= x && j <= y; ++j) {
        if (x % j == 0 && y % j == 0) {
            gcdNaXiY = j;
        }
    }
    //gcd(x,z)
    for (int k = 1; k <= x && k <= z; ++k) {
        if (x % k == 0 && z % k == 0) {
            gcdNaXiZ = k;
        }
    }
    //gcd(y,z)
    for (int l = 1; l <= y && l <= z; ++l) {
        if (y % l == 0 && z % l == 0) {
            gcdNaYiZ = l;
        }
    }
    lcmNaXYZ=(x*y*z*gcd)/(gcdNaXiY*gcdNaXiZ*gcdNaYiZ);

    cout << lcmNaXYZ;

    return 0;
}
