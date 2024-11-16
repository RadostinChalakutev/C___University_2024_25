#include <iostream>

using namespace std;

int main() {
    int x;
    cin>>x;
    int y;
    cin>>y;
    if(x<2||x>16||y<1||y>100) {
        cout<<"Invalid input data!"<<endl;
        return 0;
    }
    const string digits="0123456789ABCDEF";
    string result="";
    while(y>0) {
        result=digits[y%x]+ result;
        y/=x;
    }

        cout<<result;

    return 0;
}