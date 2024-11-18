#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
    int y;
    cin>>y;
    int z;
    cin>>z;
    int gcd;



    for (int i = 1; i <=x && i<=y && i<=z; ++i) {
        if (x%i==0 && y%i==0 && z%i==0) {
            gcd = i;
        }
    }
    if (x<20 ||x>300 || y<20 || y>300 || z<20 || z>300) {
        cout<<"Invalid input data!"<<endl;
    }else {
        cout<<gcd<<endl;
    }
    return 0;
}


