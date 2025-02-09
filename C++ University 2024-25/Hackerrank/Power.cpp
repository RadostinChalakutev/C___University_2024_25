#include <iostream>
using namespace std;


int main(){
    int a;
    int power;
    cin>>a;
    cin>>power;
    int result=1;


    for(int i=1;i<=power;i++){
        result*=a;

    }

    cout<<result<<endl;
    return 0;
}