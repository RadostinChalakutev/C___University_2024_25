#include <iostream>
using namespace std;


int main(){


  int n;
  cin>>n;
  int t=1;

  if(n<2||n>2000){
    cout<<"Invalid input data!"<<endl;
    return 0;
    }
  else{
      for(int i=2 ;i*i<=n; i++){
        int power=0;

        while(n%i==0){
          n/=i;
          power++;

          }
        t*=(power+1);

      }
    if (n>1) {
      t*=2;
    }
    cout<<t<<endl;
    }

}
