#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    AGAIN:
    cout<<"Set value of degree(1 for Celsius, 2 for Fahrenheit):"<<endl;
    int value;
    cin>>value;


    if (value==1) {
        cout<<"Enter value:"<<endl;
        double degree;
        cin>>degree;
        double farhrenheit=(degree*1.8)+32;
        cout<<setprecision(2);
        cout<<degree<<" C->"<<farhrenheit<<" F"<<endl;
    }else if (value==2) {
        cout<<"Enter value:"<<endl;
        double degree;
        cin>>degree;
        double celsius=(degree-32)/1.8;

       cout<< setprecision(2);
        cout<<degree<<" F->"<<celsius<<" C"<<endl;
    }else {
        cout<<"Invalid data output!"<<endl;
        goto AGAIN;
    }
    return 0;
}