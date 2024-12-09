#include <iostream>
using namespace std;

/*for (int j = 1; j <= x && j <= y; ++j) {
    if (x % j == 0 && y % j == 0) {
        gcdNaXiY = j;
    }
}
*/

int GCD(int a,int b, int &x, int &y) {
    //gcd на a и b
    int gcd=0;
    for(int i=1;i<=a&&i<=b;++i){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    int x1;
    int y1;
    x=y1-(b/a)*x1;
    y=x1;
    return gcd;
}

int main(){

  int a;
  cin>>a;
  int b;
  cin>>b;
  int c;
  cin>>c;
    int x ;
    int y;
  int gcd = GCD(a,b,x,y);

    if (c% gcd !=0) {
        cout<<"No solution!"<<endl;
        return 0;
    }
    x *=c/gcd;
    y *=c/gcd;
    cout<<x<<" "<<y<<endl;
    return 0;

  }
