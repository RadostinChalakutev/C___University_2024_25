#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int y;
    cin >> y;
    int z;
    cin >> z;
    int lcmOfTwo=0;
    int gcd=0;

    for (int i = 1; i <=x && i<=y && i<=z; ++i) {
        if (x%i==0 && y%i==0 && z%i==0) {
            gcd=i;
            lcmOfTwo=x*y/gcd;
        }
    }
    if (x<10 ||x>100 || y<10 || y>100 || z<10 || z>100) {
        cout<<"Invalid input data!"<<endl;
    }else {
        int lcm;
        lcm=lcmOfTwo*z/gcd;
        cout<<lcm<<endl;
    }
    return 0;



    
}