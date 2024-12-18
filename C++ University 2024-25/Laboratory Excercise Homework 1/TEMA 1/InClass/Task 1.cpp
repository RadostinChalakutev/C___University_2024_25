#include <iostream>
using namespace std;

int main(){

  int a;
  int b;

  cout<<"Please enter a:"<<endl;
  cin>>a;

  do{
    cout<<"Please enter number b, different than 0"<<endl;
      cin>>b;

    }while(b==0);

    int q=a/b;
    int r=a%b;

  cout << a << " = " << b << " * " << q << " + " << r << endl;

    return 0;
}